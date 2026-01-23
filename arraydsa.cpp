#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3} ;
    int n = 3;

    int sum = 0;
    for (int i = 0; i < n; i++){
        sum = sum + arr[i] ;
    }

    cout << "sum = " << sum;
    return 0;


}         