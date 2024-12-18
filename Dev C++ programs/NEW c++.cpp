#include <iostream>
#include <cmath>
#include <cstdlib>
#include <fstream>
int main ()
{
	using namespace std;
char filename [50];
ofstream femi;
cin.getline(filename, 50);
femi.open(filename);
char word [5];

char word[50];
while (femi.good())
{
	cout << word << " ";
	femi >> word;
	
}


	
system ("pause");
return 0;	
}
