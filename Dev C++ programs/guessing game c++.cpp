#include <iostream>
#include <string>
#include <cstdlib>
int main ()
{
	using namespace std;
	int ans;
	int gu;
	char y[40];
	double gn;
	double gt;
	double gh;
	char a;
	int b;
	
	for (gu=0;gu<10;gu+2)
	{
		
cout << "Pick a number in your mind. If chosen, enter your name to continue." << endl;
cin >> y;
cout << "Multiply the number by 4 and substract 22. Enter result" << endl;
cin >> gn;
if (gn == a )
{
	cout << "You should please enter a number and not letters" << endl;
	exit(EXIT_FAILURE);
}
cout << "Divide your result by 2. Enter result" << endl;
cin >> gt;
if (gt == a )
{
	cout << "You should please enter a number and not letters" << endl;
	exit(EXIT_FAILURE);
}
cout << "Add 17 to your result. Enter result" << endl;	
cin >> gh;
if (gh == a )
{
	cout << "You should please enter a number and not letter(s)" << endl;
	exit(EXIT_FAILURE);
}
ans = ((gn+22)/ 4);
cout << "Loading result.........................................................................";
int boj;
	for (int i=0;i<92500;i++){
		cout <<"\b";
	}
cout << " " << endl;
cout << " " << endl;
cout << y <<" the number on your mind is \a" << ans << endl;
cout << " " << endl;
cout << "Game created by: Scientist Femi " << endl;
cout << "All Copyright Reserve" << endl;
cout << " " << endl;
cout << "________________________________________________________________________________ "<< endl;
}
system ("pause");	
return 0;	
}
