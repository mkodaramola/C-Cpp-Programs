#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <windows.h>
#include <string.h>
#include <fstream>
#include <bits/stdc++.h>
	
	/*
	

*/

	using namespace std;
	
	char Dchar(int dec){
		
		return (char(dec));
		
	}
	
	
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
		
		
		string wbinary(char sen[]){
			
			char arrN[999];
			int i;
			for( i=0;i<strlen(sen);i++){
				
				arrN[i] = sen[i];			
				
			}
	string sbin="";
			for(int i=0;i<strlen(sen);i++){
				sbin += (binary(int(arrN[i])));
		}
			
		return sbin;	
			
		}
		
			int toInt(string text){
		int num;
		stringstream(text) >> num;
		
		return num;
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
	
	string str(char c){
		
		string str; 
		stringstream ss;
		
		ss << c;
		
		str = ss.str();
		 
		
		return str;
		
		
	}
	
	
		
		
		
		int main(){
			
			

	
	ifstream rfile("text.txt");
	char con;
	int i=0;
	char scon[999999];
	while(!rfile.eof()){
		
		rfile.get(con);	
		cout << con;
		
		scon[i] += con;
		i++;		
	}
	string Bcon = str(scon);
	
	/*
		for(int i=0;i<47;i++){
			
			
			if(Bcon.find(str(char (i))) != string::npos){
				cout << "Content is not Binary" << endl;
				
				exit(EXIT_FAILURE);
			}
			
			
		}
		
		
		for(int i=50;i<255;i++){
			
			
			if(Bcon.find(str(char (i))) != string::npos){
				cout << "Content is not Binary" << endl;
				
				exit(EXIT_FAILURE);
			}
			
			
		}
		
		*/
		
		
				
string Sarr[999];
int p =0;



for(int i=0;i<Bcon.length() != 0;i++){
	
	Sarr[i] = Bcon.substr(0,8);
	Bcon = Bcon.erase(0,8);
	p++;
	
}
			
	string out;
	
out = "";
		
for(int i=0;i<p;i++){
	
		
	out += str(Dchar(dec(toInt(Sarr[i]))));	
	
}	


	

	
	ofstream wfile;
	wfile.open("text.txt");
wfile << out<< endl;
	
	wfile.close();
	

			system("pause");
			return 0;
		}
