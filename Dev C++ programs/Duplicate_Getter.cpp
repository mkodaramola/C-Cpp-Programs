#include <iostream>

using namespace std;

int main(){

int arr[10] = {1,2,3,3,4,5,1,6,7,9};
int tarr[10] = {};
int arrLen = (sizeof(arr)/sizeof(*arr));	
int tarrLen = (sizeof(tarr)/sizeof(*tarr));


for(int i=0;i<arrLen;i++){
	
	
	
	for(int j=0;j<tarrLen;j++){
		
					
					if(tarr[j] == arr[i]){
						cout << arr[i] << " contains duplicate" << endl;
					}
								
		
		}
		
				
				tarr[i] = arr[i];
	
	
}	

		
	
	return 0;
}
