#include <iostream>
#include <string>
#include <cstring>
#include <stdlib.h>
using namespace std;

string slide(string wd,int b, int e);

int main(){
loop:
string gl;
cout << ">>";
getline(cin,gl);
string res;
int lt = gl.length()-1;
int b =gl.find("(")+1;
int s;
int hv;
int hc;

if (slide(gl,0,6) == "print(" && slide(gl,lt,lt)== ")"){
   res = slide(gl,7,(lt-8));
}


if (gl.find("=") != string::npos)
{
   s =  gl.find("=");
string var = slide(gl,0,s);
var=hv;
   string vcon = slide(gl,s+1,gl.length());
   vcon = hc;

   res =hc;
   }







cout << ">>" <<res << endl;
goto loop;
return 0;
system("pause");

}

string slide(string wd,int b, int e){



    wd = wd.substr(b,e);


return wd;
}
