#include <iostream>
#include <cmath>
#include <cstdlib>


	using namespace std;
int main(){
	loop:
	int num,i, arr[20];
	cout << "Enter number to be converted: ";
	cin >> num;
	const int n = num;
	for (i=0;num>0;i++){
		arr[i]=num%2;
		num /=2;
	}	
		cout << "Binary of " << n << " : ";
	for (i=(i-1);i>-1;i--){
	
		cout << arr[i];
	}
	
	cout << endl;
	goto loop;
system("pause");
return 0;	
}

