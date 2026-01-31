#include<iostream>
using namespace std;
int main(){

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n ; i++){
        cin >> arr[i];
    }
    int i = 0;
    int j = n-1;
    bool ispalindrome = true;
    while(i < j){
        if (arr[i] != arr[j]){
            ispalindrome = false;
    
            break;
        }

        i++ ;
        j--;
    }
       

    if (ispalindrome)
        cout << "yes palindrome" << endl;
        
    else 
        cout << "no , not a palindrome" << endl;
    return 0;

}