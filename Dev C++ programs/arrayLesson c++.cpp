#include <iostream>
#include <cstdlib>
using namespace std;
int format (double array1[], int num);
int mixt (double array1[], int num);
void spit (double array1[], int num);
void change (double array1[],int num);
int dogyear (int);
int main ()
{
	
int ofg = dogyear(0);
cout << "age =" << ofg << endl;	
	
double dowy[5] = {};

format (dowy,5);

spit(dowy,5);

double tot = mixt(dowy,5);
cout << "The total sum of the number of items is: " << tot << endl;


change(dowy,5);


	
system ("pause");
return 0;	
}

int format (double array1[], int num)
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
int mixt (double array1[], int num)
{
	int sum=0;
	int i;
	for (i=0;i<num;i++)
	{
		sum +=array1[i];
	}
return sum;	
}
void spit (double array1[], int num)
{
	
	for (int i=0;i<num;i++)
	{
		cout << "The number of item " << (i+1) << " is: " << array1[i] << endl;
		
	}
}

void change (double array1[],int num)
{  
 int xng;
cout << "Enter the number to multiply by: ";
cin >> xng;

	for (int i=0;i<num;i++)
	{
		cout << "Your new number is: ";
		cout << array1[i]*xng << endl;
	}
	
}

int dogyear(int x)
{
	cin >> x;
	return 7*x;
}



