#include <iostream>
#include <cstdlib>
#include <cmath>
#include <stdio.h>
#include <cstring>
#include <time.h>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;
string slide(string wd,int b, int s);
		
	string str(int x){
	int num = x;
	string str;
	
	stringstream ss;
	
	ss << num;
	
	str = ss.str();
	
	
	return str;
	
	}
	
		
		
void speak(string sp){
		string out = "CreateObject(\"sapi.spvoice\").Speak "; 
		out = out.append("\"");
		out = out.append(sp);
		out = out.append("\"");
		
	ofstream wfile;
	wfile.open("ctts.vbs");
	wfile << out<< endl;	
	wfile.close();
		system("ctts.vbs");
		}
		

class use {

private:
    int pw;
    string words;

public:
    void setp(int x){
    pw = x;
    }
    void setwd(string w){

        words = w;

    }
    int getp(){return pw;}
    string getw(){return words;}

    void getmg(){

        getline(cin, words);

    }

};

		// Time





int guessGame(){
     int n;
   string nstr;
   string sp="";
   do {

cout << endl <<"Guess the number on my mind (0 - 3): ";
speak("Guess the number on my mind from 0 to 3");
getline(cin,nstr);
int i=0;
stringstream (nstr) >> n;



int k = rand()%4;
    if (n > 3){
    	speak("Ending game... Nice playing with you");
        return 0;
    }


    else
    {
         if( n == k){
        cout << "Correct! " << k << " was also on my mind. " << endl;
        sp = "correct!";
        sp = sp.append(str(k)).append(" was also on my mind");
        speak(sp);
    }
    else{
	
        cout << "You're Wrong, " << k << " was on my mind."<< endl;
	 sp = "You're wrong, ";
        sp = sp.append(str(k)).append(" was on my mind");
        speak(sp);
        sp = "";
    }
    }
    }while(slide(nstr,0,3) !="end" || slide(nstr,0,4) !="stop");

	
}



int rn1(string wod){
            int p = wod.find("+");
           string l1 = wod.substr(0,p);

           int n1;


                    istringstream iss(l1);
                    iss >> n1;
                    if (!iss.good()){
                        return n1;
                    }
                    else
                        return 0;

}
int rn2(string wod2){
            int p = wod2.find("+");
            int len = wod2.length();
           string l2 = wod2.substr(p+1,len);

           int n2;


                    istringstream iss(l2);
                    iss >> n2;
                    if (!iss.good()){
                        return n2;
                    }
                    else
                        return 0;

}









