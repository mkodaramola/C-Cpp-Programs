#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cstring>
#include <string>
#include <strings.h>


using namespace std;

int main(){

string wd1 = "        -20      ";

int n1;

stringstream(wd1) >> n1;

cout << n1*2 << endl;
system("pause");
return 0;

}
