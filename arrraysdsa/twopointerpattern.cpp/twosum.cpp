#include <iostream>
using namespace std;

int main(){

    int arr[] = {0,1, 2, 3, 4, 6, 8,10};
    int n  = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    int i = 0;
    int j= n-1;
    while (i < j){
        int sum = arr[i] + arr[j];
    
    if (sum == target){
 
        cout << "FOUND" << " " <<  arr[i] << "+" << arr[j]<< " = " << target << endl;
        return 0;
    }

    else if (sum < target){
           i++ ;
    }
    else {
        j-- ;
    }
    }
    cout << "not found" << endl ;
    return 0;
}