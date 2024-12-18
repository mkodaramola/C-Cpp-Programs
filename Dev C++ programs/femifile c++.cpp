#include <iostream>
#include <cmath>
#include <cstdlib>

int main ()
{
	using namespace std;
	for (;;){
double guess;
int Myguess;
srand ( (NULL));
guess = rand()<38;
cout << "Guess the number this program has in mind (1-100)" << endl;
cin >>Myguess;
if (guess == Myguess)
{
	cout << "Wow!!! You are absolutely correct." << endl;
}
else 
{
cout << "You're wrong! better luck next time.\n";
cout << "The computer had " << guess << " in mind" << endl; 

}
}
system ("pause");	
return EXIT_SUCCESS;	
}
