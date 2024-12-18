#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>

int getData (double X[], double freq[], int num);

	using namespace std;
int main (){
	
	double dfemX[]={};
	double dfemF[]={};
int num;	
cout << "Number of X present:";
cin >> num;	
float z = getData(dfemX,dfemF, num);
cout << " \n";
	cout << "Mean = " << z << endl;
	
system ("pause");
return 0;	
}

int getData (double X[], double freq[], int num){
	double xval;
	double xfq;
		double mean;
	double lua=0;
	int i;
	for (i=0; i<num; i++){
		
		cout << "X" << (i+1) << ": ";
		cin >> xval;
		cout << "Frequency of X" << (i+1) << ": ";
		cin >> xfq; 
		
		X[i] = xval;
		freq[i] = xfq;
			double php[i];
		
		 php[i] = (xval * xfq);
			
		lua += php[i];
		 mean = (lua/num);	
	}
		
return mean;	
	
}	


