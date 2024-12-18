#include <iostream>
#include <string>
#include <cstring>
#define nl '\n'
int fac(int n);
int fac2(int n);
using namespace std;

char conv(char wd[]){
	
			
		
	
}
string keep();	

int main(){

string w1 = "This is a sentence";
string w2 = "Here is another sentence";
int k;
string com;
k = w1.length();
string add;
for (int i=0;i<w1.length();i++){
	w1[i] = tolower(w1[i]); 
	
}

cout << w1 << endl;

string an = keep();

cout << an << endl;



// w1 = "This is a sentence"
// w2 = "Here is another sentence"





return 0;
system ("pause");	
}


string keep(){
	return ("This is another string");
}







int fac(int n){
	
	for (int i=(n-1);i>0;i--){
		n=(n*i);		
	}
	
	return n;
}

int fac2(int n){
	if (n == 0){
		return 1;
	}
	else
	return (n*fac2(n-1));
}


void save(){
	class femclass{
	public:
		void setName(string x){
			name = x;
		}
		string getName(){
			return name;
		}
	private: 
		string name;
};
	

femclass get;
get.setName("Daramola Oluwafemi Michael kolawole Oreoluwa Snr.");
cout << get.getName();

}


