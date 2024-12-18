#include <iostream>
using namespace std;
bool NumValid(int x, int NumB){

 // Split the number and test if any is greater than the Number base
		while(x != 0){


    // If any digit is greater than Number base, return false(0)
		if(x%10 >= NumB) return false;

		x /=10;

		}
// else return true(0)
return true;


}

int Solve(int num, int NumB, int ANumB){

int ans = 0;

//------- Code to Convert will be written here ---------

    return ans;
}






int main(){
int num,NumB,ANumB;

cout << "Enter number to converted: ";
cin >> num;
cout << "Enter base of number to be converted: ";
cin >> NumB;

if(NumValid(num,NumB) == false) {
        cout << "Invalid Number: Number entered isn't in the correct base!\n";

}
else {
        cout << "Enter Base to convert to: ";
        cin >> ANumB;
       // Now call and output the result of 'Solve' Function
       cout << Solve(num,NumB,ANumB) << endl;

}



	return 0;
}
