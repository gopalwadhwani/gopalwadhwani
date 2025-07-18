#include <iostream>
using namespace std;

int missingNumber(int arr[], int n) {
    int xorArr = 0;
    int xorTotal = 0;

    for (int i = 0; i < n; i++) {
        xorArr ^= arr[i];
    }
    for (int i = 0; i <= n; i++) { 
        xorTotal ^= i;
    }

    return xorArr ^ xorTotal;
}

int main() {
    int arr[] = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int missing = missingNumber(arr, n);
    cout << "Missing number is: " << missing << endl;

    return 0;
}
