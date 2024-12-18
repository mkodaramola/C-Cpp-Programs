#include <iostream>
#include <cmath>
#include <cstdlib>

int main ()
{
	using namespace std;
char d;
char r;
char m;
char f;
char s;
char l;
char t;
char tonic;
for (;;){
cout << "Enter the tonic sol fa and i'll play the chord. " << endl;
cin >> tonic;

if ( tonic == 'd' || tonic == 'm' || tonic == 's')
{
	
cout << "D - M - S" << endl;	
}
if (tonic == 'f' || tonic == 'l')
{
	cout << "F - L - D" << endl;
	}	
if (tonic == 't' || tonic == 'r')
{
	cout <<"S - T - R" << endl;
	}
if ( tonic != 'd' && tonic != 'r' && tonic != 'm' && tonic != 'f' && tonic != 's' && tonic != 'l' && tonic != 't' )
cout << "'" << tonic << "' " << "is not a tonic sol fa proposed by John Carwen. Please we recommend using either d-r-m-f-s-l-t " << endl; 
}
	
system ("pause");
return 0;	
}
