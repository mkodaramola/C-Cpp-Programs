// DisplayString - output a character array to
// standard output, the MS-DOS window
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
// prototype declarations
void displayString(char stringArray[]);
int main(int nNumberofArgs, char* pszArgs[])
{
char charMyName[] ={'F', 'e', 'm','i', 0};
displayString(charMyName);

system("pause");
return 0;
}

void displayString(char stringArray[])
{
for(int i = 0; stringArray[i] != '\0'; i++)
{
cout << stringArray[i];
}
}
