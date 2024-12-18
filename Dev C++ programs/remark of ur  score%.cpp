#include <iostream>
int main ()
{
 using namespace std;
 int kay = 20;
 do {
int eni;
bool c = true;
int vv = (c+c+c);

cout << "What percentage do you score?" << endl;
cin >> eni;
//conditioning
if ( eni < 10)
cout << "Thats a poor result, put more effort" << endl;
else if (eni <=20 )
cout << "Excellent result, keep it up" << endl;
else 
cout << vv << endl;
cout << "Good result, you can perform even better " << endl;
 }while (kay=20);

system ("pause");
return 0;
}
