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
		ofstream cchat("chat2.txt");
		cchat << "";
		cchat.close();
	}
	
	
	
	void conv(string OrMsg, unsigned int v = 0){
		
		if (v == 0){
			clrMsg();
		}
		
		
			string wMsg;		
	string rMsg = "";		
	bool tst = false;	
		cout << "Me: ";
		getline(cin,wMsg);
		
			
			if(wMsg == ""){
				tst = true;
			}
			
	if (tst == false){
			ofstream chat2;
		chat2.open("chat2.txt");
		
		chat2 << wMsg << endl;
	
		chat2.close();		
			
	}
		
	
		
		ifstream rchat2("chat1.txt");
		char con[9999];
		while (!rchat2.eof()){
			
		rchat2.getline(con,9999);	
		
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
