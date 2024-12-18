#include <iostream>
#include<stdio.h>
#include <string>
#define nl '\n'
using namespace std;

int main (){


string months[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
string days[7] = {"Sun","Mon","Tue","Wed","Thur", "Fri", "Sat"};
int m = 0;

while (m<=11){
      // Print Months
    cout << nl;
    cout << nl;

    cout << months[m] << "______________________\n" << endl;


  // print DaysWords
    for (int a=0;a<7;a++){



           cout << days[a] << "\t";



    }
cout << nl;


        //print DaysNumbers
if (m%2==0){
    for(int b = 1;b<=31;b++){
    cout << b << "\t";
    if (b%7==0){
        cout << nl;
    }
}
}

else{
   for(int b = 1;b<=31;b++){
    cout << b << "\t";
    if (b%7==0){
        cout << nl;
    }
}
}



m++;

cout << nl;
cout << nl;
}

















cout << nl;
cout << nl;
cout << nl;
cout << nl;
cout << nl;
cout << nl;
cout << nl;
cout << nl;
cout << nl;
cout << nl;
cout << nl;
cout << nl;
cout << nl;
cout << nl;

system("cls");

return 0;
}
