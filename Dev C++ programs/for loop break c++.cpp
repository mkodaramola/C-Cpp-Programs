#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstdio>

int main ()
{
	using namespace std;
int acc = 2;
int value;
char alp;
cout << "This program sums values enter by the user" << endl;
cout << "Terminate the loop by entering a negative number" << endl;
	cout << "Enter the next number ";
	cin >> value;
while (value < 0)	
{
	
	if (value == alp)
	{
		break;
	}
	acc = acc + value;
} 
cout << "The total is " << acc << endl;	
	
system ("pause");	
return 0;	
}
