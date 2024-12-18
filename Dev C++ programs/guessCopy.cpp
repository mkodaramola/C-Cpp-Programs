#include <iostream>
#include <cstdlib>
#include <cmath> 
using namespace std;

int main(){
	
	int guess(0);
	int myguess(0);

	
	guess = rand() %10+1;

cout << "Guess our random number (1-100) \n";
cin >> myguess;

cout << "You guessed " << myguess << ", the answer";
cout << " was " << guess << endl;

if (guess == myguess){
	cout << "You guessed it!" << endl;

}

else{
	cout << "You guessed wrong! " << endl;
}	

	
system("pause");
return EXIT_SUCCESS;	
}
