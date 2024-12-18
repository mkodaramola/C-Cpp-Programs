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
	
	string binary(int n){
		
			
			string hBin="";
			int nBin;
				int non=0;
				int ibin[]={};
		
		for(int i=0;n>0;i++){
			
			nBin = n%2;
			
			hBin += str(nBin);			
			
			n/=2;	
		}
		
			while(hBin.length() <8 ){
		 	
		 	hBin += "0";
		 	
		 	
		 }
		
		 reverse(hBin.begin(),hBin.end());
		 
		 
		 
		 
			
		return hBin;
		
		
		
	}
		
		
	
		
		
int main(){
	
	int n;
	
	
for(;;){
		cout << "\n\nEnter Number: ";
	
	cin >> n;
	
	
	cout << "\n" << binary(n) << endl;
	
	
}
	system("pause");
	return 0;
}		
