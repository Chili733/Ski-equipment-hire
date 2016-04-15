#include "main.h"
#include <fstream>
using namespace std;



void menu(char* file1, char* file2, char* file3)
  {
    
    int rr,idd,dich;
    char* name;
    class s* sk;
    class s* sn;
    class b* bot;
    //fstream f1,f2,f3;
    unsigned int choise;
    while(1)
      {
        cout<<"Введите 1 для вывода на экран списка лыж\nВведите 2 для вывода на экран списка сноубордов\nВведите 3 для вывода на экран списка ботинков\nВведите 4 создания базы данных\nВведите 0 для выхода из программы\n\nСделайте выбор\n";
        cin>>choise;
        system("clear");
      
        switch(choise)
          {
            case 1:
              {
                sk=chts(file1);
                dich=pok(sk);
                if (dich==0) break;
                cout<<"\n\n\nЧто Вы хотите сделать?\n1 - взять лыжи в прокат\n2 - вернуть лыжи\n3 - удалить лыжи из базы\n4 - добавить лыжи в базу\n0 - вернуться в предыдущее меню\n";
                cin>>choise;
                switch(choise)
                  {
                    case 1:
                      {
                        sk=arenda(sk);
                        zapf(file1,sk);
                        break;
                      }
                    case 2:
                      {
                        sk=vozvrat(sk);
                        zapf(file1,sk);
                        break;
                      }
                    case 3:
                      {
                        sk=del(sk);
                        zapf(file1,sk);
                        break;
                      }
                    case 4:
                      {
                        sk=dob(sk);
                        zapf(file1,sk);
                        break;
                      }
                  }
                continue;
              }
            case 2:
              {
                sn=chts(file2);
                dich=pok(sn);
                if (dich==0) break;
                cout<<"\n\n\nЧто Вы хотите сделать?\n1 - взять сноуборд в прокат\n2 - вернуть сноуборд\n3 - удалить сноуборд из базы\n4 - добавить сноуборд в базу\n0 - вернуться в предыдущее меню\n";
                cin>>choise;
                switch(choise)
                  {
                    case 1:
                      {
                        sn=arenda(sn);
                        zapf(file2,sn);
                        break;
                      }
                    case 2:
                      {
                        sn=vozvrat(sn);
                        zapf(file2,sn);
                        break;
                      }
                    case 3:
                      {
                        sn=del(sn);
                        zapf(file2,sn);
                        break;
                      }
                    case 4:
                      {
                        sn=dob(sn);
                        zapf(file2,sn);
                        break;
                      }
                  }
                continue;
              }
            case 3:
              {
                bot=chtsb(file3);
                dich=pokb(bot);
                if (dich==0) break;
                cout<<"\n\n\nЧто Вы хотите сделать?\n1 - взять ботинки в прокат\n2 - вернуть ботинки\n3 - удалить ботинки из базы\n4 - добавить ботинки в базу\n0 - вернуться в предыдущее меню\n";
                cin>>choise;
                switch(choise)
                  {
                    case 1:
                      {
                        bot=arendab(bot);
                        zapfb(file3,bot);
                        break;
                      }
                    case 2:
                      {
                        bot=vozvratb(bot);
                        zapfb(file3,bot);
                        break;
                      }
                    case 3:
                      {
                        bot=delb(bot);
                        zapfb(file3,bot);
                        break;
                      }
                    case 4:
                      {
                        bot=dobb(bot);
                        zapfb(file3,bot);
                        break;
                      }
                  }
                continue;
              }
            case 4:
              {
                system("clear");
                cout<<"ВНИМАНИЕ! При создании базы данных старая база будет удалена!\nВведите 1 для создания базы данных лыж\nВведите 2 для создания базы данных сноубордов\nВведите 3 для создания базы данных ботинков\nВведите 0 для возврата в предыдущее меню\n";
                cin>>choise;
                switch(choise)
                  {
                    case 1:
                      {
                        sk=crbases(sk);
                        zapf(file1, sk);
                        continue;
                      }
                    case 2:
                      {
                        sn=crbases(sn);
                        zapf(file2, sn);
                        continue;
                      }
                    case 3:
                      {
                        bot=crbasesb(bot);
                        zapfb(file3,bot);
                        continue;
                      }
                  }
              }
            case 0:
              {
                exit(1);
              }
          }
      }
  }
