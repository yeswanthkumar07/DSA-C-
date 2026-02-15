#include <iostream>
using namespace std;
int main(){

    int arr[] = {3,7,2,5,8};
    int n = 5;
    int prefix[n];
    prefix[0] = arr[0];
    for (int i =1 ; i < n ; i++){
        
        prefix[i] = prefix[i - 1] + arr[i];

    }
    for (int i = 0 ; i <n ; i++){
        cout << prefix[i] << endl;
    }
    return 0;
}