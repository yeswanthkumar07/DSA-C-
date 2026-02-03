#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,1,2,3,4};
    int n = 7;

    int i = 0, j = 0;
    int max_len = 0;

    while (j < n) {

        bool duplicate = false;

        // check duplicate in current window
        for (int k = i; k < j; k++) {
            if (arr[k] == arr[j]) {
                duplicate = true;
                break;
            }
        }

        if (!duplicate) {
            int windowSize = j - i + 1;
            if (windowSize > max_len)
                max_len = windowSize;
            j++;   // expand window
        } else {
            i++;   // shrink window
        }
    }

    cout << max_len << endl;
    return 0;
}