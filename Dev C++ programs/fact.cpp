#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#define nl '\n'


int fact(int num);
	using namespace std;


int main ()
{
int n; 
cout << "Enter number: ";
cin >> n;

int z = fact(n);
cout << n << "! = " << z << endl;	
system ("pause");
return 0;	
}

int fact(int num){

	for (int i = (num-1);i>0;i--){
		
		num *=i;
	}	
	
return num;	
}
