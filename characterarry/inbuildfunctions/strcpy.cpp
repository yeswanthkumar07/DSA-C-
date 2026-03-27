#include <cstring>
#include <iostream>
using namespace std;
int main(){
    char str1[100] = "hello";
    char str2[100] = "world";
    strcpy(str1, str2);
    cout << str1 << endl;
    return 0;
}