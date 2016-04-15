#include "main.h"
using namespace std;



class s* arenda(class s* na)
  {
    class s* ar;
    ar=na;
    string m;
    char* nm;
    char* nam;
    char* sr;
    int rr;
    sr=new char[4];
    strcpy(sr,"Free");
    cout<<"Введите желаемую ростовку"<<endl;
    cin>>rr;
    if (rr<=119 || rr>=201)
      {
        cout<<"\n\nНекорректный ввод ростовки\n\n"<<endl;
        return ar;
      }
    while(1)
      {
        if(na->getrost()==rr && strcmp(na->name,sr)==0)
          {
            cout<<"Введите Ваше имя и фамилию без пробела"<<endl;
            cin.ignore();
            cin.clear();
            getline(cin,m);
            nm=new char(m.length());
            strcpy(nm,m.c_str());
            nam=new char[strlen(nm)];
            strcpy(nam,nm);
            delete na->name;
            na->name=new char[strlen(nm)];
            strcpy(na->name,nam);
            cout<<"\n\nСнаряжение взято. Спасибо за пользование нашим прокатом!\n\n"<<endl;
            delete nam;
            return ar;
          }
        else
          {
            na=na->next;
          }
        if(na->next==NULL && na->getrost()!=rr && strcmp(na->name,sr)!=0)
          {
            cout<<"\n\nИзвините, в наличии не имеется доступного снаряжения данной ростовки\n\n"<<endl;
            return ar;
          }
      }
    delete sr;
  }


class s* vozvrat(class s* na)
  {
    class s* vo;
    vo=na;
    string sp;
    char* p;
    cout<<"Введите Ваши имя и фамилию"<<endl;
    cin.ignore();
    getline(cin,sp);
    p=new char[sp.length()];
    strcpy(p,sp.c_str());
    while(strcmp(na->name,p)!=0 && na->next!=NULL)
      na=na->next;
    if(na->next==NULL && strcmp(na->name,p)!=0)
      {
        cout<<"Вы не брали снаряжения в прокат!"<<endl;
        return vo;
      }
    if(strcmp(na->name,p)==0)
      {
        delete na->name;
        na->name=new char[4];
        strcpy(na->name,"Free");
        cout<<"Снаряжение возвращено. Спасибо за пользование нашим прокатом!"<<endl;
        return vo;
      }
  }



class b* arendab(class b* na)
  {
    class b* ar;
    ar=na;
    string m;
    char* nm;
    char* nam;
    char* sr;
    int rr;
    int tt;
    sr=new char[4];
    strcpy(sr,"Free");
    cout<<"Введите желаемый размер"<<endl;
    cin>>rr;
    if (rr<=35 || rr>=48)
      {
        cout<<"\n\nНекорректный ввод размера\n\n"<<endl;
        return ar;
      }
    cout<<"Введите желаемый тип\n1 - Ботинки для лыж\n2 - Ботинки для сноуборда"<<endl;
    cin>>tt;
    while(1)
      {
        if(na->next==NULL && na->getrasm()!=rr && na->gettype()!=tt && strcmp(na->name,sr)!=0)
          {
            cout<<"\n\nИзвините, в наличии не имеется доступных ботинков данного размера и типа\n\n"<<endl;
            return ar;
          }
        if(na->getrasm()==rr && na->gettype()==tt && strcmp(na->name,sr)==0)
          {
            cout<<"Введите Ваше имя и фамилию без пробела"<<endl;
            cin.ignore();
            cin.clear();
            getline(cin,m);
            nm=new char(m.length());
            strcpy(nm,m.c_str());
            nam=new char[strlen(nm)];
            strcpy(nam,nm);
            delete na->name;
            na->name=new char[strlen(nm)];
            strcpy(na->name,nam);
            cout<<"\n\nБотинки взяты. Спасибо за пользование нашим прокатом!\n\n"<<endl;
            delete nam;
            return ar;
          }
        else
          {
            na=na->next;
          }
      }
    delete sr;
  }


class b* vozvratb(class b* na)
  {
    class b* vo;
    vo=na;
    string sp;
    char* p;
    cout<<"Введите Ваши имя и фамилию"<<endl;
    cin.ignore();
    getline(cin,sp);
    p=new char[sp.length()];
    strcpy(p,sp.c_str());
    while(strcmp(na->name,p)!=0 && na->next!=NULL)
      na=na->next;
    if(na->next==NULL && strcmp(na->name,p)!=0)
      {
        cout<<"Вы не брали снаряжения в прокат!"<<endl;
        return vo;
      }
    if(strcmp(na->name,p)==0)
      {
        delete na->name;
        na->name=new char[4];
        strcpy(na->name,"Free");
        cout<<"Снаряжение возвращено. Спасибо за пользование нашим прокатом!"<<endl;
        return vo;
      }
  }
