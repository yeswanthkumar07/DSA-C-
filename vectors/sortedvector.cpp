#include "iostream";
#include <functional>
#include <algorithm>
#include "vector";
using namespace std;;
int main(){
    vector <int> v = {10,30,50,60,80,9,54,63};
    // ascending order
    sort(v.begin(), v.end());
    for (int i = 0; i  < v.size();i++){
        cout << v[i] << endl;
    }
      /* dscending order
    sort(v.begin(), v.end(), greater<int>());
    for (int i = 0; i  < v.size();i++){
        cout << v[i] << endl;
    } */
}