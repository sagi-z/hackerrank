#include <bits/stdc++.h>

using namespace std;

int main() {
  unsigned int n;
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  int maxOnes = 0;
  int cnt = 0;
  for (int i = 0; i < sizeof(int) * 8; ++i) {
    if (n & 1) {
      cnt++;
    } else if (cnt) {
      maxOnes = max(maxOnes, cnt);
      cnt = 0;
    }
    n = n >> 1;
  }

  cout << maxOnes << endl;

  return 0;
}
