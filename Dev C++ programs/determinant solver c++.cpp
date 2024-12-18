#include <iostream>
#include <cmath>
#include <cstdlib>

int main ()
{
	using namespace std;
	double a11,a12,a13,a21,a22,a23,a31,a32,a33,Det;
cout << "                      Solving the determinant of a square matrix in the form of |a11 a12 a13, a21 a22 a23, a31 a32 a33|" << endl;
cout << " " << endl;
cout << " " << endl;
cout << "Enter a11: ";
cin >> a11;
cout << "Enter a12: ";
cin >> a12;
cout << "Enter a13: ";
cin >> a13;
cout << "Enter a21: ";
cin >> a21;
cout << "Enter a22: ";
cin >> a22;
cout << "Enter a23: ";
cin >> a23;
cout << "Enter a31: ";
cin >> a31;
cout << "Enter a32: ";
cin >> a32;
cout << "Enter a33: ";
cin >> a33;
Det = (a11*((a33*a22)-(a32*a23))) - (a12*((a33*a21)-(a31*a23))) + (a13*((a32*a21)-(a31*a22)));
cout << " " << endl;
cout << " " << endl;
cout << "Determinant = " << Det << endl;
system ("pause");
return 0;	
}
