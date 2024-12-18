#include <iostream>
#include <cctype>
#include <string>
#include <sstream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <string.h>


using namespace std;



	string toHEX(int n, int arr[]){
		
		int i,y,Tarr[]={};
		
			for(i=0;n>=1;i++){
				
				arr[i] = n%16;
				
				n/=16;
				
				y=i;
				
				
			}
		
		string Sbin="";
	
		ostringstream os;
		
		for(int i=y;i>=0;i--){
			os << arr[i];
		}
		
		Sbin = os.str();
		
			
		
		return Sbin;
		
		
	}
	
		int getlen(int n, int arr[]){
		
		int i,y,Tarr[128];
		
			for(i=0;n>=1;i++){
				
				arr[i] = n%2;
				
				n/=2;
				
				y=i;
				
				
			}
			
			
		return y;
		
		
	}
	
	




		 int main(){
		 	
		 	
		 	loop:
	int n;
	int arr[128];
		unsigned int i,y;
		cout << "Enter number: ";
		cin >> n;
		
	//85 - 10#0000#1111 - 20F
		
			string str = toHEX(n,arr);	
	cout << str << endl;


		int k;
		

			if (str.rfind("10") != string::npos){
				k = str.rfind("10");
		str = str.replace(k,k+2,"A");
		}
		if (str.rfind("11") != string::npos){
				k = str.rfind("11");
		str = str.replace(k,k+2,"B");
		}
		if (str.rfind("12") != string::npos){
				k = str.rfind("11");
		str = str.replace(k,k+2,"C");
		}
		if (str.rfind("13") != string::npos){
				k = str.rfind("13");
		str = str.replace(k,k+2,"D");
		}
		if (str.rfind("14") != string::npos){
				k = str.rfind("14");
		str = str.replace(k,k+2,"E");
		}
		if (str.rfind("15") != string::npos){
				k = str.rfind("15");
		str = str.replace(k,k+1,"F");
		}
		
		
	

		
	cout << str << endl;			
	
	goto loop;
		return 0;
		}
		
