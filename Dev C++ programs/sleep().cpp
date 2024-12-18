#include <iostream>
#include <windows.h>

using namespace std;

int main(){
int val =0;
do {
	
      Sleep(1000);
      cout << val << endl; 
     val ++; // increment counter
} while ( val < 10);


system ("pause");	
return 0;	
}
