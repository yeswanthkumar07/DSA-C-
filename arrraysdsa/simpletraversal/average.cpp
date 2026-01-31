#include <iostream>
using namespace std;
int main(){

    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    int sum = 0;
    for (int i = 0; i < size ; i++){
        sum = sum + arr[i];
        
    }
int average = sum / size ;
   
     cout << average << endl;
}