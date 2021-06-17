#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sync ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  sync
  int t; cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int array[n];
    int count[100000] = {0};
    for (int i = 0; i < n; i++) {
      cin >> array[i];
      count[array[i]]++;
    }
    int x = 0;
    int sum = 0;
    for (int i = 1; i < 100000; i++) {
      if (count[i] == 1)
        sum++;
      x = max(x, count[i]);
    }
    if (n < 2)
      cout << 0 << "\n";
    else if (x > sum + 1)
      cout << sum + 1 << "\n";
    else
      cout << min(sum, x) << "\n";
  }
}