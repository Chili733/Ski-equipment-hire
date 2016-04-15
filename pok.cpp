#include "main.h"
#include <cstring>
using namespace std;



int pok(class s* n)
  {
    if(n!=NULL)
    n=n->next;
    if(n==NULL)
      {
        cout<<"Ошибка показа."<<endl;
        return 0;
      }
    cout<<"Ростовка:\tid:\tИмя:"<<endl;
    cout<<n->getrost()<<"\t\t"<<n->getid()<<"\t"<<n->name<<endl;
    if(n->next!=NULL)
      {
        n=n->next;
        while(1)
          {
            if(n->next!=NULL)
              {
                cout<<n->getrost()<<"\t\t"<<n->getid()<<"\t"<<n->name<<endl;
                n=n->next;
              }
            if(n->next==NULL)
              break;
          }
        cout<<n->getrost()<<"\t\t"<<n->getid()<<"\t"<<n->name<<endl;
      }
    return 1;
  }


int pokb(class b* n)
  {
    if(n!=NULL)
    n=n->next;
    if(n==NULL)
      {
        cout<<"Ошибка показа."<<endl;
        return 0;
      }
    cout<<"В типе:\n1 - ботинки для лыж\n2 - ботинки для сноуборда\nРазмер:\t\tid:\tТип:\tИмя:"<<endl;
    cout<<n->getrasm()<<"\t\t"<<n->getid()<<"\t"<<n->gettype()<<"\t"<<n->name<<endl;
    if(n->next!=NULL)
      {
        n=n->next;
        while(1)
          {
            if(n->next!=NULL)
              {
                cout<<n->getrasm()<<"\t\t"<<n->getid()<<"\t"<<n->gettype()<<"\t"<<n->name<<endl;
                n=n->next;
              }
            if(n->next==NULL)
              break;
          }
        cout<<n->getrasm()<<"\t\t"<<n->getid()<<"\t"<<n->gettype()<<"\t"<<n->name<<endl;
      }
    return 1;
  }
