#include <iostream>
#include <cmath>

int main ()
{
using namespace std;
int fehom;
double ms;
double hg;
cout << "Mass of Object?" << endl;
cin >> ms;
cout << "Height in metre?" << endl;
cin >> hg;
fehom = (hg/ms);

if (fehom < 0)
	cout << "High probability of object NOT BREAKING" << endl;
else if (fehom > 0 < 3)
	cout << "LOW probability of object NOT BREAKING" << endl;
else if (fehom > 2 < 5)
	cout << "LOW probability of object BREAKING" << endl;
else if (fehom > 4 < 7)
	cout << "HIGH probability of object BREAKING " << endl;
else if (fehom > 6);
	cout << "Object will DEFINATELY BREAK" << endl;


system ("pause");
return 0;
}
