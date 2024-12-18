#include <iostream>
#include <cmath>
#include <fstream>

int lua (int array[], int num);

int main ()
{
	using namespace std;
int a,b,c;
cout << "Enter the three number: ";	
cin >> a;
cin >> b;
cin >> c;

int marray[3] = {a,b,c};

int z = lua (marray,3);

cout << "The total sum of the three numbers is " << z << endl;
	
	
system ("pause");
return 0;	
}

int lua (int array[], int num){
	int sum = 0;
	for(int i=0; i<3; i++){
		
		sum += array[i];
	}
	return sum;
}


