#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

void getT(char Filename[50]){
	
	ofstream getw;
	
	getw.open(Filename);
	string content;
	getw >> content;
	
	cout << content << " ";
	
	
}


	int main(){
		cout << "Enter Filename to be Opened: ";
		cin.getline(Filename);
		
		getT(Filename);
		system ("pause");
		return 0;
	}
