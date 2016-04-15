#include "main.h"
using namespace std;



class s* del(class s* na)
  {
    class s* de;
    class s* buf;
    int d;
    de=na;
    cout<<"Введите id снаряжения, которое нужно удалить из базы"<<endl;
    cin>>d;
    if(na->getid()==d)
      {
        de=na->next;
        na=NULL;
        cout<<"\n\nСнаряжение удалено из базы.\n\n"<<endl;
        return de;
      }
    while(na->next->getid()!=d && na->next->next!=NULL)
      {
        na=na->next;
      }
    if(na->next->getid()==d && na->next->next!=NULL)
      {
        buf=na->next->next;
        na->next=NULL;
        na->next=buf;
        cout<<"\n\nСнаряжение удалено из базы.\n\n"<<endl;
        return de;
      }
    if(na->next->getid()==d && na->next->next==NULL)
      {
        na->next=NULL;
        cout<<"\n\nСнаряжение удалено из базы.\n\n"<<endl;
        return de;
      }
    cout<<"\n\nСнаряжения с таким id нет в базе!\n\n"<<endl;
    return de;
  }


class b* delb(class b* na)
  {
    class b* de;
    class b* buf;
    int d;
    de=na;
    cout<<"Введите id снаряжения, которое нужно удалить из базы"<<endl;
    cin>>d;
    if(na->getid()==d)
      {
        de=na->next;
        na=NULL;
        cout<<"\n\nСнаряжение удалено из базы.\n\n"<<endl;
        return de;
      }
    while(na->next->getid()!=d && na->next->next!=NULL)
      {
        na=na->next;
      }
    if(na->next->getid()==d && na->next->next!=NULL)
      {
        buf=na->next->next;
        na->next=NULL;
        na->next=buf;
        cout<<"\n\nБотинки удалены из базы.\n\n"<<endl;
        return de;
      }
    if(na->next->getid()==d && na->next->next==NULL)
      {
        na->next=NULL;
        cout<<"\n\nБотинки удалены из базы.\n\n"<<endl;
        return de;
      }
    cout<<"\n\nБотинков с таким id нет в базе!\n\n"<<endl;
    return de;
  }
