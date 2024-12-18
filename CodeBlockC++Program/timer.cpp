#include <iostream>
#include <time.h>
#include <windows.h>
#include <cstdlib>
using namespace std;

   int timer(){
   int x = 0;
    while (x < 6){
        Sleep(1000);
        x++;
        if (x == 5)
        {
            return 1;
        }
    }

   }
int main(){

        time_t start, end;
        time(&start);

        string a = ctime(&start);

        time(&end);

        cout << a << endl;

return 0;
}
