#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
int clr(){


char fn[128];
ifstream wok;
cout << "enter the file name" << endl;
cin.getline(fn, 128);
 wok.open(fn);

    if (!wok.is_open()){
        exit(EXIT_FAILURE);
    }
    string wd;
    wok >> wd;
        while (wok.good()){

            cout << wd << " ";
            wok >> wd;
            if (wd == "par"){
                continue;
            }
        }

}
int main(){
int i =0;
while ( i < 10){

    cout << i+1 << endl;
    if (i == 5){
        continue;
    }
    i++;
}


system("pause");

return 0;
}
