#include <iostream>
#include <cmath>
#include <cstdlib>
int main  ()
{
	using namespace std;
int passw;
int passw2;
int Cpassw = 1234;
int x =0;

cout << "Password: ";
cin >> passw;
while (passw != Cpassw && x<5) {

x += 1;
cout << "Incorrect password "<< "trial " << x << " of 5" << endl;
cout << "- \a " << endl;

cout << "Password: \n";
cin >> passw;

}
if (passw != Cpassw)
exit(EXIT_FAILURE);
else
cout << "The Lord is good \n";

system ("pause");
return 0;	
}







