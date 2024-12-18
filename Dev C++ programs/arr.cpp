#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <string.h>


	using namespace std;


	class DF{

		private:
		int num;

		public:
    string Str(int x){
	num = x;
	string str;

	stringstream ss;

	ss << num;

	str = ss.str();


	return str;

	}
	string Str(char c){

		string str;
		stringstream ss;

		ss << c;

		str = ss.str();


		return str;


	}

	int toInt(string text){
		int num;
		stringstream(text) >> num;

		return num;
	}

	string Str(char c[]){

		string str="";

	for (int i=0;i<strlen(c);i++){

		str += c[i];

	}

	return str;

	}

	string revStr(string str){

			string nStr = "";

		for(int i=str.length();i>=0;i--){
			nStr += str[i];
		}

		return char(8)+(nStr);
	}

	string trim(string str){
			bool tst = 0;
			string nStr="";
			string wd;
			for(int i=0;i<str.length();i++){

				wd = str[i];
				if(wd == " "){
					tst = 1;
				}

			if (tst == 0){
					nStr += str[i];
			}


				tst = 0;
			}




			return nStr;

	}


	};







int main(){
DF get;

char k = 91;

string ns = "";

for (int i=65;i<95;i++){
	ns += char(i);
}



cout << ns.substr(0,26) << endl;









system("pause");
return 0;
}



