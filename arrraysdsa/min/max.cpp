#include <iostream>
using namespace std;



int main(){
int arr[] = {10, 6, 3, 5,100};
int size = 5 ;
int minimum = arr[0];
int maximum = arr[0] ;
    for (int i= 0; i < size; i++){

        if (minimum > arr[i]){
            minimum = arr[i];
        }
        
        if (maximum < arr[i]){
             maximum = arr[i];
        }
       
    }
    cout << minimum << endl;
    cout << maximum << endl;

}