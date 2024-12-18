#include <iostream>
#include <cmath>
#include <cstdlib>
#define nl '\n'

int func(int n);
		using namespace std;
int main (){
loop:	
	int a;
cout << "Enter number: ";
cin >> a;	
int k = func(a);	
if (k>0){
	cout <<a << "! = " << k << endl;
}	
	else if (k==0){
			cout << "0! = 1 \n";
	}

	else
	cout << "Math Error!!! \n";
goto loop;	
	
system ("pause");
return 0;	
}

int func( int n){
	
	for(int i=(n-1); i>0; i--){
		n *= i;
	}
	
	return n;
		
} 
