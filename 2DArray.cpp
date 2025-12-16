#include <iostream>
#include <climits> // for INT_MIN
using namespace std;

void PrintSum(int arr[][2], int row, int col) {
    cout << "Printing Sum ->" << endl;
    for (int i = 0; i < row; i++) {
        int sum = 0;
        for (int j = 0; j < col; j++) {
            sum += arr[i][j];
        }
        cout << sum << endl; // sum is inside the loop
    }
}

int largestRowSum(int arr[][2], int row, int col) {
    int maxi = INT_MIN;
    int rowIndex = -1;

    for (int i = 0; i < row; i++) {
        int sum = 0;
        for (int j = 0; j < col; j++) {
            sum += arr[i][j];
        }
        if (sum > maxi) {
            maxi = sum;
            rowIndex = i;
        }
    }
    cout << "Maximum sum is " << maxi << endl;
    return rowIndex;
}

int main() {
    int arr[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> arr[i][j];
        }
    }

    int index = largestRowSum(arr, 2, 2);
    cout << "Maximum sum row index is " << index << endl;

    return 0;
}
