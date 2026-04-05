#include <iostream>
using namespace std;

int main(){
    int marks[6] = {20,30,52,56,89,67};
   int sum = 0; 
    for (int i = 0 ; i < 5;i++){
        sum = sum + marks[i];
    }
    
    
    cout << "sum is " << sum << endl ;
    cout << "done" << endl;
    return 0 ;

}         