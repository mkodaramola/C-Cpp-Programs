#include <iostream>
#include <cmath>
#include <cstdlib>
int main ()
{
  using namespace std;
  int k;
  char a;
  k = (9);
  do {
   dFavn;
cout << "Enter your favourite number." << endl;
cin >> favn;
if (favn == a)
{
	exit(EXIT_FAILURE);
}
// X Condition
if (favn > 10) 
{
	double result;
	double Cresult;
cout << "Find its square root multiply by its square.(Neglect decimal numbers if gotten.)" << endl;
Cresult = (sqrt(favn) * pow (favn,2.0));
cin >> result;
if (result == a)
{
	exit(EXIT_FAILURE);
}
// X SubCondition 1
if (result == Cresult )
{
	cout << "You're Absolutely Correct!" << endl;
	cout << " " << endl;
}
// X SubCondition 2
else
{
	cout <<"You're Wrong!" << endl;
	cout << Cresult << " is the correct answer" << endl;
	cout << " " << endl;
}


}
// Y Condition
else 
{
	double Canswer;
	double answer;
	cout << "Add it with its square and cube  " << endl;
	cin >> answer;
	if (answer == a)
{
	exit(EXIT_FAILURE);
}
Canswer = (favn + pow (favn,2.0) + pow (favn,3.0));
// Y SubCondition 1	
	if (Canswer == answer)
	{
		cout << "You're Absolutely Correct!" << endl;
		cout << " " << endl;
	}
// Y SubCondition 2	
	else 
	{
		cout << "You're Wrong!" << endl;
		cout << Canswer << " is the correct answer" << endl;
		cout << " " << endl;
	}
}
} while (k=9);
system ("pause");
return 0;
}
