#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

	// Add your code here
    Difference(const vector<int> &inVec)
        : elements(inVec)
    {}

    void computeDifference() {
        maximumDifference = 0;
        int diff = 0;
        auto endOuter = elements.end();
        --endOuter;
        for (auto i1 = elements.begin(); i1 != endOuter; ++i1) {
            auto i2 = i1;
            ++i2;
            for (; i2 != elements.end(); ++i2) {
                diff = abs(*i2 - *i1);
                maximumDifference = max(maximumDifference, diff);
            }
        }
    }

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
