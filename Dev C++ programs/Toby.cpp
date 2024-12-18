#include <iostream>
#include <string>
#include <cstring>
using namespace std;
string slide(string wd,int b, int s);


	
int main(){

	string name,w1,gres;	
		cout << "You Must Please Enter Your Name Before You Chat With Toby. \n";
		getline(cin,name);
		
		cout << " \n";
		cout << "You are now CONNECTED to Toby... 						(You can enter 'help' to know more about Toby, 'end' to stop program) \n\n";
		cout << "Start Conversation => \n";
	loop:	
	int ct =0;
	string f;
		if (ct == 0){
			f = ". Nice meeting you,  how can I help you please?";
		}
		else{
			f= ".";
		}
		getline(cin,w1);
		
		for (int i=0;i<w1.length();i++){
			w1[i]= tolower(w1[i]);
		}
	 if (slide(w1,0,2) == "hi"){
		
		gres = "Hi to you too " + name + f;
	}
		else if (slide(w1,0,3) == "hey"){
		
		gres = "Hey there " + name + f;
	}
		else if (slide(w1,0,4) == "good"){
		
		gres = w1 + " " + name+f;
	}
		
	else if (w1 == " "){
			gres = "Your last message is empty";
		}
		else if (slide(w1,0,4) == "hello"){	
		gres = "Hi " + name+f;
	}
		else if (slide(w1,0,4) == "toby"){
		
		gres = "Yes " + name + "! I'm right here";
	}
		else if (slide(w1,0,9) == "thank you" || slide(w1,0,7) == "thanks" || slide(w1,0,4)== "thnks" || slide(w1,0,5)== "thank" || slide(w1,0,5)== "merci"){
		
		gres = "You're welcome friend!";
	}
		else if (slide(w1,0,11) == "how are you" || slide (w1,0,16) == "how are have you" ||  slide (w1,0,9) == "how are u"  || slide (w1,0,8) == "how far" ){
		
		gres = "I'm Fine, thanks for asking.";
	}
		else if (slide(w1,0,2) == "ok" || slide (w1,0,4)== "okay" || slide (w1,0,6)== "really" || slide (w1,0,10)== "seriously?" || slide (w1,0,12)== "are you sure" || slide (w1,0,10)== "are u sure" || slide (w1,0,3)== "wow"){
		
		gres = "Yeah!";
	}
		else if (slide(w1,0,4) == "dude" || slide(w1,0,6)=="friend"){
		
		gres = "Yes " + name+"!";
	}
		else if (slide(w1,0,3) == "end"){
		
		goto stop;
	}
	else if (slide(w1,0,4) == "hello"){	
		gres = "Hi " + name+f;
		}
		else if (slide(w1,0,4) == "help"){
		
		gres = "I am Toby, an advance ARTIFICIAL INTELLIGENT MACHINE created to render you services, answer your questions, and carry out banking transaction in Darafem Unity Bank. \n I can help majorly in the following\n1. Check Account Balance\n2. Transfer from one Bank Accountto another.\n3. Transfer mobile account";
	}
		else if (slide(w1,0,11)== "what is the"){
			int rmn = w1.length();
			string k = slide(w1,11,rmn);
			gres = "Please click on the link below to get the meaning of " + k + "\n http://www.wiktionary.org/" + k; 
		}
		else if (slide(w1,0,9)== "what is a"){
			int rmn = w1.length();
			string k = slide(w1,10,rmn);
			gres = "Please click on the link below to get the meaning of " + k + "\n http://www.wiktionary.org/" + k; 
		}
			else if (slide(w1,0,7)== "what is" || slide(w1,0,6)=="define"){
			int rmn = w1.length();
			string k = slide(w1,8,rmn);
			gres = "Please click on the link below to get the meaning of " + k + "\n http://www.wiktionary.org/" + k; 
		}
		else if (slide(w1,0,4) == "hello"){	
		gres = "Hi " + name+f;
		}
		else if (  ( w1.find("check") != string::npos && w1.find("balance") != string::npos)  ||  (w1.find("how") != string::npos && w1.find("much")!= string::npos &&  ( w1.find("money") != string::npos || w1.find("account") )   )){
			gres = name + ", you have a sum of 2,548,630 naira ";
		}
		else{
			gres = "I'm sorry, I can't understand your last message. Can you please rephrase your words for better comprehension?";
		}
		


	
cout << gres << endl;
ct++;
goto loop;	
stop:
	cout << "Good bye to you " <<  name << ", nice chat with you\n";
system("pause");
return 0;	
}


string slide(string wd,int b, int s){
	
	string ch = wd.substr(b,s);
	
	return ch;
}
	
