#include <iostream>
#include <string>

using namespace std;

string srev(string wd);
int nrev(int n);


int main(){

    string wd;

 cout << "Enter word to reverse: ";
 cin >> wd;



string arr;
  int len = wd.length();

  for (int i=len;i>=0;i--){

   cout << wd[i];

  }


return 0;
}

int nrev(int n){
    int rem;
    int rev = 0;


    while (n!=0){

        rem = n%10;

        rev = rev * 10 + rem;

        n/=10;

    }

return rev;
}


    string srev (string wd){


string arr;
  int len = wd.length();

  for (int i=len;i>0;i--){

    arr[i] = wd[i];

  }


    return arr;
    }





















