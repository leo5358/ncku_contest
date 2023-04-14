#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < q; i++) {
        int l, r, k;
        cin >> l >> r >> k;

        int total_fine = 0;

        for (int j = l - 1; j < r; j++) {
            int fine = abs(k - a[j]) + k + a[j];
            total_fine += fine;
        }

        cout << total_fine << endl;
    }

    return 0;
}
