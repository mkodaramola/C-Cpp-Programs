#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#define nl '\n'


int l1();
int l2();
int l3();
int l4();
int l5();
int l6 (int a, int b);
void msg();
int scg();
	using namespace std;


int main ()
{
 

l4();
	
system ("pause");
return 0;	
}

int scg(){
	int m,n,p,q;
	char mg;
	 char eg;
	  char pg;
	   char cg;
	    char bg;
	    char x;
cout << "Mathematics: ";
cin >> mg;
if( mg == 'A' || 'a'){
	m=5;
	n=0;
}

if ( mg == 'B' || 'b'){
	p=4;
q=0;}


int tot = (m+n+p+q);
cout << "Your aggregate is: " << tot << endl; 
	
}



void msg()
{
	string name;
	cout << "What is your name?"<< endl;
	getline(cin, name);
	
	cout << "Your name is " << name << endl;
}


	int l6(int a, int b)
{

	int r;
	
	r= (a= a + b);
	
return r;
}

int l5(){
int num;
char day;
cout << "(A)Sunday (B) Monday (C) Tuesday (D) Wednesday (E) Thursday (F) Friday (G) Saturday \n";
cout <<" \n";
cout << "Enter present day: \n";
cin >> day;
cout << "Enter the number of days you are looking for: ";
cin >> num;
if (day == 'A' || day == 'a' )
{
	int k = (num%7);
	
switch (k){
	
case 0:
cout << "The day still on SUNDAY. \n";
break;
case 1:
cout << "The day falls on MONDAY. \n";
break;
case 2:
cout << "The day falls on TUESDAY. \n";
break;
case 3:
cout << "The day falls on WEDNESDAY. \n";
break;
case 4:
cout << "The day falls on THURSDAY. \n";
break;
case 5:
cout << "The day falls on FRIDAY. \n";
break;
default:
cout << "The day falls on SATURDAY. \n";
	
}
	
}

if (day == 'B' || day == 'b' )
{
	int k = (num%7);
	
switch (k){
	
case 0:
cout << "The day still on MONDAY. \n";
break;
case 1:
cout << "The day falls on TUESDAY. \n";
break;
case 2:
cout << "The day falls on WEDNESDAY. \n";
break;
case 3:
cout << "The day falls on THURSDAY. \n";
break;
case 4:
cout << "The day falls on FRIDAY. \n";
break;
case 5:
cout << "The day falls on SATURDAY. \n";
break;
default:
cout << "The day falls on SUNDAY. \n";	
		}
	
}

if (day == 'C' || day == 'c' )
{
	int k = (num%7);
	
switch (k){
	
case 0:
cout << "The day still on TUESDAY. \n";
break;
case 1:
cout << "The day falls on WEDNESDAY. \n";
break;
case 2:
cout << "The day falls on THURSDAY. \n";
break;
case 3:
cout << "The day falls on FRIDAY. \n";
break;
case 4:
cout << "The day falls on SATURDAY. \n";
break;
case 5:
cout << "The day falls on SUNDAY. \n";
break;
default:
cout << "The day falls on MONDAY. \n";	
}
	
}

if (day == 'D' || day == 'd' )
{
	int k = (num%7);
	
switch (k){
	
case 0:
cout << "The day still on WEDNESDAY. \n";
break;
case 1:
cout << "The day falls on THURSDAY. \n";
break;
case 2:
cout << "The day falls on FRIDAY. \n";
break;
case 3:
cout << "The day falls on SATURDAY. \n";
break;
case 4:
cout << "The day falls on SUNDAY. \n";
break;
case 5:
cout << "The day falls on MONDAY. \n";
break;
default:
cout << "The day falls on TUESDAY. \n";	
}
	
}

if (day == 'E' || day == 'e' )
{
	int k = (num%7);
	
switch (k){
	
case 0:
cout << "The day still on THURSDAY. \n";
break;
case 1:
cout << "The day falls on FRIDAY. \n";
break;
case 2:
cout << "The day falls on SATURDAY. \n";
break;
case 3:
cout << "The day falls on SUNDAY. \n";
break;
case 4:
cout << "The day falls on MONDAY. \n";
break;
case 5:
cout << "The day falls on TUESDAY. \n";
break;
default:
cout << "The day falls on WEDNESDAY. \n";	
}
	
}

if (day == 'F' || day == 'f' )
{
	int k = (num%7);
	
switch (k){
	
case 0:
cout << "The day still on FRIDAY. \n";
break;
case 1:
cout << "The day falls on SATURDAY. \n";
break;
case 2:
cout << "The day falls on SUNDAY. \n";
break;
case 3:
cout << "The day falls on MONDAY. \n";
break;
case 4:
cout << "The day falls on TUESDAY. \n";
break;
case 5:
cout << "The day falls on WEDNESDAY. \n";
break;
default:
cout << "The day falls on THURSDAY. \n";	
}
	
}

if (day == 'G' || day == 'g' )
{
	int k = (num%7);
	
switch (k){
	
case 0:
cout << "The day still on SATURDAY. \n";
break;
case 1:
cout << "The day falls on SUNDAY. \n";
break;
case 2:
cout << "The day falls on MONDAY. \n";
break;
case 3:
cout << "The day falls on TUESDAY. \n";
break;
case 4:
cout << "The day falls on WEDNESDAY. \n";
break;
case 5:
cout << "The day falls on THURSDAY. \n";
break;
default:
cout << "The day falls on SATURDAY. \n";	
}
	
}

return 0;	
}


int l4()
{
int x,y;
loop:
cout << "Number1: ";
cin >> x;
cout << "Number2: ";
cin >> y;
int k=(x*y);
cout << "Answer: " << (k) << endl;
if (k<50) goto loop;
cout << "Sorry! Answer is already more than 50. \n";

	return 0;
}




int l1 (){
	char x,y;
cout << "a. good b. bad \n";
cin >> x;

cout << "a. evil b. righteous \n";
cin >> y;
int m = (y == 'b' || y == 'B') ? 1:0;

int k = (x == 'a' || x =='A') ? 1:0;
int t = (m+k);
cout << "You score is " << t <<"/2 " << endl;

return t;
}

int l2()
{
	for (int i=1;i<=5;i++)
{
	for (int v=1;v<=3;v +=1)
	{
		cout << "The Lord is good " << v << endl;
	}
}
}

int l3()
{
	int num,bog,nob;
cout << "Enter the number:";
cin >> num;
for(int var=2;var<=num;var++){
int prime =(num%var);
if (prime != 0)
{
	cout << num << " is a prime no \n";
}
else 
cout << num<<" is a not prime number. \n";
}	
}