int main(){
  use obj;
	string name,w1,gres;
	string smsg;
		cout << "You Must Please Enter Your Name Before You Chat With Toby.   ";
		getline(cin,name);
		cout << "   ";
		cout << "You are now CONNECTED to Toby... 	(You can enter 'help' to know more about Toby, 'end' to stop program)     ";
		cout << "Start Conversation =>   ";
		time_t start, end;
	time (&start);

  string daytime;

  string z = ctime(&start);
  string k = z.substr(11,13);
	string current_Shr = k;
   int current_Nhr;
   stringstream(current_Shr) >> current_Nhr;

   if (current_Nhr < 12){

   		daytime = ", Good Morning";

   }
   else if(current_Nhr > 11 && current_Nhr < 16){

   		daytime = ", Good Afternoon";

   }

   else if(current_Nhr > 15 && current_Nhr < 19){

   		daytime = ", Good Twilight";

   }
   else {
   	daytime = ", Good Evening";
   }

    time (&end);


   string dg = daytime;

 //sat Jul 13 22:05:13 2019

	loop:


	int ct =0;
	int tot;
	string f;
		while (ct == 0){
			if (ct == 0){
			f = ". Nice meeting you,  how can I help you please?";
		}
		else{
			f= ".";
		}
		ct++;
		}
		getline(cin,w1);

		for (int i=0;i<w1.length();i++){
			w1[i]= tolower(w1[i]);
		}
	 if (slide(w1,0,2) == "hi"){

		gres = "Hi to you too " + name + dg + f;
	}
		else if (slide(w1,0,3) == "hey"){

		gres = "Hey there " + name + dg  + f;
	}
		else if (slide(w1,0,4) == "good"){

		gres = dg + " " + name +f;
	}
	else if (w1 == name){
        gres = "That's your name!   ";
	}
	else if (w1.find("who") != string::npos && ((w1.find("jesus") != string::npos) || w1.find("christ") != string::npos || w1.find("god") != string::npos )){

            gres = "Jesus is the son of God, the creator of the World";
		}
			else if (w1.find("are") != string::npos && ((w1.find("believ") != string::npos) || w1.find("christian") != string::npos || w1.find("islam") != string::npos || w1.find("god") != string::npos || w1.find("musli") != string::npos )){

            gres = "I'm only a machine, I possess no soul,I dont engage in religion'";
		}
		

	else if (w1 == ""){
			gres = name +" Your last message was empty";
		}
		else if (w1 == " "){
			gres = name +" Your last message was empty";
		}
			else if (w1 == "  "){
			gres = name +" Your last message was empty";
		}

	else if (slide(w1,0,9) == "i'm sorry" || slide(w1,0,5) == "sorry" || slide(w1,0,10)=="i am sorry"){
		gres = "No problem friend!";
	}
		else if (slide(w1,0,5) == "hello"){
		gres = "Hi " + name+ dg +f;
	}
		else if (slide(w1,0,4) == "toby"){

		gres = "Yes " + name + "! I'm right here";
	}
		else if (w1.find("thank") != string::npos || w1.find("merci") != string::npos){

		gres = "You're welcome friend!";
	}
		else if (slide(w1,0,11) == "how are you" || slide(w1,0,17) == "how have you been" ||  slide (w1,0,9) == "how are u"  || slide (w1,0,8) == "how far" || slide(w1,0,15) == "so, how are you" || slide (w1,0,17) == "how is everything" || slide(w1,0,14) == "so,how are you" ){

		gres = "I'm Fine, thanks for asking.";
	}
	
	
		else if (slide(w1,0,2) == "ok" || slide (w1,0,4)== "okay" || slide (w1,0,6)== "really" || slide (w1,0,10)== "seriously?" || slide (w1,0,12)== "are you sure" || slide (w1,0,10)== "are u sure" || slide (w1,0,3)== "wow"){

		gres = "Yeah!";
	}
		else if (slide(w1,0,4) == "dude" || slide(w1,0,6)=="friend"){

		gres = "Yes " + name+"!";
		}
		else if (slide(w1,0,8) == "whats up" || slide(w1,0,4)=="bro"){

		gres = "Hey " + name + "!" + f;
		}
		else if (w1 == "yeah" || w1 == "correct" || w1== "yes"){
            gres = "Okay!";
		}


    else if (w1 == "who are you" || w1 == "what is your name" || w1 == "tell me about yourself" || w1 == "what can you do"){

				gres = "I am Toby, an advance ARTIFICIAL INTELLIGENT MACHINE created by DaraTronics to render you services, answer your questions, and carry out banking transaction in Darafem Unity Bank.    I can help majorly in the following  1. Check Account Balance  2. Transfer from one Bank Accountto another.  3. Transfer mobile account";

		}
			else if (w1.find("tell") != string::npos && w1.find("about") != string::npos && (w1.find("youself") != string::npos)){

          	gres = "I am Toby, an advance ARTIFICIAL INTELLIGENT MACHINE created by DaraTronics to render you services, answer your questions, and carry out banking transaction in Darafem Unity Bank.    I can help majorly in the following  1. Check Account Balance  2. Transfer from one Bank Accountto another.  3. Transfer mobile account";

		}
		else if (slide(w1,0,15) == "you are welcome" || slide(w1,0,6)=="you're welcome"){
			

		gres = "Yes " + name+"!";
		}


			else if (w1.find("time") != string::npos && w1.find("what") != string::npos && (w1.find("s") != string::npos)){

            gres = z;
		}


		else if (slide(w1,0,3) == "end"){

		goto stop;
	}
		else if ((w1.find("do") != string::npos || w1.find("does") != string::npos || w1.find("did") != string::npos  ) && (w1.find("sleep") != string::npos || w1.find("rest") != string::npos)){
            gres = "I'm a machine, I don't sleep or rest'";
		}
			else if ((w1.find("do") != string::npos || w1.find("does") != string::npos || w1.find("did") != string::npos  ) && (w1.find("eat") != string::npos || w1.find("feed") != string::npos)){
            gres = "Funny you, No I don't eat";
		}
	else if (slide(w1,0,5) == "hello"){
		gres = "Hi " + name+f;
		}
		else if (slide(w1,0,4) == "help"){

		gres = "I am Toby, an advance ARTIFICIAL INTELLIGENT MACHINE created by DaraTronics to render you services, answer your questions, and carry out banking transaction in Darafem Unity Bank.    I can help majorly in the following  1. Check Account Balance  2. Transfer from one Bank Accountto another.  3. Transfer mobile account";
	}
		else if (slide(w1,0,11)== "what is the"){
			int rmn = w1.length();
			string k = slide(w1,11,rmn);
			gres = "Please click on the link below to get the meaning of " + k + "   http://www.wiktionary.org/" + k;
		}
		else if (slide(w1,0,9)== "what is a"){
			int rmn = w1.length();
			string k = slide(w1,10,rmn);
			gres = "Please click on the link below to get the meaning of " + k + "   http://www.wiktionary.org/" + k;
		}
			else if (slide(w1,0,7)== "what is" || slide(w1,0,6)=="define"){
			int rmn = w1.length();
			string k = slide(w1,8,rmn);
			gres = "Please click on the link below to get the meaning of " + k + "   http://www.wiktionary.org/" + k;
		}
		else if (  (w1.find("transfer") != string::npos &&  ( w1.find("money") != string::npos || w1.find("account") ) )  ||  (w1.find("send") != string::npos &&  ( w1.find("money") != string::npos || w1.find("account"))) || (w1.find("transfer") != string::npos &&  ( w1.find("make") != string::npos || w1.find("do") )   ) ){
			gres = "  Alright "+name + " to make a transfer,  click on the link below to log in on your Darafem Unity Bank account,then input your     Pin,    Account password,    Receipient Account number, and finally    The amount you want to transfer.   www.dub.com/transfer";
		}
		else if (  ( w1.find("check") != string::npos && w1.find("balance") != string::npos)  ||  (w1.find("how") != string::npos && w1.find("much")!= string::npos &&  ( w1.find("money") != string::npos || w1.find("account") )   )){
			gres = name+ ", you have a sum of 2,548,630 naira ";
		}
		else if (w1.find("play") != string::npos && ((w1.find("guess") != string::npos) || w1.find("game") != string::npos)){
        cout << "Alright " << name << " lets play guessing game...      Enter any number greater than 3 to end game";
        string sp = "Alright,";
        sp = sp.append(name).append(" lets play guessing game...      Enter any number greater than 3 to end game");
		speak(sp);
            guessGame();
		}
		else if (w1.find("how") != string::npos && ((w1.find("day") != string::npos) || w1.find("ght") != string::npos)){

            gres = "Fine Thank you";
		}
		
				else if (w1.find("how") != string::npos && ((w1.find("do you") != string::npos) || w1.find("do") != string::npos)){

            gres = "I'm good, Thank you";
		}
                                                    //Toby Mathematics
		else if (w1.find("+") != string::npos){

                int a = rn1(w1);
                int b = rn2(w1);

                tot = a+b;

               cout << tot << endl;
               goto loop;

		}
		else if (w1.find("x^2") != string::npos){





	if (w1.find("=0") != string::npos){
		int len = w1.size();
		w1 = w1.erase(len-2,len);
	}

string kequ = w1;

int pos1,pos2,pos3;
string sa,sb,sc;
int a,b,c;

pos1 = w1.find("x^2");

		// a

sa = w1.substr(0,pos1);
	if (sa == ""){
		sa = "1";
	}
	if (sa == "-"){
		sa = "-1";
	}

stringstream(sa) >> a;


//x^2+3x+7=0
		//b

pos2 = pos1 + 3;



	sb = w1.erase(0,pos2);

	int newpos2 = sb.find("x");

	newpos2 = newpos2 + pos2;

	string nsb = kequ.substr(pos2, newpos2);

	stringstream(nsb) >> b;




		//c

pos3 = kequ.size();


	sc = kequ.substr(newpos2+1,pos3);


	stringstream(sc) >> c;


double p,q,r;

p = (-b);

q = sqrt((b*b) - (4*a*c));

r = (2*a);


double x1,x2;

x1 = (p+q)/r;
x2 = (p-q)/r;

	if (kequ.find(" ") != string::npos){
		gres = "Invalid Input!    No spaces should be included within equation.    ";
	}
	else{
		cout << "  x1 = " << (x1) << "        x2 = " << (x2) << "    ";
	}

		}
		else if ((w1.find("meant") != string::npos || w1.find("meant") != string::npos || w1.find("want") != string::npos  ) && (w1.find("say") != string::npos || w1.find("write") != string::npos)){
            gres = "Okay!";
		}
	
		
		else if (w1.find("secret") != string::npos && (w1.find("keep") != string::npos || w1.find("hide") != string::npos || w1.find("save") != string::npos)){
            int pw1,pw2;
            password:
            cout << "Okay " + name + ", to keep a secret message with me please enter a password(numbers): ";
            cin >> pw1;

            cout << "Confirm password: ";
            cin >> pw2;
                if (pw1 == pw2){

                        obj.setp(pw1);
                cout << "  You can Enter the secret message below:   ";
                   obj.getmg();


                }

                else{

                         string ans;
                    cout << name<< ", you entered 2 different password.      Will you like to try again? ";
                    cin >> ans;
                    if (ans.find("yes") != string::npos || ans.find("yeah") != string::npos || ans.find("i will") != string::npos || ans.find("okay") != string::npos || ans.find("ok") != string::npos || ans == "y"||ans.find("try again") != string::npos ){
                        goto password;
                    }
                    else
                        cout << "No problem!   ";
                        goto loop;

                }


		}


		else if ((w1.find("open") != string::npos || w1.find("show") != string::npos || w1.find("dislpay") != string::npos) && ((w1.find("secret") != string::npos) || w1.find("hid") != string::npos || w1.find("save") != string::npos) && (w1.find("message") != string::npos || w1.find("note") != string::npos || w1.find("write") != string::npos)){

            cout << "Okay " << name << ", please enter your password: ";
            int pasw;
            cin >> pasw;

            if (pasw == obj.getp()){
                cout << "     Here is the secret message:       ";
                cout << obj.getw() << endl;

            }

            if(pasw != obj.getp()){
                cout << "Incorrect Password!  So " << name << ", I'm sorry I will not reveal the secret message.     BACK TO NORMAL CONSERVATION.";
            goto loop;

            }
		}

		else if( w1.find("x^2") != string::npos){
            string wd;
  getline(cin,wd);


  unsigned int len = wd.length();
  int w = wd.find("x^2");
  string wdc = wd.substr(0,w+3);
  int wcn = wdc.find("x");
  int lwdc = wdc.size();
   wcn = wcn + lwdc;

  // 4x^2-3x +5
  string wa = wd.substr(0, w);
  int a;
  if (wa == ""){
    a =1;



  }

  stringstream(wa) >> a;

   string wb = wd.substr(w+3,wcn);

  int b;
  stringstream(wb) >> b;

  string wc = wd.substr(7,len);

  int c;
  stringstream(wc) >> c;


    int p = -b;
  int q = (sqrt((b*b)-(4*a*c)));
  int r = (2*a);

  int x1 = (p+q)/r;
  int x2 = (p-q)/r;

    gres = x1 + x2;


		}

		else if ((w1.find("time") != string::npos && (w1.find("table") != string::npos))){
        string tt = "Alright...Monday \t GNS103[9-10, FBN] \t MTS101[10-12, LT1] \t PHY103[12-1, LT1] \t EEE101[3-5, LR5] TUESDAY \t GNS101[10-12, ETF] \t MEE101[12-2, 1000] Wednesday \t CHE101[8-10, ETF] \t PHY101[10-12, ETF] \t MTS Tutorial[5-6, LT2] Thursday \t \t Lecture Free WeekFriday \t CVE105[7-9, ETF]";
            gres = tt;
		}


		else{
                int cx = rand()%10;
        if (cx%2 ==0){
            gres = "I'm sorry I can't understand your last message, please rephrase your word for better comprehension.";
        }
        else
			gres = "I'm sorry I can't understand your last message, please rephrase your word for better comprehension.";
		}







cout << gres << endl;
speak(gres);
ct++;
goto loop;
stop:
	cout << "Good bye to you " <<  name << ", nice chat with you";

return 0;
}


string slide(string wd,int b, int s){

	string ch = wd.substr(b,s);

	return ch;
}

