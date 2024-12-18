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
	void clrMsg(){
		ofstream cchat("chat1.txt");
		cchat << "";
		cchat.close();
	}
	
	
	
	
	void conv(string OrMsg, unsigned int v=0){
		
		if (v == 0){
			clrMsg(); 
		}
		
		string wMsg;		
	string rMsg="";		
		
		cout << "Me: ";
		getline(cin,wMsg);
	bool tst = false;	
			
			if(wMsg == ""){
			tst = true;
			}
	
	
	
	// Write File		
	if (tst == false){
			ofstream wchat1;
		wchat1.open("chat1.txt");
		
		wchat1 << wMsg << endl;
	
		wchat1.close();		
		
		
	}
	
	
	
	
	
	
	// Read File	
		ifstream rchat1("chat2.txt");
		char con[9999];
		while (!rchat1.eof()){
			
		rchat1.getline(con,9999);	
		
		rMsg += str(con);	
			
		}
		
		if (OrMsg != rMsg){
					cout << endl << "Friend: " << rMsg << endl;
		}
		

		
		
		tst = false;
		
		v++;
		
		
		conv(rMsg, v);
		
		
		
	}
	
	
	
	
		int main(){
			
	
	
	conv("");
		
			
			system("pause");
			return 0;
		}
