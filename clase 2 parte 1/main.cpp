#include <iostream>

using namespace std;
int factorial(int n) {
   if(n <= 0) return 0;
   else if(n > 1) return n*factorial(n-1);
   return 1;
}


int main(void) {
    int arr[]={0,1,2,6,24,120,720,5040,40320,362880,3628800,39916800, 479001600,6227020800, 87178291200,1307674368000};
    for (int i=12; i<20;i++){
        if (factorial(i)== arr[i]){
            cout<<"Factorial de "<< i << "es:" << factorial(i)<< endl;
            }
        else{
            cout << "error";
            break;
        }

        cout << factorial(i)<<endl;
        cout << arr<<endl;
    }


    return 0;
}



