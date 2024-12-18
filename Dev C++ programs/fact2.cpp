#include <iostream>
#include <cmath>
	
	using namespace std;
int fac( int pep);	
int main (){
	
int num;	
cout << "Enter number: ";
cin >> num;	
int ans = fac(num);	
cout << num <<"! = " << ans << endl;	
return 0;
system("pause");	
}


int fac( int pep){
	int mul;
	for (int i=(pep-1);i>0;i--){
		pep *= i;
	}

		return pep;
	
	
}
 
