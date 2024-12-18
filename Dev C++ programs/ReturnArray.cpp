#include <iostream>
#include <cstdlib>
using namespace std;


int * Usarr(int lim){
	
	int arr[lim];
	for(int i=0;i<lim;i++){
		
		arr[i] = i;
	
	}
	
		for(int i=0;i<lim;i++){
		
		
		cout <<"-----------" << arr[i] << endl;
		
	}
	
	
	
	return arr;	
}
int * Sarr(int arr[], int lim){
	


	
	cout <<"First---->\n\n";
	for(int i=0;i<lim;i++){
		
	cout << arr[i] << endl;
			
	}
	cout <<"\n\n\n\n";
		for(int i=0;i<lim;i++){
		int rd = rand()%(lim+1);
		cout << "rand: " << rd << " ---> " << i << endl;
		int temp = arr[rd];
		arr[rd] = arr[i];
		arr[i] = temp;	
		
	}
	
	return arr;
	
	
}





int main(){
int a[5] = {4,5,6,7,8};
int * p = Sarr(a,5);


cout << p[4] <<endl;
	
	
	


	return 0;
}
