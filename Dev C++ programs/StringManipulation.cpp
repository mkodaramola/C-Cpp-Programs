#include <iostream>
#include <cstring>
#include <cctype>
#include <string>

		using namespace std;
		

		
		
		
		char const* array();
void underscore(string sen);		
void slide(string wd, int a, int b);		
void lower(string word);

int main(){
	string a,b;
	cout << "Enter 1: \n";
	getline(cin,a);
	cout << "Enter 2: \n";
	getline(cin,b);

	
system ("pause");
return 0;	
}








void underscore(string sen){
	int knum[]={};
	cout << sen << endl;
	int pos;	
	for (int i=0;sen.find(" ") != 0;i++){
		
	 pos = sen.find(" "); 
	sen = sen.erase(0,pos+1);
	cout << sen<< "  " << i << endl;
}

	
}




void slide(string wd, int a, int b){
	for (int i=a;i<b;i++){
		cout << wd[i];
	}
}
char const* array(){
	return "Hello world";
}

void lower(string word){
	
}
