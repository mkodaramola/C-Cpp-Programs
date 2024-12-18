#include <iostream>

using namespace std;


int main(){
	
	
	int ** p = new int*[3];
	
	for(int i=0;i<3;i++)
		p[i] = new int[3];
	
	
	
	for(int i=0;i<3;i++) {
		cout << "Enter values for Set " << i+1 << endl;
		for(int j=0;j<3;j++) {
				
				
				cin >> p[i][j];
			
		}	
	}
	
	cout << p[1][1] << endl;
	
	
	return 0;
}
