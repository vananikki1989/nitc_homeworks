#include<bits/stdc++.h>
using namespace std;

int n, x[100]; 
int used[100] = {0};

void print() {
    for (int i = 1; i <= n; i++) cout << x[i] << " ";
    cout << endl;
}

void Try(int i) {
    for (int j = 1; j <= n; j++) {
        if (used[j] == 0) {
            if (i == 1 || abs(x[i-1] - j) > 1) {
                x[i] = j;
                used[j] = 1;
                if (i == n) 
                    print();
                else 
                    Try(i + 1);
                used[j] = 0;
            }
        }
    }
}

int main() {
    cin >> n;
    Try(1);  /
    return 0;
}