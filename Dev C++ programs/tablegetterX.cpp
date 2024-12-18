#include <iostream>
#include <cmath>
 void spit (const double array1[],int num);
int pop (const double array1[], int num);
int main ()
{
	using namespace std;
	double femi[12]= {};
pop (femi,1);	
spit (femi,12);	
system ("pause");
return 0; 	
 }
 
 int pop (const double array1[], int num)
 {
 	int i;
 int input;
 
 
 	
 		using namespace std;
 		cout << "Enter the number. " << endl;
 		cin >> input;
 		array1[input]=input;
 		 
 		
	 return i;
  } 
 void spit (const double array1[],int num)
 {
 	using namespace std;
 	int i;
 	double tot;
 	tot = ((i+1)*array1[i]);
 	for (i=0;i<num;i++)
 	{
 			cout << array1[i] << " X " << (i+1) << " = " << tot << endl; 
	 }
 	
  } 
  
  
  
  
