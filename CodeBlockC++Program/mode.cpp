#include <iostream>

		using namespace std;
		

		
		
		
	
	int main(){
		
int lim;		
		
cout << "Enter Limit: ";
cin >> lim;
cout << "The Prime Numbers are: ";
		for(int i=2;i<=lim;i++){
			for (int j=2;j<i;j++){
				if(i%j == 0){
					
				goto loop;
					
				}
				
			}
		
			cout << i << " ";
				
			loop:
			
				continue;
						

		
		}


	cout << endl;
				
		
		
		system("pause");
		return 0;
	}	
