#include <iostream>
#include <windows.h>

using namespace std;
int main(){
	system("cls");
	int min,msec;
	unsigned int m = 0;
	cout << "How many Minutes: ";
	cin >> min;
	msec = 60*min;
	for (unsigned int i=1; i<=msec;i++){
		
		system("cls");
		if (i%60 == 0){
			m++;
		}
		cout << "Numbers of Minutes: " << min;

		cout << "\n\n\n\t\t\t" << i << " Seconds ---> " << m << " Minutes" << endl;
		
		Sleep(1000);
	}
	
	cout << "\n\n\n\n\t\t\tTime up!!!\n";
	
	for(int j=0;j<10;j++){
		cout << "\a";
		Sleep(1000);
		
	}
	
	
	return 0;
}
