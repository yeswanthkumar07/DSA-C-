#include<iostream>
using namespace  std;
    void printprefix(char str[]){
        for (int i = 0; str[i] != '\0'; i++){
            for (int j = 0; j <= i; j++){
                cout << str[j];
            }
            cout << endl;
        }
    }
int main(){
    char str[] = "yashwanth kumar rambhaaaa";
    printprefix(str);
    return 0;
}