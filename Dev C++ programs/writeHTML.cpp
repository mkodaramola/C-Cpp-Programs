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

	
	
		int main(){
	string code="`";
	
	string address = "C:\\Users\\DARAMOLA OLUWAFEMI M\\Documents\\MyPhone\\SW_DVD5_Office_Professional_Plus_2016_64Bit_English_MLF_X20-42432.ISO";
	int lpos = address.find_last_of("\\");
	int pos = address.find_last_of(".");
	string appName = address.substr(lpos+1,lpos-1-pos);
	char add[]="C:\\Users\\DARAMOLA OLUWAFEMI M\\Documents\\MyPhone\\SW_DVD5_Office_Professional_Plus_2016_64Bit_English_MLF_X20-42432.ISO";
	
	
	ofstream wfile(add);
	
	wfile << code << endl;		
			
	wfile.clear();
	
	cout << "\n\n\n\n\t\t\t" << appName << " Destroyed!!!\n\n\n\n\n";		
			
			system("pause");
			return 0;
		}
