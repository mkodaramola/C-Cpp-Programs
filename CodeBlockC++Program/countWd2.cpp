#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <string.h>
#include <fstream>


using namespace std;

	string Nque(string que){
		
		
		
		int symP = que.find("¬");
		
		que = que.erase(symP,1);
		
		return que;
		
	}
	
		string Copt(string que){
		
		
		
		
	
		
		int x = que.find("¬");
		
		string Topt;
		
		Topt = que.substr(x-1,1);
		
		for(int i=0;i<Topt.length();i++){
		Topt[i] = tolower(Topt[i]);
		}
		
			return Topt;
		
	
		
	
	}



int main ()
{


string ch = "This #is a _____ (A¬) Pen (B) Car (C) Monkey (D) Dog";

int p1 = ch.find("#");
int p2 = ch.rfind("#");

cout << "find: " << p1 << "    rfind: " << p2 << endl;


cout << "New Question: " << Nque(ch) << endl;
cout << "Correct Answer: " << Copt(ch) << endl;



system ("pause");
return 0;	
}


