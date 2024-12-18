#include <iostream>
#include <cmath>
#include <cstdlib>

int main ()
{
	using namespace std;
	double a11,a12,a13,a21,a22,a23,a31,a32,a33,Det,b11,b12,b13,b21,b22,b23,b31,b32,b33,B11,B12,B13,B21,B22,B23,B31,B32,B33;
cout << "                Solving the inverse of a matrix in the form of (a11 a12 a13, a21 a22 a23, a31 a32 a33)" << endl;
for (;;){
cout << " " << endl;
cout << " " << endl;
cout << "Enter a11: ";
cin >> b11;
cout << "Enter a12: ";
cin >> b12;
cout << "Enter a13: ";
cin >> b13;
cout << " " << endl;
cout << "Enter a21: ";
cin >> b21;
cout << "Enter a22: ";
cin >> b22;
cout << "Enter a23: ";
cin >> b23;
cout << " " << endl;
cout << "Enter a31: ";
cin >> b31;
cout << "Enter a32: ";
cin >> b32;
cout << "Enter a33: ";
cin >> b33;
Det = (b11*((b33*b22)-(b32*b23))) - (b12*((b33*b21)-(b31*b23))) + (b13*((b32*b21)-(b31*b22)));
B11 = ((b22*b33)-(b32*b23));
B12 = -((b33*b21)-(b23*b31));
B13 = ((b32*b21)-(b22*b31));
B21 = -((b33*b12)-(b32*b13));
B22 = ((b33*b11)-(b13*b31));
B23 = -((b32*b11)-(b12*b31));
B31 = ((b12*b23)-(b22*b13));
B32 = -((b23*b11)-(b21*b13));
B33 = ((b11*b22)-(b21*b12));
cout << " " <<endl;
cout << "The inverse of the matrix is: " <<endl;
cout << " " <<endl;
cout << "=> " <<endl;
cout << "(" << (B11/Det) << " " << (B21/Det) << " " << (B31/Det) << ", " << (B12/Det) << " " << (B22/Det)<< " " << (B32/Det) << ", " << (B13/Det) << " " << (B23/Det) << " " << (B33/Det) << ")" << endl;
cout << " " <<endl;
cout << "OR" << endl;
cout << " " <<endl;
cout << "=>  1/" << Det << " (" << B11 << " " << B21 << " " << B31 << ", " << B12 << " " << B22 << " " << B32 << ", " << B13 << " " << B23 <<" " << B33 << ")" << endl;
}
  
system ("pause");
return 0;	
}	
