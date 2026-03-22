#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector<int> v;
    // to add elements from last
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
}