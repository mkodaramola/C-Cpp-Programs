#include <iostream>
#include <string>
#include <windows.h>
	using namespace std;
	
int main(){

		string name;
		int age;
		string gender;
		
cout << "\n\n\n\t\t\tWhat is your name: ";
getline(cin,name);


system("cls");

cout << "\n\n\n\t\t\tWhat your Gender: ";
 getline(cin,gender);


system("cls");

cout << "\n\n\n\t\t\tWhat your age: ";
cin >> age;


system("cls");


cout << "\n\n\n\t\t\t" << name << "\n\n\n\t\t\tYour Age is: " << age << "\n\n\n\t\t\tYour Gender is: " << gender << endl;



		
	
	
	
	return 0;
	system("pause");
}	
