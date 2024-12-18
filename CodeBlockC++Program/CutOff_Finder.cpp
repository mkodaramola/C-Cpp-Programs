#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>
    using namespace std;


    getNum(int arr[], int n){

        for (int i=0;i<n;i++){
            cout << "Enter num " << (i+1) << endl;
            cin >> arr[i];
        }

    }

    int getMax(int arr[], int limit){
    int maxm;
maxm = arr[0];
                for (int i=0;i<limit;i++){



               if (maxm < arr[i]){

                maxm = arr[i];

               }


        }



    return maxm;
    }

  void sortAsc(int arr[], int n){
  int temp;
       for (int i=0;i<n;i++){


       for (int j=0;j<n-1;j++){

           if(arr[j] < arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];

            arr[j+1] = temp;
           }

        }


        }

        for (int h=0;h<n;h++) cout << arr[h] << " ";
  }

  int getCutoff(int arr[], int numS ,int lim ){
    int k = arr[numS-1];
    bool ct = false;
        for (int i=numS;i<lim;i++){

            if (arr[i] == k){
                ct = true;
            }

        }

    if (ct == true){

        return arr[numS-2];

    }

    else {
        return k;
    }


  }



//2 3 1 1 4


        int main(){
            int arr[]={};
             int num;
cout << "Enter numbers of Elements: "; cin >> num;

        getNum(arr, num);

        sortAsc(arr,num);

        cout << "\n\n";
        int n;

        cout << "Enter numbers of Student wanted: "; cin >> n;
        cout << "\n\n\n\n";
       // getCutoff(arr,n,num);
      cout << "To Admit " << n << " number of students, Cut off mark: " << getCutoff(arr,n,num) << endl;
          cout << "\n\n\n\n";
    Sleep(1);
 exit(EXIT_SUCCESS);
return 0;
        }

