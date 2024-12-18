#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>

int main ()
{
	using namespace std;
char filename [30];
ifstream bofor;
cin.getline(filename , 50);
bofor.open(filename);	

char word;
bofor >> word;
if (!bofor.is_open())
{
	exit(EXIT_FAILURE);
	}	
 while (bofor.good())
 {
 	cout << word << "              ";
 	bofor >> word;
	 }	
	
system ("pause");
return 0;	
 } 
