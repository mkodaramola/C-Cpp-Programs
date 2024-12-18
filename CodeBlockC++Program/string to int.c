#include <stdio.h>
#include <string.h>


int main(){
char wd[500];
scanf("%s",wd);
int n;
istringstream iss(wd);

iss >> n;

if (!iss.good()){
 printf(n*2);


}
else {
    cout << "Invalid input \n";
}


return 0;

}

