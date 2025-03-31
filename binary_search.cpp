#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int l, int r, int n) {
    if (r >= 1) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == n) return mid;

        if (arr[mid] > n) 
            return binary_search(arr, l, mid - 1, n);
        return binary_search(arr, mid + 1, r, n);
    }
    return -1;
}

int main() {
    int len; cin >> len;
    int arr[len];
    for (int i = 0; i < len; i++) cin >> arr[i];
    int n; cin >> n;
    
    int result = binary_search(arr, 0, len - 1, n);
    if (result == -1) cout << "false"; 
    else cout << "true";
    
    return 0;
}