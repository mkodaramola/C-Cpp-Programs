#include <iostream>
int main ()

{
	using namespace std;
	int ans;
	int f;
double qtt;
double n;
double mm;
cout << "what is the quantity of electricity?" << endl;
cin >> qtt;
cout <<"what is the number of farad(s)?" << endl;
cin >> n;
cout <<"what is the molar mass of the element?" << endl;
cin >> mm;
f = 96500;
ans = (n * f);
cout << "The mass of the element deposited = " << qtt / ans * mm << endl;
system ("pause");
return 0;
}
