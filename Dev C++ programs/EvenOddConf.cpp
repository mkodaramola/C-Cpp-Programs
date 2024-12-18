#include <iostream>
#include <cmath>
#include <cstdlib>


	using namespace std;
int main(){
loop:
int num;
cout << "Enter number: ";
cin >> num;

if (num%2 == 0){
	cout << num << " is an even number." << endl;
}

else
cout << num << " is an odd number. \n";
goto loop;	
system ("pause");
return 0;	
}


