#include <iostream>
#include <cmath>

int main ()
{
	using namespace std;
	int eni;
	int fom;
	int jo;
	char dor;
	do{
	fom = (20); 
cout << " How old are you?" << endl;
cin >> eni;

jo = (pow (2.0,3.0));
	if (eni > 18)
{ 
cout << "Move straight download" << endl;
	}	
	else if (eni < 18)
	{
		cout << "Take elevator and head on straight downward" <<endl;
	}
	else if (eni == 18)
	{
		cout << " Take the stair and head on to the right" << endl;
	}
	else if (eni == dor)
	{
		cout << "Please write in numbers and not in words" << endl;
	}
} while (fom == 20);
system ("pause");	
return 0;	
}


 
