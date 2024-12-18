#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstdio>

int main ()
{
	using namespace std;
	int cal;
	int Abdullahi;
	int coco;
	int pw;
	char x;
	int n;
	double k;
	int doop;
	doop = 20;
	char abt;
	do {

cout << "Solving calculus using the variable kx^n...." << endl;
cout << "=>" << endl;
cout << "What is K?" << endl;
cin >> k;
if (k == abt)
{
	exit(EXIT_FAILURE);
}
cout << "What is n?" << endl;
cin >> n;
if (n== abt)
{
	exit(EXIT_FAILURE);
}
Abdullahi = (n-1);
coco = 1;
pw = (1.0 , n-1);
cal = (n * k);

switch (n)
{
case 2:
cout <<"dy/dx= " << cal << "x" << endl;
cout << " " << endl;
break;
case 1:
cout <<"dy/dx= " << cal << endl;
cout << " " << endl;
break;
case 0:
cout <<"dy/dx= " << "0" << endl;
cout << " " << endl;
break;
default:
cout <<"dy/dx= " << cal << "x^" << pw << endl;
cout << " " << endl;
}
} while (doop = 20);



system ("pause");
return 0;
}
