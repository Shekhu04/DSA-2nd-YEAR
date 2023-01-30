#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void move(int d, string f, string t) {
    cout << "Moving ring " << d << " from " << f << " to " << t << endl;
}

void hanoi(int n, string a, string b, string c) {
    // Move n disks from a to c via b

    if(n > 0) {
        hanoi(n - 1, a, c, b);
        move(n, a, c);
        hanoi(n - 1, b, a, c);
    }
}

int main() {
    int n = 0;
    
    cin >> n;
    
    hanoi(n, "A", "C", "B");
    
    return 0;
}
