#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <stdio.h>


     using namespace std;

class Servo{
    public:
    int write(int angle){

            return angle;
    }


};



int main(){

Servo RUpper;
Servo RLower;
Servo LUpper;
Servo LLower;


for(;;){

        char x = 0;



    cout << "RUpper -> " << RUpper.write(60) << endl;
cout << "RLower -> " <<  RLower.write(60) << endl; // counter clock-wise to RFupper
Sleep(5500);
cout << "RLower -> " <<  RLower.write(0) << endl;

cout << "LLower -> " <<  LLower.write(60) << endl;
Sleep(8500);
cout << "LUpper -> " <<  LUpper.write(60) << endl;
cout << "RLower -> " <<  RLower.write(120) << endl;
Sleep(8500);
cout << "LUpper -> " <<  LUpper.write(60) << endl;
cout << "LLower -> " <<  LLower.write(60) << endl;
cout << "RUpper -> " <<  RUpper.write(0) << endl;
cout << "LLower -> " <<  LLower.write(0) << endl;
Sleep(8500);
cout << "LUpper -> " <<  LUpper.write(0) << endl;
cout << "RLower -> " <<  RLower.write(0) << endl;
Sleep(9000);

}






return 0;
}
