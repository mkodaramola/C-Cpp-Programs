#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;
// NameDataSet - store name and credit card
// information
class NameDataSet
{
public:
char firstName[128];
char lastName [128];
int creditCard;
};

// function prototypes:
bool getData(NameDataSet& nds);
void displayData(NameDataSet& nds);
int main(int nNumberofArgs, char* pszArgs[])
{
// allocate space for 25 name data sets
const int MAX = 25;
NameDataSet nds[MAX];
// load first names, last names and social
// security numbers
cout << "Read name/credit card information\n"
<< "Enter 'exit' to quit"
<< endl;
int index = 0;
while (getData(nds[index]) && index < MAX)
{
index++;
}
// display the names and numbers entered
cout << "\nEntries:" << endl;
for (int i = 0; i < index; i++)
{
displayData(nds[i]);
}
// wait until user is ready before terminating program
// to allow the user to see the program results
system("PAUSE");
return 0;
}
// getData - populate a NameDataSet object
bool getData(NameDataSet& nds)
{
cout << "\nEnter first name:";
cin >> nds.firstName;
// compare the name input irrespective of case
if (stricmp(nds.firstName, "exit") == 0)
{
return false;
}
cout << "Enter last name:";
cin >> nds.lastName;
cout << "Enter credit card number:";
cin >> nds.creditCard;
return false;
}
