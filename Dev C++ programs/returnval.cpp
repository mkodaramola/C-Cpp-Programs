#include <iostream>
#include <cmath>
int mynum(int);
int main()
{
	using namespace std;
int num;
cout <<"Enter your number: ";
cin>> num;
int link;
link = mynum(num);
cout << "Your number is now " << link <<", You can now proceed to the level." << endl;

system ("pause");
return 0;	
}

int mynum (int val)
{
	return 5 * val;
}
