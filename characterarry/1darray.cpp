#include <iostream>
using namespace std;
int main(){
    char name[100];
    cout << "enter our name:" ;
    cin >> name;
        name[5] ='w' ;
        name[6] ='a' ;
        name[7] ='n' ;
        name[8] ='t' ;
        name[9] ='\0';
        cout << name << endl;
}