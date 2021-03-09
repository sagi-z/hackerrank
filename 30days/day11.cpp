#include <bits/stdc++.h>

using namespace std;


int hour_glass_sum(const vector<vector<int>> &arr, int row, int col) {
  int sum = 0;
  sum += arr[row][col];
  sum += arr[row][col+1];
  sum += arr[row][col+2];
  sum += arr[row+1][col+1];
  sum += arr[row+2][col];
  sum += arr[row+2][col+1];
  sum += arr[row+2][col+2];
  return sum;
}


int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int max = -70;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int sum = hour_glass_sum(arr, i, j);
            max = sum > max ? sum : max;
        }
    }

    cout << max << endl;

    return 0;
}
