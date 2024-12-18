#include <iostream>
#include <fstream>
#include <cstdlib>

int main ()
{
	using namespace std;

ifstream onef;
char fname[40];

cin.getline(fname, 40);
onef.open(fname);

if (!onef.is_open())
{
	exit(EXIT_FAILURE);
}

char word[40];
onef >> word;
while(onef.good())
{
	cout << word << " ";
	onef >> word;
}

system ("pause");
return 0;	
}
