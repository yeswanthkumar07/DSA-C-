#include<iostream>
using namespace std;
int main(){
    int arr[] = {8,3,-2,9,10,-1,0,5,3};
    int n = 9;
    int prefix[n]; // creates prefix array of size n
    prefix[0] = arr[0];
    
    for (int i = 1;i < n;i++){
        prefix[i] = prefix[i -1] + arr[i];
    }

      
    }
}