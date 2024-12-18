#include <iostream>
#include <cmath>
#include <string>
#include<sstream>

int add (int n1, int n2);
using namespace std;

int main(){
string mys;
float n1=0;
int n2=0;	
cout << "What is the number1?";
getline(cin,mys);
stringstream(mys) >> n1;

cout << "What is the number2?";
getline(cin,mys);
stringstream(mys) >> n2;

cout << n1+n2 << endl;





	
	
	
return 0;	
}

int add (int n1, int n2){
	
	return n1+n2;
	
}
