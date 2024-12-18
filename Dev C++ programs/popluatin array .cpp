#include <iostream>
#include <cstdlib>

using namespace std;
int item (double array1[], int num);
void show (double array1[], int num);
int tot (double array1[] , int num);
int main ()
{
double fejug[5] = {};

item (fejug,5);
show (fejug,5);
int total = tot ( fejug , 5);	
cout << "The total sum of the items is " << total << endl;	
	
system ("pause");
return 0;	
}

int item (double array1[], int num)
{   
    double input;
     for (int i=0;i<num;i++)
	 {
	 	cout << "The number of item " << (i+1) << " is ";
	 	cin >> input;
	 	
	    array1[i]=input;
		 }	
	
}
void show (double array1[], int num)
{
	for (int i=0;i<num;i++)
	{
		cout << "You input item " << (i+1) << " as " << array1[i] << endl;
	}
	
}
int tot (double array1[] , int num)
{
	int sum=0;
	for (int i=0;i<num;i++)
	{
		sum+=array1[i];
	}
return sum;	
}
