#include <bits/stdc++.h>
using namespace std;

int* printDivisors(int n, int &size) {
    // Use a vector to store divisors temporarily
    vector<int> divisor;

    // Find divisors
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisor.push_back(i);
            if (n / i != i) { // Avoid adding square root twice
                divisor.push_back(n / i);
            }
        }
    }

    // Sort divisors in ascending order
    sort(divisor.begin(), divisor.end());

    // Update size and dynamically allocate memory for the array
    size = divisor.size();
    int* arr = new int[size];

    // Copy divisors from vector to the array
    copy(divisor.begin(), divisor.end(), arr);

    return arr;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int size = 0;
    int* ans = printDivisors(n, size);

    cout << "The divisors are: ";
    for (int i = 0; i < size; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    // Free dynamically allocated memory
    delete[] ans;

    return 0;
}
