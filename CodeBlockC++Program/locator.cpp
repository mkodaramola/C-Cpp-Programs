#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){

    loop:
char filename[50];
ifstream get;
cin.getline(filename,50);
get.open(filename);

    if(!get.is_open()){

        exit(EXIT_FAILURE);
    }

        char content[900];

        get >> content;

        while (get.good()){
            cout << content << " ";
            get >> content;


        }

 ofstream putin;
        while (putin.good()){


  putin.open("kk.txt");


    putin << content << " ";
    putin << content;


  if (!putin.good()){
    putin.close();
  }

        }




goto loop;

system("pause");
return 0;
}
