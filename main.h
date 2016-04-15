#include <iostream>
#include <cstring>
#include <cstdlib>

class s{
  private:
    unsigned int rost;
    unsigned int id;
  public:
    char* name;
    s(int rr, int idd, char* n);
    ~s();
    unsigned int getrost();
    unsigned int getid();
    class s* next;
};

class b{
  private:
    unsigned int rasm;
    unsigned int id;
    int type;
  public:
    char* name;
    b(int rr, int idd, int tt, char* n);
    ~b();
    unsigned int getrasm();
    unsigned int getid();
    int gettype();
    class b* next;
};


void menu(char* file1, char* file2, char* file3);
int pok(class s* n);
int pokb(class b* n);
class s* chts(char* file);
class b* chtsb(char* file);
void zapf(char* file, class s* na);
void zapfb(char* file, class b* na);
int check(class s* na, int id);
int checkb(class b* na, int id);
class s* crbases(class s* na);
class b* crbasesb(class b* na);
class s* arenda(class s* na);
class b* arendab(class b* na);
class s* vozvrat(class s* na);
class b* vozvratb(class b* na);
class s* del(class s* na);
class b* delb(class b* na);
class s* dob(class s* na);
class b* dobb(class b* na);
