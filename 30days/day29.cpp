#include <bits/stdc++.h>
#include <iterator>

using namespace std;


int main()
{
    istream_iterator<int> iter(cin);
    int t = *iter;

    list<pair<int, int>> input;
    for (int t_itr = 0; t_itr < t; t_itr++) {
        iter++;
        input.push_back(pair<int, int>(*iter++, *iter));
    }
    for (auto &p: input) {
        int n = p.first;
        int k = p.second;
        int maxFound = 0;
        for (int a=1; a<=n-1; ++a) {
            for (int b=a+1; b<=n; ++b) {
                int anded = a&b;
                if (anded < k) {
                    maxFound = max(maxFound, anded);
                }
            }
        }
        cout << maxFound << endl;
    }

    return 0;
}
