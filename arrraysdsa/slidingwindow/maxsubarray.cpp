#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,5,2,0,3,4};
    int n = 6;
    int k = 3;
   int sum = 0;
    for (int i = 0;i < k; i++){
        sum = sum + arr[i];
    }
    int max_sum = sum ;
    for (int i =k; i < n; i++){
        sum = sum + arr[i] - arr[i-k]; // update max sum
        max_sum = max(max_sum, sum);
        
        
    }
    cout << max_sum << endl;
}