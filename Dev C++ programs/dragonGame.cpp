#include <iostream>
#include <stdio.h>
#include <dos.h>
#include <stdlib.h>
#include <string>

    using namespace std;

 struct message{


    string addr;

    string data;


 } ;

    int main(){

     message msg;

  msg.addr = "000001";

  msg.data = "On";

  string x = msg.addr + "~" + msg.data;

  cout << x << endl;

//System 2

  int len = x.find("~");

  string Naddr = x.substr(0,len);

  string Ndata = x.substr(len+1,x.size());

  cout <<"Address: " <<Naddr << "\tData: " << Ndata << endl;






    return 0;
    }
