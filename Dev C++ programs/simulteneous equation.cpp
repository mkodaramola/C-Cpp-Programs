#include <iostream>
#include <cmath>
#include <cstdlib>
int main ()
{
	using namespace std;
	double D0;
	double D1;
	double D2;
	double X;
	double Y;
	char z;
	double a;
	double b;
	double c;
	double d;
	double e;
	double f;
	do
	{
	cout << "Solving simulteneous Equation using the variable" << endl;
	cout << " " << endl;
	cout << "Ax+By=C" << endl;
	cout << "Dx+Ey=F" << endl;
	cout << " " << endl;
	cout << "A= " << endl;
	cin >> a;
	if (a == z)
{
	exit(EXIT_FAILURE);
}
	cout << " " << endl;
	cout << "B= " << endl;
	cin >> b;
	if (b == z)
{
	exit(EXIT_FAILURE);
}
	cout << " " << endl;
	cout << "C= " << endl;
	cin >> c;
	if (c == z)
{
	exit(EXIT_FAILURE);
}
	cout << " " << endl;
	cout << "D= " << endl;
	cin >> d;
	if (d == z)
{
	exit(EXIT_FAILURE);
}
	cout << " " << endl;
	cout << "E= " << endl;
	cin >> e;
	if (e == z)
{
	exit(EXIT_FAILURE);
}
	cout << " " << endl;
	cout << "F= " << endl;
	cin >> f;

	cout << " " << endl;
	D0 = ((a*e) - (d*b));
	D1 = ((f*b) - (c*e));
	D2 = ((f*a) - (c*d));
	X = (-D1 / D0);
	Y = (D2 / D0);
	cout << "X=" << X <<" Y=" << Y << endl;
	cout <<" " << endl;
	cout <<" " << endl;
	cout <<"_______________________________________________________________________________ " << endl;
	cout << " " << endl;

	cout << "Programmer: Scientist Daramola" << endl;
	cout << "Copyright @" << endl;
	cout << "All Right Reserve" << endl;
	cout << "______________________________________________________________________________ " << endl;
	cout << " " << endl;
}while (true); 
system ("pause");
return 0;	
}
