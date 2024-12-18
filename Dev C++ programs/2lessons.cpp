#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
int dowhile();
	using namespace std;
int main ()
{
int pw;
int cpw=1234;
for (int i =0;i<5; i++)
cout << "Enter password: ";
cin >> pw;
if (pw != cpw){
	cout << "Wrong password \n";	
}
else
break;	
system ("pause");
return 0;	
}

int dowhile(){
int x=0;	
int pw;
	int cpw = 1234;
	
do {
	cout << "Enter password: ";
	cin >> pw;
	x++;
	if (pw != cpw){
		cout << " \n"; 
		cout << "Wrong password! trial " << x << " of 5" << endl;
			cout << " \n";
	}
}
while (pw != cpw && x < 5);

if (pw == cpw){
	
cout << "Yh! Correct password! \n";
}
else
cout << "You're out! \n";

return x;
}
