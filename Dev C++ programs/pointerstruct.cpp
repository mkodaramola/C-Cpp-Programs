#include <iostream>
#include <string>
using namespace std;


struct person{
	
	struct sscores{
	
	int math;
	
	int eng;
	
	int total;
		
};

	
	string name;
	int age;
	sscores sc;
	
	
	
};



int main(){

person p[10];

p[0].name = "Daramola Oluafemi";
p[0].age = 24;
p[0].sc.eng = 63;
p[0].sc.math = 87;
p[0].sc.total = p[0].sc.eng + p[0].sc.math;

cout << p[0].name << endl;
cout << p[0].age << endl;
cout << p[0].sc.eng << endl;
cout << p[0].sc.math << endl;
cout << p[0].sc.total << endl;
	
	return 0;
}
