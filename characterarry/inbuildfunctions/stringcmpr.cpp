#include <cstring>
#include<iostream>
using namespace std;
int main(){
    char str1[100];
    char str2[100];
    cout << "enter strings :" << endl;
    cin >> str1 >> str2;
    if(strcmp(str1,str2)==0){
        cout << "strings are equal" << endl;
    }

    else {
        cout << "not equal" << endl;
    }
    return 0;

}