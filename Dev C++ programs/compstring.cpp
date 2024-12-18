#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
void file();
using namespace std;

int main (){
file();	
cout << "Are you a man or woman \n";
string mystring;
getline(cin, mystring);
if (mystring == "man"){
	cout << "You can do the Job" << endl;
}
else if (mystring == "woman")
{
	cout << "You cannot do the Job" << endl;
	}
else
	cout << "Invalid input!!! \n";	
		
system ("pause");	
return 0;	
}

void file(){
	
string ans;
cout << "How do you know you've believed by feelings or by Faith? \n";
cin >> ans;

if (!ans.compare("feelings") || !ans.compare("FEELINGS")){
	cout << "You are wrong!" << endl;
}
	
if(!ans.compare("faith")){
	cout << "You are right! \n";
}

}
