#include <iostream>
#include <cstdlib>
int main()
{
	using namespace std;
// i|\sdgt
int aa;
char val;
double fit;
int k = 20;
do {
cout << "what is the approximate value of acceleration due to gravity" << endl;
cout << "A. 10.20 B. 9.98 C. 9.81 D. 10.00" << endl;  
cin >> val;
if ( fit == val )
{
	exit(EXIT_FAILURE);
}
else if (val == 'c' || val == 'C')
{
 	aa = 10;	
}
else 
{ aa =0;
}
cout << aa << "%" << endl;
} while (k = 20);

system ("pause");
return 0;	
}



