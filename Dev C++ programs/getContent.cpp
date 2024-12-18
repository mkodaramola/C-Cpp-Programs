#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){
	char fileName[50];
	ifstream getCont;
	cin.getline(fileName,50);
	getCont.open(fileName);
	
		if (!getCont.is_open()){
			exit(EXIT_FAILURE);
		}
		
	string content;
	
	getCont >> content;
		int wdnum = content.find("Password:");
			wdnum=wdnum+9;
		string newCont = content.substr(wdnum,wdnum+7);
	getCont >> newCont;
	
	cout << newCont << " ";
	
	
system ("pause");	
return 0;	
}


