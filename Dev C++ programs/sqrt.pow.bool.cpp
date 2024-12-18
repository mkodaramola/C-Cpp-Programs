#include <iostream>
#include <cmath>
#include <cstdlib>

int main ()
{
   using namespace std;
 int num;
 int snum;
 int hen;
 cout.setf(cout.hex);
 cout << "whta thr num" << endl;
 cin >> hen;
 int def = 3;
 if (hen != ~def)
 {cout << "WRONG!!!" <<endl;
 }
 else 
 cout << "RIHGT" << endl;
 
cout << "Enter a number and I will square it for you." << endl;
cin >> num;
int bal = pow(num,2);
snum = pow(num,2);
bool tag;
tag = (bal == snum);
cout << "The square of " << num << " = " << snum <<" is " << tag  <<endl;
system ("pause");
return 0;
}

