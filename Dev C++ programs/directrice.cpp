#ifdef WINDOWS
#include <direct.h>
#define GetCurrentDir _getcwd
#else
#include <unistd.h>
#define GetCurrentDir getcwd
#endif
#include <sstream>
#include<iostream>
using namespace std;

std::string get_current_dir() {
   char buff[FILENAME_MAX]; //create string buffer to hold path
   GetCurrentDir( buff, FILENAME_MAX );
   string current_working_dir(buff);
   return current_working_dir;
}

main() {
	string add = get_current_dir();
	
	add = add.substr(9,add.length());
	
	int lpos = add.find("\\");
	
	add = add.substr(0,lpos);
	
	stringstream ss;
	string jadd;
   	ss << "C:\\Users\\" << add << "\\Public\\Documents";
   	
   	jadd = ss.str();
 
	
	
   cout << add << endl;
   
   system("pause");
}
