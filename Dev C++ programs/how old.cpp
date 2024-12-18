#include <iostream>
#include <cmath>

int main ()
{
	using namespace std;
double height;
double mass;
int doggy;
do
{ 	
cout <<"=> What is the mass of the object?" << endl;
cin >> mass;
cout << "what is the height of the building involved ( in metre(s) )" << endl;
cin >> height;
doggy = (height / mass);
if (doggy > 4.5)	
	cout << "Object will definitely break!" << endl;
else if (doggy < 0.4)	
	cout << "High probabilty of object not breaking" << endl;
else
	cout <<"Low Probability of object breaking " << endl;
	cout << " " << endl;
} while (doggy != 102.00234);
system ("pause");
return 0;	
}
