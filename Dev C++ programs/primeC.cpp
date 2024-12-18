#include <iostream>
int cp(int num);
int main(){
	int n;
std::cout << "Enter the number: ";	
std::cin >> n;

cp(n);

	
system ("pause");
return 0;	
}

int cp(int num){
	int res;
	for (int i=2;i<num;i++){
		res = (num%i);
		if (res == 0){	
			std::cout << num << " is divisible by " << i << ". \n";			 
		}
	
		else{
			std::cout << num << " is not divisible by " << i << ". \n"; 
		}
		
	}

}
