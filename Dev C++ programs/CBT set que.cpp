#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#define nl '\n'
int main ()
{
	using namespace std;
cout << "Welcome to Darafem CBT software, input the questions and options below. \n";
cout << "NOTE: All ANSWERS(Either Examiner or student) must be in CAPITAL LETTERS \n";
cout << " \n";

string que1;
cout << "Question 1 ---> ";
getline (cin, que1);

string opt1;
cout << "Options for question 1 ---> "; 	
getline (cin, opt1);
cout << nl;


string que2;
cout << "Question 2 ---> ";
getline (cin, que2);

string opt2;
cout << "Options for question 2 ---> "; 	
getline (cin, opt2);
cout << nl;


string que3;
cout << "Question 3 ---> ";
getline (cin,que3);


string opt3;
cout << "Options for question 3 ---> "; 	
getline (cin, opt3);
cout << nl;
cout << nl;

char ans1;
cout << "The answer is to question 1: ";
cin >> ans1;
cout << nl;

char ans2;
cout << "The answer is to question 2: ";
cin >> ans2;
cout << nl;

char ans3;
cout << "The answer is to question 3: ";
cin >> ans3;

system("cls");

char sb;
cout << "Want to start test now? (Y/N)" << endl;
cin >> sb; 

if(sb == 'Y' || sb == 'y')
{
system("cls");	
cout << " \n";
cout << " \n";
char cans1, cans2, cans3;
cout << que1 << endl;
cout << opt1 << endl;
cin >> cans1;
cout << que2 << endl;
cout << opt2 << endl;
cin >> cans2;
cout << que3 << endl;
cout << opt3 << endl;
cin >> cans3;


int m1, m2, m3, tot;

m1 = (ans1 == cans1) ? 1:0;
m2 = (ans2 == cans2) ? 1:0;
m3 = (ans3 == cans3) ? 1:0;

tot = (m1+m2+m3);

cout << nl;
cout << nl;
cout << nl;

cout << "Your total score is " << tot << ". \n";








}
else

exit(EXIT_FAILURE);
system ("pause");
return 0;	
}
