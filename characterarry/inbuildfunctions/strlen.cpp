#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char name[100];
    cout << "enter your name :" << endl;
    cin >> name;
    cout << strlen(name) << endl;
    return 0;
}