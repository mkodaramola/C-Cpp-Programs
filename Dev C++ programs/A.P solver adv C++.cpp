#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstdio>

int main ()
{
	using namespace std;
int Fnth;
int Snth;
double Fval;
double Sval;
double d1;
double d2;
double dmain;
double a;
double que;
double soln1;
cout << "Enter an nth term: ";
cin >> Fnth;
switch (Fnth)
{
case 1:
cout << "The " << Fnth << "st term of the series is ";
cin >> Fval;
break;
case 2:
cout << "The " << Fnth << "nd term of the series is ";
cin >> Fval;
break;
case 3:
cout << "The " << Fnth << "rd term of the series is ";
cin >> Fval;
break;
default:
cout << "The " << Fnth << "th term of the series is ";
cin >> Fval;	
}
cout << "Enter another nth term: ";
cin >> Snth;
switch (Snth)
{

case 1:
cout << "The " << Snth << "st term of the series is ";
cin >> Sval;
break;
case 2:
cout << "The " << Snth << "nd term of the series is ";
cin >> Sval;
break;
case 3:
cout << "The " << Snth << "rd term of the series is ";
cin >> Sval;
break;
default:
cout << "The " << Snth << "th term of the series is ";
cin >> Sval;
}

d1 =((Fnth - 1) - (Snth - 1));
d2 = ( Fval - Sval);
dmain = ( d2 / d1);
cout << "Enter the number of term you are looking for ";
cin >> que; 
a = ( Fval - ( (Fnth - 1) * dmain));
double ans;
ans = (a + ((que - 1) * dmain));	
cout << "The " << que << "th term of the series is " << ans << endl;



 	
system ("pause");	
return 0;	
}
