#include <iostream>
#include <cmath>
#include <cstdlib>
void stify();
using namespace std;
int main ()
{
	
stify(2);
system ("pause");
return 0;	
}
void stify()
{
	int input;
	int ans;
	cout << "Enter a number and I will square it for you: ";
	cin >> input;
	ans = ( pow(input,2.0));
	cout << "Answer is = " << ans << endl;
	
}

