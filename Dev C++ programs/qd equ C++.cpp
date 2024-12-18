#include <iostream>
#include <cmath>
int main ()
{
	using namespace std;
	double xone;
	double xtwo;
	double sroot;
	double disct;
	double benit;
	double a;
	double b;
	double c;
cout << "Solving Quadractic Equation (ax^2+bx+c)" << endl;
cout << " " << endl;
cout << "a=" << endl;
cin >>  a;
cout << "b=" << endl;
cin >> b;
cout << "c=" << endl;
cin >> c;
disct = sqrt((b * b) - (4 * a * c));
benit = (2 * a);
xone = ((-b + disct)/ benit);
xtwo = ((-b - disct) / benit);
cout << "x = " << xone << " OR " << xtwo << endl;
cout << " " << endl;	
system ("pause");
return 0;	
}
