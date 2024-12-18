#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>
	using namespace std;

void append(int arr[], int size, int value){
	
	for (int i=0;i<size;i++){
		
		if(i != 9) arr[i] = arr[i+1];
		
		else arr[i] = value;
						
	}
	
	
}

int main ()
{


int arr[10] = {1,2,3,4,5,6,7,8,9,0};

append(arr,10,34);

append(arr,10,100);
cout << "{";
for(int i=0; i<10;i++) cout << arr[i] << ", ";
cout << "\b\b}";




	
system ("pause");
return 0;	
}





