#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
#define nl '\n'
	using namespace std;
	
string lower(string wd);
	
	
int main(){
string sen;	
cout << "Enter string to be converted: ";
getline(cin,sen);

sen = lower(sen);

cout << lower(sen) << endl;	
	
system("pause");	
return 0;	
}

string lower(string wd){
		for (int p=0;p=wd.length();p++){
		wd[p]=tolower(wd[p]);
	}
	return wd;
}


