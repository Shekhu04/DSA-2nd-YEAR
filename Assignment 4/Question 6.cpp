#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int k;
    cin >> k;

    int i = 0, j = 0;
    for (; i < (int)s.size() && j < (int)t.size(); ++i,++j) {
        if (s[i] != t[j])
            break;
    }

    int p = ((int)s.size() - i) + ((int)t.size() - j);
    if ((p <= k && (k-p) % 2 == 0) || k >= (int)s.size() + (int)t.size()) {
        cout << "Yes";
    } else {
        cout << "No";}
        return 0;

    }
