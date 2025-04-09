#include <bits/stdc++.h>
using namespace std;

void build_spiral_matrix(int row, int col) {
    int l = 0, r = col - 1, t = 0, b = row - 1;
    int arr[row][col];
    int count = 1;
    while (l <= r && t <= b) {
        for (int i = r; i >= l; i--) {
            arr[t][i] = count;
            count++;
        }
        t++;
        for (int i = t; i <= b; i++) {
            arr[i][l] = count;
            count++;
        }
        l++;
        if (t <= b) {
            for (int i = l; i <= r; i++) {
                arr[b][i] = count;
                count++;
            }
            b--;
        }
        if (l <= r) {
            for (int i = b; i >= t; i--) {
                arr[i][r] = count;
                count++;
            }
            r--;
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int m, n; cin >> m >> n;
    build_spiral_matrix(m, n);
    return 0;
}