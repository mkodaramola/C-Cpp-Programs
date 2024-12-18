#include <iostream>
#include <cmath>

int conf(int tnum);
	using namespace std;
int main(){
int num;
loop:
cout << "Enter number: ";
cin >> num;
if (num == 1){
		cout << num << " is not a prime number. \n";
}

else{

int tst = conf(num);
	if (tst == true){
		cout << num << " is not a prime number. \n";
	}
	else 
	cout << num << " is a prime number. \n";	
	
}
goto loop;
return 0;	
}

int conf(int tnum){
	int res;
	int arr[]={};
	for (int i=2;i<tnum;i++){
		res = tnum%i;
		arr[i]=(tnum%i);
		if (res == 0){
		
			return true;
		}
			cout << arr[i] << " \n";
	}
	
return false;	
}
