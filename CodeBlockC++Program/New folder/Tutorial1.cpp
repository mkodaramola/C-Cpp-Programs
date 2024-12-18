#include <iostream>


    using namespace std;

    struct fruit{

    string type="Mango";
    int num=5;


    }flag;


int main(){

cout << flag.type << endl;
cout << flag.num << endl;
int x = 0;
while (flag.num){
    cout << "Running\n\n";
    x++;
}

return 0;
}
