#include <iostream>
#include <cmath>
#include <string>

	struct object {
		char genderU[50];
		char genderL[50];
		char genderUl[50];
		char complexion [50] ;
		char nationality [50] ;
		int age;
			};



using namespace std;
int main ()
{

object femi{
	"MALE",
	"male",
	"Male",
	"light",
	"Nigeria",
	20
};	

string gen;
cout << "gender:";
getline(cin,gen);

if (gen == "MALE"|| gen == "male" || gen == "Male" ){
	cout << "You re right \n";
}
else cout << "No \n";

 
system ("pause");
return 0;
}


