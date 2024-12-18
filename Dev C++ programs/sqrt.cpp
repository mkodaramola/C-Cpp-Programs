#include <iostream>
#include <cmath>
int main ()
{
	using namespace std;
	int galaxy;
	double star;
	double moon;
	int konstant = 15;
	if (konstant == 15)
	{
cout << "Input the thickness of the solid" << endl;
cin >> star;
cout <<"Input the height involved" << endl;
cin >> moon;
galaxy = (star/moon);
if (galaxy < 1.0 )

	cout << "High probability of object breaking " << endl;

else if (galaxy > 1.5)

	cout << "High probability of object NOT breaking " << endl;

else
cout << "Object will definately crack" << endl;
}
return galaxy; 	
system ("pause");	
}
