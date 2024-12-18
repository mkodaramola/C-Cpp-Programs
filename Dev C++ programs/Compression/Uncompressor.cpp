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
	string code="";
	
	string address = "C:\\Users\\DARAMOLA OLUWAFEMI M\\Documents\\Programming\\C++\\Dev C++ programs\\Compression\\game.exe";
	int lpos = address.find_last_of("\\");
	int pos = address.find_last_of(".");
	string appName = address.substr(lpos+1,lpos-1-pos);
	char add[] = "C:\\Users\\user\\Documents\\Programming\\C++\\Dev C++ programs\\Compression\\android-studio-ide-182.5314842-windows.exe";
	
	
	// Extract out of store.txt
	
	string store = getFile("store.txt");
	
		// Save store back into a App
	
	ofstream sfile(add);
	
	sfile << store << endl;
	
	sfile.close();
	
	
	// Empty store content to only 
	
	ofstream wfile(add);
	
	wfile << code << endl;		
			
	wfile.clear();
	

	
	
	
	cout << "\n\n\n\n\t\t\t" << appName << " UnCompressed!!!\n\n\n\n\n";		
	
	
			
			system("pause");
			return 0;
		}
