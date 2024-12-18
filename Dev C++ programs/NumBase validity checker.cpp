#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <windows.h>
#include <string.h>
#include <fstream>
#include <bits/stdc++.h>
	


	using namespace std;
	
		string str(int x){
	int num = x;
	string str;
	
	stringstream ss;
	
	ss << num;
	
	str = ss.str();
	
	
	return str;
	
	}
	
		string str(char sen[]){
		string ch="";
		
		for(int i=0;i<strlen(sen);i++){
			ch += sen[i];
		}
		
		return ch;
		
	}
	
bool NumValid(int x, int NumB){

		while(x != 0){
		
		
		if(x%10 >= NumB) return false;
		
		x /=10;
		
		}
		
return true;


}

		
		
	
		
		
int main(){
	
	
	
cout << NumValid(123,4) << endl;
	
	
	

	system("pause");
	return 0;
}		
