#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include <cstring>
	class data{
	

		public:

	
				int ct;
			data(){
				
				ct++;
			}
		
		
	};



	
using namespace std;

	int main(){


	char rstr[128] = "ctt.txt";

	char ch;	
	static int n;
	int i=0;	
	ifstream ifile(rstr);
		if (ifile.fail()){
			exit(EXIT_FAILURE);
		}
	
	while(!ifile.eof()){
		ifile.get(ch);
		n = ch;

	}	
	

	
		
n = (n-48);	
		
	ofstream ofile("ctt.txt");
	
	ofile <<n+1;
	
	ofile.close();

		

	if (n < 3){
		cout << "Note: User can only install this application 3 time.\n" << "\t\tTrial " << n+1 << " of 3" << "\n\n\n\n\n\n\n\n\n\n\n\t\tApplication intallation in Progress... \n\n\n\n\n\n\n\n\n\n\n\n";
	}
	
	else {
		
		cout << "\n\n\n\n\n\n\n\n\n\n\n\t\tLicence Expired!!!\n\n\n\n\n\n\n\n\n\n\n\n\n";
		
	}
		
		system("pause");
		return 0;
	}
