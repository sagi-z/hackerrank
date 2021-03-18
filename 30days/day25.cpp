#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void checkPrime(int n) {
    if (n == 1) {
        cout << "Not prime" << endl;
    } else if (n == 2) {
        cout << "Prime" << endl;
    } else {
        double maxAttempt = sqrt(n);
        for (int i=2; i<=maxAttempt; ++i) {
            if (n%i == 0) {
                cout << "Not prime" << endl;
                return;
            }
        }
        cout << "Prime" << endl;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T, n;
    cin >> T;

    vector<int> arr(T);
    for (int i=0; i<T; ++i) {
        cin >> n;
        arr[i] = n;
    }
    for (int n : arr) {
        checkPrime(n);
    }
    return 0;
}

