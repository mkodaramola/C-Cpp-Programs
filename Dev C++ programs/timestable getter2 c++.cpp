#include <iostream>
#include <cmath>

int main ()
{
	using namespace std;
	int i;
	double tot;
	double input;
	cout << "Enter the n table to get: ";
	cin >> input;
	
	for(i=1;i<=12;i++){
		
		cout << input << " X " << (i+0) << " = " <<(input * (i+0)) << endl;
	}	
system ("pause");
return 0;
}
