#include <iostream>
#include <cmath>
#include <cstdlib>

int cPrime(int a);
	using namespace std;
int main(){
loop:
int num;
cout << "Enter number: ";
cin >> num;

if (num <0){
	cout << "Invalid input!!! \n";
}
else if (num == 0){
	cout << "0 is not prime number. \n";
}
else if (num == 1){
	cout << num << " is not a prime number \n";
}
else if (num > 0){
	
int zon = cPrime(num);	
if (zon == true){
	cout << num << " is not a prime number. \n";
}


else

cout << num << " is a prime number. \n";	

}

goto loop;

	
system ("pause");
return 0;	
}

int cPrime(int a){
	
	for (int x=2;x<a;x++){
		if (a%x == 0){
		
			return true;
		}
	}
	
	return false;
}


