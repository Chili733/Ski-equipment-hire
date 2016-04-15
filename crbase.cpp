#include "main.h"
#include <cstring>
using namespace std;

//конструктор
s::s(int rr, int idd, char* n)
  {
    rost=rr;
    id=idd;
    name=new char[strlen(n)];
    strcpy(name,n);
    next=NULL;
    delete n;
  }


b::b(int rr, int idd, int t, char* n)
  {
    type=t;
    rasm=rr;
    id=idd;
    name=new char[strlen(n)];
    strcpy(name,n);
    next=NULL;
    delete n;
  }


int check(class s* na, int id)
  {
    class s* ch=NULL;
    ch=na;
    while(ch->next!=NULL)
      {
        if(ch->getid()==id)
          {
            cout<<"Такой id занят!"<<endl;
            return 1;
          }
        ch=ch->next;
      }
        if(ch->getid()==id)
          {
            cout<<"\n\nТакой id занят!\n\n"<<endl;
            return 1;
          }
  }

int checkb(class b* na, int id)
  {
    class b* ch=NULL;
    ch=na;
    while(ch->next!=NULL)
      {
        if(ch->getid()==id)
          {
            cout<<"Такой id занят!"<<endl;
            return 1;
          }
        ch=ch->next;
      }
        if(ch->getid()==id)
          {
            cout<<"\n\nТакой id занят!\n\n"<<endl;
            return 1;
          }
  }

class s* crbases(class s* na)
  {
    class s* nachalo;
    int r;
    int d;
    char* n;
    na=NULL;
    n=new char[4];
    strcpy(n,"Free");
    na=new class s(1,0,n);
    nachalo=na;
    system("clear");
    cout<<"Создание базы данных.\nВведите ростовку нового снаряжения\n";
    cin>>r;
    if (r<=119 || r>=201)
      {
        cout<<"\n\nНекорректный ввод ростовки\n\n"<<endl;
        exit(1);
      }
    cout<<"Введите уникальный id нового снаряжения\n";
    cin>>d;
    if (d<=0){cout<<"Неприемлемый id!"<<endl;return NULL;}
    n=new char[4];
    strcpy(n,"Free");
    na=na->next=new class s(r,d,n);
    while(1)
      {
        cout<<"Введите ростовку следующего снаряжения\n0 - завершение заполнения\n";
        cin>>r;
        if(r==0)
          break;
        if (r<=119 || r>=201)
          {
            cout<<"\n\nНекорректный ввод ростовки\n\n"<<endl;
            return nachalo;
          }
        cout<<"Введите уникальный id следующего снаряжения"<<endl;
        cin>>d;
        if (d<=0){cout<<"Неприемлемый id!"<<endl;break;}
        if (check(nachalo,d)==1)
            return nachalo;
        n=new char[4];
        strcpy(n,"Free");
        na=na->next=new class s(r,d,n);
        //na=na->next;
      }
    return nachalo; 
  }

class b* crbasesb(class b* na)
  {
    class b* nachalo;
    int y;
    int r;
    int d;
    char* n;
    n=new char[4];
    strcpy(n,"Free");
    na=new class b(1,0,1,n);
    nachalo=na;
    system("clear");
    cout<<"Создание базы данных.\nВведите размер новых ботинков\n";
    cin>>r;
    if (r<=35 || r>=48)
      {
        cout<<"\n\nНекорректный ввод размера\n\n"<<endl;
        exit(1);
      }
    cout<<"Введите уникальный id новых ботинков\n";
    cin>>d;
    if (d<=0){cout<<"Неприемлемый id!"<<endl;return NULL;}
    cout<<"Введите тип ботинков:\n1 - ботинки для лыж\n2 - ботинки для сноуборда"<<endl;
    cin>>y;
    if(y<=0 || y>=3)
      {
        cout<<"Некорректный ввод типа"<<endl;
        exit(1);
      }
    n=new char[4];
    strcpy(n,"Free");
    na=na->next=new class b(r,d,y,n);
    while(1)
      {
        cout<<"Введите размер следующих ботинков\n0 - завершение заполнения\n";
        cin>>r;
        if(r==0)
          break;
        if (r<=35 || r>=48)
          {
            cout<<"\n\nНекорректный ввод размера\n\n"<<endl;
            return nachalo;
          }
        cout<<"Введите уникальный id следующих ботинков"<<endl;
        cin>>d;
        if (d<=0){cout<<"Неприемлемый id!"<<endl;return NULL;}
        if (checkb(nachalo,d)==1)
            return nachalo;
        cout<<"Введите тип ботинков:\n1 - ботинки для лыж\n2 - ботинки для сноуборда"<<endl;
        cin>>y;
        if(y<=0 || y>=3)
          {
            cout<<"Некорректный ввод типа"<<endl;
            exit(1);
          }
        n=new char[4];
        strcpy(n,"Free");
        na=na->next=new class b(r,d,y,n);
      }
    return nachalo;
    
  }
