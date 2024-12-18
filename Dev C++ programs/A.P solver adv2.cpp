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
int k = 20;
int que;
double soln1;
int opt;

for (;;) {
//	system("cls");
     cout << "________________________________________________________________________________ " <<endl;
cout << "Choose and Enter the variables which is NOT given in the A.P question " << endl;
cout << " " << endl;
cout << "1. First term only." << endl;
cout << "2. common differences only. " << endl;
cout << "3. Both First term and common difference. " << endl;
cout << " " << endl;
cin >> opt;

int Onnth;
double Onval;
double Oncd;
double soln2;
int ques;
double Ona;
int Onnth2;
double Onval2;
double Oncd2;
double soln22;
int ques2;
char xx;
double Ona2;
switch (opt)
{
	// case 1-----------------------------------------------------------------------------------------------------------
case 1:
	cout << "" << endl;
cout << "Enter a given nth term: ";
cin >> Onnth;
if (Onnth == xx)
{
	exit(EXIT_FAILURE);
}
else
{
switch (Onnth)
{
case 1:
cout << "The " << Onnth << "st term is ";
cin >> Onval;
break;
case 2:
cout << "The " << Onnth << "nd term is ";
cin >> Onval;
break;
case 3:
cout << "The " << Onnth << "rd term is ";
cin >> Onval;
break;
default:
cout << "The " << Onnth << "th term is ";
cin >> Onval;
}
cout << "Enter the common difference: ";
cin >> Oncd;
cout << "Enter the nth term you are looking for " << endl;
cin >> ques; 
Ona = (Onval - ((Onnth * Oncd) - Oncd));
soln2 = (Ona + ((ques - 1) * Oncd));
switch (ques)
{
case 1:
cout << "The " << ques << "st term of the series is " << soln2 << endl;
break;
case 2:
cout << "The " << ques << "nd term of the series is " << soln2 << endl;
break;
case 3:
cout << "The " << ques << "rd term of the series is " << soln2 << endl;
break;
default:
cout << "The " << ques << "th term of the series is " << soln2 << endl;
}
}
break;
// case 2---------------------------------------------------------------------------------------------------------------
case 2:
	cout << " " << endl;
cout << "Enter a given nth term: ";
cin >> Onnth2;
switch (Onnth2)
{
	case 1:
cout << "The " << Onnth2 << "st term is ";
cin >> Onval2;
break;
	case 2:
cout << "The " << Onnth2 << "nd term is ";
cin >> Onval2;
break;
	case 3:
cout << "The " << Onnth2 << "rd term is ";
cin >> Onval2;
break;
default:
cout << "The " << Onnth2 << "th term is ";
cin >> Onval2;
}
cout << "Enter the First term of the series: ";
cin >> Oncd2;
cout << "Enter the nth term you are looking for " << endl;
cin >> ques2; 
Ona = ((Onval2 - Oncd2) / (Onnth2 - 1));
soln22 = ( Oncd2 + ((ques2 - 1) * Ona));
switch (ques2)
{
case 1:
cout << "The " << ques2 << "st term of the series is " << soln22 << endl;
break;
case 2:
cout << "The " << ques2 << "nd term of the series is " << soln22 << endl;
break;
case 3:
cout << "The " << ques2 << "rd term of the series is " << soln22 << endl;
break;
default:
cout << "The " << ques2 << "th term of the series is " << soln22 << endl;
}

break;
// case 3----------------------------------------------------------------------------------------------------------------
case 3:
	cout << " " << endl;
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
switch (que)
{
case 1:	
cout << "The " << que << "st term of the series is " << ans << endl;
break;
case 2:
cout << "The " << que << "nd term of the series is " << ans << endl;
break;
case 3:
cout << "The " << que << "rd term of the series is " << ans << endl;
break;
default:
cout << "The " << que << "th term of the series is " << ans << endl;
}
break;
default:
exit(EXIT_FAILURE);
}

 }
	system ("pause");	
return 0;	
}
