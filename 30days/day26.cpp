#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int d1, m1, y1;
    int d2, m2, y2;

    istream_iterator<int> iter(cin);
    d1 = *iter++;
    m1 = *iter++;
    y1 = *iter++;
    d2 = *iter++;
    m2 = *iter++;
    y2 = *iter;

    int factor = 0;
    int baseFine = 0;
    if (y1 > y2) {
        baseFine = 10000;
        factor = 1;
    } else if (y1 == y2) {
        if (m1 > m2) {
            baseFine = 500;
            factor = m1 - m2;
        } else if (m1 == m2) {
            if (d1 > d2) {
                baseFine = 15;
                factor = d1 - d2;
            }
        }
    }

    cout << baseFine * factor << endl;

    return 0;
}

