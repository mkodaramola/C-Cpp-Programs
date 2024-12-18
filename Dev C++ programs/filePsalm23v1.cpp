#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>


	char getWd(char x){
	
		return x;
		
	}



int main ()
{
	using namespace std;
ifstream rfile;
int ct =0;
	char wd;
int ch=0;
int len;
rfile.open("Psalm_23v1.txt");

	while(!rfile.eof()){

	rfile.get(wd);
	
	
	cout << wd;

	}

rfile.close();
	
system ("pause");
return 0;	
}
