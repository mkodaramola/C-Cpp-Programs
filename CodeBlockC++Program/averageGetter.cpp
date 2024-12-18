#include <iostream>
#include <stdlib.h>
using namespace std;


double fx(double a[], double nx)
{
    double n; double nn;
    double sum =0;

  for(double i=0;i<nx;i++){


      cout << "Numbers of x" << (i+1) << ": " ;
cin >> n;
cout << "frequency of x" << (i+1) << ": " ;
cin >> nn;


double mul = (nn*n)/(nx);

a[i] = mul/nx;


sum += (a[i]);


  }

         return sum;
}



double main(){

double a[]={};

cout << fx(a,5);


system("pause");

return 0;
}
