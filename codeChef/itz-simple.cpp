//https://www.codechef.com/START164D/problems/SPC2025Q2
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, k, p;
        cin >> n >> k >> p;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int tallest = arr[n - 1];
        int sum = 0;
        for (int i = 0; i < n - 1; i++) {
            sum += arr[i];
        }

        if ((k + tallest) > (p + sum)) {
            cout << "Ved" << endl;
        } else if ((k + tallest) == (p + sum)) {
            cout << "Equal" << endl;
        } else {
            cout << "Varun" << endl;
        }
    }

    return 0;
}