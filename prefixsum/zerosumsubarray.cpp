#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 2, -3, 1, 6};
    int n = 5;

    int prefix[100];   // store prefix sums
    int size = 0;      // how many prefix sums stored

    int prefix_sum = 0;
    bool exists = false;

    for (int i = 0; i < n; i++) {
        prefix_sum += arr[i];

        // case 1: prefix itself is zero
        if (prefix_sum == 0) {
            exists = true;
            break;
        }

        // case 2: prefix sum seen before
        for (int j = 0; j < size; j++) {
            if (prefix[j] == prefix_sum) {
                exists = true;
                break;
            }
        }

        if (exists)
            break;

        // store current prefix sum
        prefix[size] = prefix_sum;
        size++;
    }

    if (exists)
        cout << "zero sum exists" << endl;
    else
        cout << "zero sum not exists" << endl;

    return 0;
}
