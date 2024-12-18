#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <windows.h>
            using namespace std;
 class addition{

private:
    int a,b;

public:
    int add(int,int);

 };

 int addition::add(int x, int y){

    return x+y;


 }

 class substraction:public addition{

private:
    int a,b;

public:
  int  sub(int,int);

 };

 int substraction::sub(int k,int p){



     if (k > p){
       return k-p;
     }
     else{
       return p-k;
     }

 }

    class file{
private:
    char addr[900];
public:
    void wrtFile(char x[900]){
        string wd;
        cout << "Enter text to write: \n";




        ofstream ofile;

        ofile.open(x);

        if(!ofile.is_open()){
             getline(cin,wd);
            ofile << wd;

        Sleep(500);
        cout << "DONE!!!\n";
        }
        else

                        cout << "File can be found!!!\n";


    }

    void rdFile(char x[900]){


        string ans1;
        bac:
        cout << "Will you like to Replace former text or append: ";
        getline(cin, ans1);

            for (int i=0;i<ans1.size();i++){ans1[i] = tolower(ans1[i]); }
            if (ans1.find("replace") != string:: npos){

                ifstream ifile;

                ifile.open(x,ios::trunc);
                char txt;
                if(ifile.is_open()){

                    while(!ifile.eof()){

                        ifile.get(txt);

                    }


                }




            }
             else if (ans1.find("append") != string:: npos){

                     ifstream ifile;

                ifile.open(x,ios::app);
                char txt;
                if(ifile.is_open()){

                    while(!ifile.eof()){

                        ifile.get(txt);

                    }


                }
                ifile.close();


            }
            else{
             cout << "Invalid Input!!!\n"; Sleep(1500);
             goto bac;
            }




    }


    };



    int main(){

        file opr;
       char fname[900];
    cout << "Enter 'R' to read file, 'W' to write file: ";
    char an;
    cin >> an;

    if (an == 'R' || an == 'r'){
        cout << "Enter name of file: ";
        cin >> fname;
        opr.rdFile(fname);
    }
     else if (an == 'W' || an == 'w'){
        cout << "Enter name of file: ";
        cin >> fname;
        opr.wrtFile(fname);
    }

    else {
        cout << "Inavlid Input!!!\n"; Sleep(1200);
    }




    return 0;
    }
