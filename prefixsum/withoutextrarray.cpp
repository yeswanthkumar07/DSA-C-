#include <iostream>
using namespace std;
int main() {
    int arr[] = {3,7,2,-5,8};
    int n = 5;
    arr[0] = arr[0];
    for(int i =1; i <n; i++){
        arr[i] = arr[i - 1] + arr[i];
    }
    for (int i =0; i < n ;i++ ){
        cout << arr[i] << endl;
    }
    return 0;
};