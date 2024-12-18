#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstdio>

int main ()
{
	using namespace std;
double Fnth;
double Snth;
double Fval;
double Sval;
double d1;
double d2;
double dmain;
double a;
double que;
double soln1;
cout << "Enter an nth term ";
cin >> Fnth;
cout << "The " << Fnth << "th term of the series is ";
cin >> Fval;
cout << "Enter another nth term ";
cin >> Snth;
cout << "The " << Snth << "th term of the series is ";
cin >> Sval;
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
