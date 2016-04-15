#include "main.h"
using namespace std;



class s* dob(class s* na)
  {
    class s* d;
    int rr;
    int idd;
    char* n;
    n=new char[4];
    strcpy(n,"Free");
    d=na;
    while(na->next!=NULL)
      na=na->next;
    cout<<"Введите ростовку добавляемого в базу снаряжения:"<<endl;
    cin>>rr;
    if (rr<=119 || rr>=201)
      {
        cout<<"\n\nНекорректный ввод ростовки\n\n"<<endl;
        delete n;
        return d;
      }
    cout<<"Введите уникальный id добавляемого в базу снаряжения"<<endl;
    cin>>idd;
    if (idd<=0){cout<<"Неприемлемый id!"<<endl;delete n;return d;}
    if (check(d,idd)==1)
      {
        delete n;
        return d;
      }
    na->next=new class s(rr,idd,n);
    cout<<"\n\nСнаряжение успешно добавлено в базу!\n\n"<<endl;
    return d;
  }



class b* dobb(class b* na)
  {
    class b* d;
    int tt;
    int rr;
    int idd;
    char* n;
    n=new char[4];
    strcpy(n,"Free");
    d=na;
    while(na->next!=NULL)
      na=na->next;
    cout<<"Введите размер добавляемых в базу ботинков:"<<endl;
    cin>>rr;
    if (rr<=35 || rr>=48)
      {
        cout<<"\n\nНекорректный ввод размера\n\n"<<endl;
        delete n;
        return d;
      }
    cout<<"Введите уникальный id добавляемых в базу ботинков"<<endl;
    cin>>idd;
    if (idd<=0){cout<<"Неприемлемый id!"<<endl;delete n;return d;}
    if (checkb(d,idd)==1)
      {
        delete n;
        return d;
      }
    cout<<"Введите тип ботинков:\n1 - ботинки для лыж\n2 - ботинки для сноуборда"<<endl;
    cin>>tt;
    if(tt<=0 || tt>=3)
      {
        cout<<"Некорректный ввод типа"<<endl;
        delete n;
        return d;
      }
    na->next=new class b(rr,idd,tt,n);
    cout<<"\n\nБотинки успешно добавлены в базу!\n\n"<<endl;
    return d;
  }
