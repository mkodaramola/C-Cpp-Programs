#include <iostream>
#include <cmath>
#include <cstdlib>
void exit(int exitcode);
using namespace std;
int mean(int a[], int num);
int main (){
int x;
int a[]={};
cout << "How X's do we have?";
cin >> x;
int z =	mean(a,x );

cout << "The mean = " << z << endl;
 exit(5000);

system ("pause");
return 0;
}



int mean(int a[], int num){
	int x1;
	int f1;
	int zux;
	int hux;
		int mn=0;
	for (int i=0;i<num;i++){

			cout << "Enter X"<< (i+1)<< ": ";
			cin >> x1;
			cout << "Enter F"<< (i+1)<< ": ";
			cin >> f1;
			zux = (x1*f1);

			a[i]=zux;

		hux = (mn +=a[i])/num;


	}

	return hux;
}


