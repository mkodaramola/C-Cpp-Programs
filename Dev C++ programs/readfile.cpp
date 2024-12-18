#include <iostream>
#include <fstream>
#include <cstdlib>
int main ()
{
	using namespace std;
char filename [60];	
ifstream fff;	
cin.getline(filename, 50); 	
fff.open(filename);
	
	char word[60];
	fff >> word;
	while(fff.good())
	{
		cout << word << " ";
		
		fff >> word;
	}
	
	
	
system ("pause");	
return 0;	
}
