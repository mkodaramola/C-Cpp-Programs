#include <iostream>
#include <cmath>
#include <cstdlib>
int dogyears (int);
// c |\ c
int main ()
{
	using namespace std;
int years;
cout << "What's your dog's age? ";
cin >> years;
int peopleyears = dogyears(years);	
cout << "Your dog's age is " << peopleyears << " \n";
	
system ("pause");
return 0;	
}

int dogyears (int dog)
{
	return 1*dog;
}

