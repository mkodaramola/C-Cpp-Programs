#include <iostream>

int format (double boofy[], int num);
using namespace std;
int main ()
{
double arey[] = {};
int total = format(arey,5);	
	
cout << "The total sum of the five numbers is " << total << endl; 	
system ("pause");
return 0;	
}

int format (double boofy[], int num)
{   int input;
int i;
	int sum = 0;
	for (i=0;i<num;i++)
	{
		
		
		cout << "Enter the " << (i+1) << " number to be added: ";
		cin >> input;
		boofy[i]=input; 
	}
	sum+=boofy[i];

return sum;	
}
