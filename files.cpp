#include "main.h"
#include <fstream>
using namespace std;



class s* chts(char* file)
  {
    fstream f;
    int rr;
    int idd;
    int m;
    int ident=1;
    char* nn;
    class s* e=NULL;
    class s* go;
    cout<<"Считывание базы из файла...\n";
    f.open(file, ios::binary | ios::in);
    if(f == NULL)
      {
        cout<<"Не удалось считать базу данных из файла!\n";
        f.close();
        return e;
      }
    while(1)
      {
        if (f.get()==EOF)
          {
            f.close();
            return go;
          }
        else
          f.unget();
        f.read((char*)&rr,sizeof(int));
        f.read((char*)&idd,sizeof(int));
        f.read((char*)&m,sizeof(int));
        nn=new char[m];
        f.read(nn,sizeof(char)*m);
        if(ident==1)
          {
            e=new class s(rr, idd, nn);
            go=e;
            ident=2;
          }
        else
          {
            e->next=new class s(rr, idd, nn);
            e=e->next;
          }
      }
    f.close();
    return go;
  }

void zapf(char* file, class s* et)
  {
    fstream f;
    f.open(file,ios::binary|ios::out);
    int sim;
    while(1)
      {
        sim=et->getrost();
        f.write((char*)&sim,sizeof(int));
        sim=et->getid();
        f.write((char*)&sim,sizeof(int));
        sim=strlen(et->name);
        f.write((char*)&sim,sizeof(int));
        f.write(et->name,sizeof(char)*strlen(et->name));
        if(et->next!=NULL)
          et=et->next;
        else
          {
            f.close();
            break;
          }
      }
  }

//Для боитинков:

class b* chtsb(char* file)
  {
    fstream f;
    int tt;
    int rr;
    int idd;
    int m;
    int ident=1;
    char* nn;
    class b* e=NULL;
    class b* go;
    cout<<"Считывание базы из файла...\n";
    f.open(file, ios::binary | ios::in);
    if(f == NULL)
      {
        cout<<"Не удалось считать базу данных из файла!\n";
        f.close();
        return e;
      }
    while(1)
      {
        if (f.get()==EOF)
          {
            f.close();
            return go;
          }
        else
          f.unget();
        f.read((char*)&rr,sizeof(int));
        f.read((char*)&idd,sizeof(int));
        f.read((char*)&tt,sizeof(int));
        f.read((char*)&m,sizeof(int));
        nn=new char[m];
        f.read(nn,sizeof(char)*m);
        if(ident==1)
          {
            e=new class b(rr, idd, tt, nn);
            go=e;
            ident=2;
          }
        else
          {
            e->next=new class b(rr, idd, tt, nn);
            e=e->next;
          }
      }
    f.close();
    return go;
  }

void zapfb(char* file, class b* et)
  {
    fstream f;
    f.open(file,ios::binary|ios::out);
    int sim;
    while(1)
      {
        sim=et->getrasm();
        f.write((char*)&sim,sizeof(int));
        sim=et->getid();
        f.write((char*)&sim,sizeof(int));
        sim=et->gettype();
        f.write((char*)&sim,sizeof(int));
        sim=strlen(et->name);
        f.write((char*)&sim,sizeof(int));
        f.write(et->name,sizeof(char)*strlen(et->name));
        if(et->next!=NULL)
          et=et->next;
        else
          {
            f.close();
            break;
          }
      }
  }
