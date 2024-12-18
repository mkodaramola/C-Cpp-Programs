#include <iostream>
int main ()

{
	using namespace std;
	int ans;
	int f;

double ii;
double tt;
double n;
double mm;
cout << "what is the amount of current" << endl;
cin >> ii;
cout << "what is the amount of time(in seconds)?" << endl;
cin >> tt;
cout <<"what is the number of farad(s)?" << endl;
cin >> n;
cout <<"what is the molar mass of the element?" << endl;
cin >> mm;
f = 96500;
ans = (n * f);
cout << "The mass of the element deposited = " << (ii * tt) / ans * mm << endl;
system ("pause");
return 0;
}
