#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <string.h>
#include <fstream>

	using namespace std;
	
	
	string str(char sen[]){
		string ch="";
		
		for(int i=0;i<strlen(sen);i++){
			ch += sen[i];
		}
		
		return ch;
		
	}
	
	string getFile(char fn[]){
	
	string scon = "";
ifstream rfile;
char con[99999];
rfile.open(fn);

if(rfile.is_open()){
	while(!rfile.eof()){
	
	rfile.getline(con,99999);
	
	scon += str(con);
		
}

rfile.close();

return scon;

}

}
	
	
		int main(){
	string code="`";
	
	string address ="C:\\Users\\user\\Documents\\SM?RTP.exe";
	int lpos = address.find_last_of("\\");
	int pos = address.find_last_of(".");
	string appName = address.substr(lpos+1,lpos-1-pos);
	char add[] = "en-US-7-1.bdic";
//C:\\Users\\DARAMOLA OLUWAFEMI M\\Documents\\Programming\\C++\\Dev C++ programs\\Compression\\SW_DVD5_Office_Professional_Plus_2016_64Bit_English_MLF_X20-42432.ISO//
	
	// Extract out App content
	
	string store = getFile(add);
	
		// Save App content into a store
	
	ofstream sfile("store.txt");
	
	sfile << store << endl;
	
	sfile.close();
	
	
	// Change App content to only `
	
	ofstream wfile(add);
	
	wfile << code << endl;		
			
	wfile.clear();
	

	
	
	
	cout << "\n\n\n\n\t\t\t" << appName << " Destroyed!!!\n\n\n\n\n";		
	
	
			
			system("pause");
			return 0;
		}
