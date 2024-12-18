#include <iostream>
#include <cstdlib>
#include <cmath>
int main ()
{
   using namespace std;
   double celsius;
   double faht;
   double chos;
   double fah;
   double cel;
   double k = 20;
do {   
cout << "Enter 1 to convert from celsius to Fahrenheit and 2 for vice versa.(please strictly following instructions)" << endl;   
cin >> chos;      
   
if (chos == 1)
{   
cout << "Enter the temperature in Celsius." << endl;
cin >> celsius;
faht =( (celsius * 1.8) + 32);
cout << "Your temperature in Fahrenheit is " << faht << endl;
cout << " " << endl; 
cout << "Otherwise:" << endl;
cout << celsius << " degree celsius " << "= " << faht << " degree Fahrenheit" <<endl;
cout << " " << endl; 
}

else if (chos == 2 )
{
cout << "Enter the temperature in Fahrenheit." << endl;
cin >> fah;
cel =( (fah - 32) / 1.8);
cout << "Your temperature in celsius is " << cel << endl;
cout << " " << endl; 
cout << "Otherwise:" << endl;
cout << fah << " degree Fahrenheit " << "= " << cel << " degree celsius" <<endl;
cout << " " << endl; 		
}
else 
exit(EXIT_FAILURE);
} while (k = 20);

system ("pause");
return 0;
}
