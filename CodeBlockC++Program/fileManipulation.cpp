#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>

        using namespace std;
    int main(){

    ofstream ofile;
    ifstream file;

    char t = '\n';
    int s = t;
    cout << s << endl;



    file.open("femiText2.txt",ios::in);

    string wd;
    int i;
    int k=0;
    while(file.good()){

        getline(cin,wd);


        cout << wd << endl;
    ofile.open("femiText.txt",ios::binary);

    ofile << wd << endl;

    }

        return 0;
    }

