#include <iostream>
#include <cmath>
#include <cstdlib>
#define nl '\n'

		using namespace std;
int main(){

cout << "Solving Equation of Circle in the form Ax^2 + By^2 + Cx + Dy + E = 0. \n";
cout << nl;
double a,b,c,d,e,r;
start:
cout << "A = ";
cin >> a;

cout << "B = ";
cin >> b;

cout << "C = ";
cin >> c;

cout << "D = ";
cin >> d;

cout << "E = ";
cin >> e;

double g = (c/2);
double f = (d/2);
r = sqrt(pow(g,2.0) + pow(f,2) - e);

if (a != b){
	cout << "Invalid!!! " << a << "x^2 + " << b << "y^2 + " << c << "x + " << d << "y + " << e <<" = 0 is not an Equation of a circle. \n";
	goto start;   
}
if (a == 1){
cout << "Centre = (" << (-g) << ", " << (-f) <<") \b " << endl;
cout << "radius = " << r << endl;	
}


 if (a > 1 ){
		b /= a;
	c /= a;
	d /= a;
	e /= a;
	a /= a;
	double g = (c/2);
double f = (d/2);
r = sqrt(pow(g,2.0) + pow(f,2) - e);

cout << "Centre = (" << (-g) << ", " << (-f) <<") \b " << endl;
cout << "radius = " << r << endl;

}

	
system ("pause"); 
return 0;	
}
