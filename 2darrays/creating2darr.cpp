#include <iostream>
using namespace std;
int main(){

    int arr[100][100];
    int m,n;
    cin >> m >> n ;
    for (int i = 0; i < m; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> arr[i][j];
        }
    }
    // for rowsise printing
    for (int i = 0; i < m; i++){
        for(int j = 0 ; j < n ; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "coloumn wise printing matrix" << endl;
    // for coloumn wise printing
    for (int i = 0 ; i < n ; i++){
        for (int j = 0; j < m; j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

}
