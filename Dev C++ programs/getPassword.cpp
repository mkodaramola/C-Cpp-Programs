#include <iostream>


	using namespace std;
	int getPassw(int x);
		int main(){
			int passw = 2004;
		int val =getPassw(passw);
		cout << val << endl;
			system("pause");
			return 0;
		}
		
		
	int getPassw(int x){
			
			for (int i =0; i != x+1;i++){
			
				
				if (i==x){
					return i;
				}
			}	
		
		
	}
