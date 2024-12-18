#include <iostream>
#include <cmath>
struct zoba
{
	char name[50];
	char level[30];
	int clas;
	int totalScore;
	char remark[100];
	char percent[10];
	
};


int main ()
{
   using namespace std;
char printMap (45);
zoba adekunle =
{
	
	"Name: Adekunle Godwill",
	"Class: S.S.S ",
	2,
	98,
	"Remark: What an Excellent result, keep it up.",
	"%"
};
cout << adekunle.name << endl;
cout << " " << endl;
cout << adekunle.level << adekunle.clas << endl;
cout << " " << endl;
cout << adekunle.totalScore << adekunle.percent << endl;
cout << " " << endl;
cout << adekunle.remark << endl;
cout << " " << endl;
cout << printMap << endl;
system ("pause");
return 0;
}
