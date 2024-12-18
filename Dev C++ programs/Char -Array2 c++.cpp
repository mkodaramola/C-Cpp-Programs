#include <iostream>
#include <cstdlib>
#include <cmath>
#include <stdio.h>
#include <cstring>
#include <windows.h>
#include <string>
#include <sstream>
	using namespace std;

int main (){



string sen = "The term ~software construction refers to the detailed creation of working software.|through a ~combination of coding, verification, unit testing, integration| ~testing, and debugging.|";

char ans;		
string ch;		
string cpySen = sen;
int ini = 0;
int fin =0;

int sini=0,sfin=0;

bool is_finished = false;	
		
		
	for (int i=0;i<sen.length();i++){
	ch = sen[i];
	
	if (ch == "~"){
		
	ini = sini + i;		
	}
	if (ch == "|"){
		fin = sfin + i;
	goto loop;
	} 
			
}	
	loop:
		
	int Fpos = sen.find("~");
	int Bpos =sen.rfind("~");
	
	if (Fpos == Bpos){
		is_finished = true;
	}
	
		string que = sen.substr(ini+1,fin-ini-1);


cout << que << endl;

 

 main(sen.erase(0,fin));	
 Sleep(2000);
}


