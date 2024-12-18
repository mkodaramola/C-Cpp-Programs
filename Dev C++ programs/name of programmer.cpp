#include <iostream>

	int addition(int x,int y){
		
		return (x+y);
		
	}
	
	int substract(int x, int y){
		return (x-y);
	}
	
	
	int choose(int n, int m, int (*funcToCall)(int,int)){
		
		int k;
		
		k = (*funcToCall)(n,m);
		
		return k;
	}



int main ()
{
	using namespace std;
	cout << choose(5,3,addition) << endl;
	
	system ("pause");
	return 0;
}
