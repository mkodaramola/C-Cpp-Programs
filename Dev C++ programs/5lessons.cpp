#include <iostream>
#include <cmath>

int getA(int arr1[], int val);
void HilitA( int arr2[], int num);
int Addition(int arr3[], int amt);
	using namespace std;
int main(){
int non;
int ArrMain[]={};
cout << "Enter number of numbers: ";
cin >> non;	

getA(ArrMain,non);
HilitA(ArrMain,non);
int tot=Addition(ArrMain,non);
cout << "Total = " << tot << endl;
	
system ("pause");
return 0;	
}

int getA(int arr1[], int val){
	int i,input;
	for(i=0;i<val;i++){
	
	cout << "Enter value for item " << (i+1) <<": ";
	cin >> input;	
		arr1[i]=input;		
	}
	
return i;	
		
}


void HilitA( int arr2[], int num){
	int i;
	for(i=0;i<num;i++){
			cout << "The value for item " << (i+1) << " is " << arr2[i] << endl;
	}

}


int Addition(int arr3[], int amt){
	int sum=0;
	int i;
	for (i=0;i<amt;i++){
		sum +=arr3[i];
	}
	return sum;
}
