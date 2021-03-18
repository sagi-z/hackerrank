#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

int bubble_sort(vector<int> &a) {
    int totalSwaps = 0;
    int n = a.size();
    for (int i = 0; i < n; i++) {
        // Track number of elements swapped during a single array traversal
        int numberOfSwaps = 0;

        for (int j = 0; j < n - 1; j++) {
            // Swap adjacent elements if they are in decreasing order
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                numberOfSwaps++;
            }
        }

        // If no elements were swapped during a traversal, array is sorted
        if (numberOfSwaps == 0) {
            break;
        }

        totalSwaps += numberOfSwaps;
    }
    return totalSwaps;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    istream_iterator<int> iter(cin);
    int n = *iter++;

    vector<int> a(n);
    int i = 0;
    for (; i < n-1; ++i) {
        a[i] = *iter++;
    }
    a[i] = *iter;

    cout << "Array is sorted in " << bubble_sort(a) << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[n-1] << endl;

    return 0;
}
