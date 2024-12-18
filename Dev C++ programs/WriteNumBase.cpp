#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <windows.h>
#include <string.h>
#include <fstream>
#include <bits/stdc++.h>
	
	/*
string Bcon = str(scon);			
string Sarr[999];
int p =0;



for(int i=0;i<Bcon.length() > 0;i++){
	
	Sarr[i] = Bcon.substr(0,8);
	Bcon = Bcon.erase(0,8);
	p++;
	
}
			
char convC[9999]="";
		
for(int i=0;i<p;i++){
	
		
	convC[i] += Dchar(dec(toInt(Sarr[i])));	
	
}	

	string out;
	
out = str(convC);
	

	
	ofstream wfile;
	wfile.open("0BINARYtoenglish.txt");
wfile << out<< endl;
	
	wfile.close();	

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
	
	
		
		
		
		int main(){
			
			

		
	
	ifstream rfile("0English.txt");
	char con;
	int i=0;
	char scon[99999];
	while(!rfile.eof()){
		
		rfile.get(con);	
		cout << con;
		
		scon[i] += con;
		i++;		
	}
	
	string out;
	
out = wbinary(scon);
	

	
	ofstream wfile;
	wfile.open("0englishtoBINARY.txt");
wfile << out<< endl;
	
	wfile.close();	


			system("pause");
			return 0;
		}
