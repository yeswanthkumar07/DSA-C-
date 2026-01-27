#include <iostream>
using namespace std;

int main(){

    int n;      // input size of array
    cin >> n;

    int arr[n]; // declare array
    for (int i = 0; i < n ; i++){
        cin >> arr[i]; // input elements
    }
    // reverse logic
    int i = 0;
    int j = n-1;
    while (i < j){
        swap(arr[i], arr[j]);
        i++;
        j--;
        
       
    }

    // print array 
    for (int i =0; i < n;i++ ){

        cout << arr[i] << " ";
    }
    
    return 0;

}