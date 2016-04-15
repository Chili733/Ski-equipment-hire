#include "main.h"
#include <fstream>
using namespace std;


int main(int argc, char* argv[])
  {
    if(argc!=4)
      {
        cerr<<"Ошибка открытия!\nВы должны ввести три имени файлов баз данных: лыж, сноубордов и ботинков\n";
        exit(1);
      }
    menu(argv[1],argv[2],argv[3]);
  }
