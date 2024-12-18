#include <iostream>
#include <cmath>
int take(int arr[], int tnum);
void relys(int myar[], int rnum);
int totalise(int sarr[], int snum);
int average(int aarr[], int anum);
void pconf(int parr[], int pnum);

	using namespace std;
int main(){
int array[]={};
int non;

cout << "Pls enter numbers of entries: ";
cin >> non;

take(array,non);
relys(array,non);
int tot=totalise(array,non);
cout << "Total sum is = ";
cout << tot << endl;
int avg = average(array, non);
cout << "Mean = " << avg << endl;	
pconf(array,non);	
system ("pause");
return 0;	
}

int take(int arr[], int tnum){
	
	int input,i;
	
	for (i=0;i<tnum;i++){
		cout << "Enter number of item " << (i+1) << ": ";
		cin >> input;
		arr[i]=input;
	}
	
	return i;	
}

void relys(int myar[], int rnum){
	for (int i=0;i<rnum;i++){
		cout << "The numbers of item " << (i+1) << " is: " << myar[i] << endl;
	}
}

int totalise(int sarr[], int snum){
	int ssum=0;
	for (int i=0;i<snum;i++){
		ssum +=sarr[i];
	}
	return ssum;
}

int average(int aarr[], int anum){
	int sum =0;
	int avg;
	for (int j=0;j<anum;j++){
		avg = (sum +=aarr[j])/anum;
	}
	
	return avg;
}

void pconf(int parr[], int pnum){

	for (int i=0;i<pnum;i++){
		cout << parr[i] << endl;
	}

	
}
