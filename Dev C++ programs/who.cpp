#include <iostream>
#include <cmath>
#include <cstdlib>

int main()
{
	using namespace std;
char Cname[40] = {'T','h','o','m','a','s',' ','E','d','i','s','o','n'};
char Iname [40];

cout << "Who invented light Bulb? \n";
cin.getline(Iname, 40);	

if (Cname == Iname)
{
	cout << "Correct! \n"; 
}
else
cout << "Wrong!" << endl;
system ("pause");
return 0;	
}
