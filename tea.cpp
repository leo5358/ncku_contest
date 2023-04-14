#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<int>()); 

    int ans = 0;
    for(int i = 0; i < min(n, m * k); i++) {
        int j = i / k; 
        ans += a[i] * (j + 1); 
    }

    cout << ans << endl;
    return 0;
}
