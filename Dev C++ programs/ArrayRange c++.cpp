#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <string.h>
#include <fstream>


using namespace std;


// F Convert Characters to String
	string str(char c[]){
		
		string str="";

	for (int i=0;i<strlen(c);i++){	
	
		str += c[i];
		
	}

	return str;
		
	}


//F Get Text from External File

string getFile(char fn[]){
	
	string scon = "";
ifstream rfile;
char con[999];
rfile.open(fn);

if(rfile.is_open()){
	while(!rfile.eof()){
	
	rfile.getline(con,999);
	
	scon += str(con);
		
}

rfile.close();

return scon;

}

	// If Unable to open External File

else{
	return "Unable to open File.\n\n";
}

	}
	
	
	//F Get Correct Option
	
	string Copt(string que){
		
		int x = que.find("¬");
		
		string Topt;
		
		Topt = que.substr(x-1,1);
		
		for(int i=0;i<Topt.length();i++){
		Topt[i] = tolower(Topt[i]);
		}
		
		return Topt;
	}
	
	
	//F Erase character in front of Correct Option

	string Nque(string que){
		
		int symP = que.find("¬");
		
		que = que.erase(symP,1);
		
		return que;
		
	}
	
	void resultWriter(int score, int noq){
	
	ofstream wfile("C:\\Users\\DARAMOLA OLUWAFEMI M\\Documents\\Electronics\\Electronics TextBooks\\Result.txt");
	
			wfile << "Total Score: " << score << " of " << noq << "\n\n\n";

			wfile.close();
	
}
	
	
	
	//F Cut OR Break Question
	
	void bSen(string sen, int score = 0, int noq = 0){
		
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
	goto jump;
	} 
				
}	
	jump:
		
	int Fpos = sen.find("~");
	int Bpos =sen.rfind("~");
	
	if (Fpos == Bpos){
		is_finished = true;
	}
	// Cut question
		string que = sen.substr(ini+1,fin-ini-1);
	// Get correct Option	
	string Ropt = Copt(que);
	
	// Erase character in front of Correct Option
		que = Nque(que);
	
	// Show Question
	if (noq == 0){
		cout << endl << noq+1 << ". " << que.substr(0,que.length()) << endl << endl;
	
	}
	else{
		cout << endl << noq+1 << ". " << que.substr(1,que.length()) << endl << endl;
	}		
	
	// Allow User input Ans	
	string uAns;
	getline(cin, uAns);
	
	// lower case ans
	for(int i=0;i<uAns.length();i++){
		uAns[i] = tolower(uAns[i]);
	}
	
	// if User is Correct, Increment score

	if (uAns == Ropt){
		score++;
		}
	// Increment number of question asked
		noq++;

	// If not finished repeat by recursion of erased initial character
	
	if (is_finished == false){
		bSen(sen.erase(2,fin), score,noq);
	}

			if(is_finished == true){
		resultWriter(score,noq);

	}
		
}



int main ()
{
	
bSen(getFile("C:\\Users\\DARAMOLA OLUWAFEMI M\\Documents\\Programming\\C++\\Advance CBT\\TestQuestions.txt"));
	
system ("pause");
return 0;	
}


