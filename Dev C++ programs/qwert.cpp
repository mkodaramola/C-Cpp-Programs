#include <iostream>
#include <string>
#include <fstream>

	using namespace std;
int main(){
	char con[99999];
	ifstream rf("AdbWinApi.dll");
	
	while(!rf.eof()){
		
		rf.getline(con,99999);	
		cout << con << endl;
	}

system("pause");
return 0;	
}


