#include<iostream>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;
int fact(int arr[],int a);
void msg();
int main ()
{
loop:
string word;
cout <<"What the name?"<< endl;
cin >> word;
	
	if (word == "femi"){
		cout << "Youre right!"<< endl;
	}
else	
cout << "qwerty \n";

goto loop;
return 0;
system ("pause");	
}

int fact(int arr[],int a){
	
	for (int i=(a-1);i>0;i--){
		
	a*=(i);
					
	}
return a;	
}


void msg(){
string word;
string word1;
cout << "What are your names? \n";
getline (cin, word);
cout << "Welcome to you " << word << ". How are you doing?" << endl;
getline(cin, word1);
cout << "Your name '" << word << "' is cool. \n";	

	loop:
	int x;
	int y=1;
	int arr[]={};
	cout << "Enter number:";
	cin >> x;
int z = fact(arr,x);

if(z >0){
	cout << z << endl;
}
else if (z == 0)
cout <<y<< endl;
else
cout << "Math Error!!! \n";
goto loop;
	


}
