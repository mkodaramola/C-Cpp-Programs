#include <iostream>
#include <cstdlib>


int format (int array1[] , int num);
using namespace std;


int main ()
{
int dig[5] = {23,34,6,32,12};
	
int sood = format(dig ,5);	
cout << sood << endl;	
		
system ("pause");
return 0;	
}

int format (int array1[] , int num)
{ int sum =0;
	int input;
	for (int i =0;i<num;i++)
	{
	sum+=array1[i];
	 
    }
 return sum;
}
