#include <iostream>
#include <string>
#include <windows.h>
#include <cstdlib>

using namespace std;

int main(){
    loop:
int num,operation,wd,unit,e,sig;
string q;
cout << "Enter question below: \n\n";
getline(cin,q);

int len = q.length();

    for (int i=0;i<len;i++){

     q[i] = tolower(q[i]);
    }
            // || q.find("") != string::npos  (q.find("") != string::npos)     (q.find("") != string::npos) (q.find("") != string::npos)
    if ((q.find("1") != string::npos || q.find("2") != string::npos|| q.find("3") != string::npos|| q.find("4") != string::npos|| q.find("5") != string::npos|| q.find("6") != string::npos|| q.find("7") != string::npos|| q.find("8") != string::npos|| q.find("9") != string::npos|| q.find("0") != string::npos || q.find("plus") != string::npos || q.find("add") != string::npos || q.find("substr") != string::npos || q.find("multipl") != string::npos || q.find("product") != string::npos || q.find("sum") != string::npos || q.find("total") != string::npos || q.find("square") != string::npos || q.find("root") != string::npos || q.find("divide") != string::npos || q.find("cube") != string::npos || q.find("factor") != string::npos || q.find("quadra") != string::npos || q.find("hexa") != string::npos)){

        num = 1;

    }
    else{
        num=0;
    }


     if ((q.find("calcu") != string::npos || q.find("evalu") != string::npos|| q.find("simplif") != string::npos|| q.find("solve") != string::npos|| q.find("find") != string::npos|| q.find("prove") != string::npos|| q.find("expand") != string::npos|| q.find("express") != string::npos|| q.find("value") != string::npos|| q.find("convert") != string::npos)){

        operation = 1;

    }
    else{
        operation=0;
    }

     if ((q.find("m/s") != string::npos || q.find("cm") != string::npos|| q.find("mm") != string::npos || q.find("kg") != string::npos|| q.find("g ") != string::npos|| q.find("m ") != string::npos|| q.find("N ") != string::npos|| q.find("C ") != string::npos|| q.find("rad") != string::npos|| q.find("K ") != string::npos|| q.find("A ") != string::npos || q.find("v") != string::npos || q.find("volt") != string::npos || q.find("mper") != string::npos || q.find("oule") != string::npos || q.find("watt") != string::npos || q.find("pa") != string::npos || q.find("Nm") != string::npos || q.find("Wb") != string::npos || q.find("min") != string::npos || q.find("hr") != string::npos || q.find("hour") != string::npos || q.find("sec") != string::npos || q.find("tonn") != string::npos || q.find("ft") != string::npos || q.find("mol") != string::npos || q.find("dm") != string::npos)){

        unit = 1;

    }
    else{
        unit=0;
    }

      if (q.find("+") != string::npos || q.find("-") != string::npos|| q.find("*") != string::npos || q.find("/") != string::npos|| q.find("%") != string::npos|| q.find("$") != string::npos|| q.find("#") != string::npos|| q.find(">") != string::npos|| q.find("<") != string::npos|| q.find("^") != string::npos|| q.find("!") != string::npos || q.find("=") != string::npos || q.find("~") != string::npos ){

        sig = 1;

    }
    else{
        sig=0;
    }




   int tot = operation+unit+sig;

 if (tot >=1 ){

    cout << "Question --> Calculation \n";
 }
 else {

    cout << "Question --> Essay \n";
 }




Sleep(50);

goto loop;



return 0;
}
