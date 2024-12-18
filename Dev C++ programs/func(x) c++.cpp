#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <cmath>
#include <bits/stdc++.h>
#include <sstream>
	using namespace std;

		int toInt(string text){
		int num;
		stringstream ss;
		
		ss >> num;
		
		
		return num;
	}
	
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
		 
		 
		 
		 
		 cout << hBin << endl;
			
		return hBin;
		
			
			
		}
	
		
int dec(int Nbin){
		
		int arr[99];
	int i=0,Ndec = 0;
	
	
	
		while(Nbin>0){
		
			arr[i] = Nbin%10;
			Ndec +=(arr[i] * pow(2,i));
			Nbin /=10;
			
			i++;
		} 
		
		return Ndec;
	}
	


int main ()
{
	
for(;;){
		int bin;
	cout << "Enter Binary: ";
	cin >> bin;
	
	cout << dec(bin) << endl;
	
	
}

system ("pause");
return 0;	
}

