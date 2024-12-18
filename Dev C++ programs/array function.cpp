#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>

using namespace std;
int array (int femi[],int num);
int main ()
{
int numbers [5]={4,54,23,43,7};

int total = array(numbers, 5);

cout << "The sum of all elements in the array is " << total << endl;
	system ("Pause");
	return 0;
}
int array (int femi[],int num)
    {
	int sum=0;
	for (int i=0;i<num;i++)
	{
		sum+=femi[i];
	}
	return sum;
}



