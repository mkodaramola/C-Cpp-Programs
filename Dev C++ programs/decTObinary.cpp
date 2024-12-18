#include <iostream>
#include <cmath>
#include <cstdlib>
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
		
			int toInt(string text){
		int num;
		stringstream(text) >> num;
		
		return num;
	}

int main(){
	string num;

for(;;){
	
	cout << "Enter Decimal: ";
	getline (cin, num);
	
	
	
	cout << "Binary: " << binary(toInt(num)) << endl;
		
}	
	
}	
