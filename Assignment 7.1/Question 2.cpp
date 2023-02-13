#include <bits/stdc++.h>
using namespace std;
#define int long long
 
signed main() {
    int n, k, a;
    cin >> n >> k;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < k; i++) {
        cin >> a;
        cout << lower_bound(A.begin(), A.end(), a) - A.begin() + 1 << endl;
    }
    return 0;
}
