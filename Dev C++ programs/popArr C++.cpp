#include <iostream>
#include <cstdlib>
using namespace std;
void change(double hit , double array1[], int n);
int tot (double array1[],int num);
void split (double array1[], int num );
int format(double array1[], int num);
int main ()
{
double ary[5] = {};
	
format (ary,5);
split (ary,5);
int total = tot(ary,5);
cout << "The total amount of the items you bought is #" << total * 2 << endl; 
cout << "Enter factor to multiply by: \n"; 
double fac;
cin >> fac;
change (fac, ary ,5);
split (ary,5);	
system ("pause");
return 0;		
}

int format( double array1[], int num)
{
	int input;
	for (int i =0;i<num;i++)
	{
	cout << "Enter the number of items: ";
	cin >> input;
    
	array1[i]=input;
    }
    return input;
}
void split (double array1[], int num )
{
	for (int i =0;i<num;i++)
	{
		cout << "The amount of item " << i+1 << " is #" << (array1[i] * 2) << endl;
	    
	
	}
}
int tot (double array1[],int num)
{
	int sum=0;
	for (int i = 0;i<num;i++)
	{
		sum+=array1[i];
	}
return sum;	
}
void change(double hit , double array1[], int n)
{
	
	for (int i=0;i<n;i++)
	{
		
		array1[i] *=hit;
	}
}
