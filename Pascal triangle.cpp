#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    int arr[50][50]; // 2D array (adjust size if needed)

    // Generate Pascal's Triangle
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i)
                arr[i][j] = 1;
            else
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
    }

    // Display Pascal's Triangle
    for (int i = 0; i < n; i++) {
        for (int space = 0; space < n - i; space++)
            cout << " ";

        for (int j = 0; j <= i; j++)
            cout << arr[i][j] << " ";

        cout << endl;
    }

    return 0;
} 
