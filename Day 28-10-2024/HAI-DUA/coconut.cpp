#include <bits/stdc++.h>
using namespace std;

int main()
{
  freopen("input_coconut.txt", "r", stdin);
  freopen("output_coconut.txt", "w", stdout);
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int &i : a)
    cin >> i;
  int l = a[0], r = a[0];
  cout << "1 ";
  for (int i = 1; i < n; ++i)
  {
    if (l - k <= a[i] && a[i] <= r + k)
    {
      cout << "1 ";
      l = min(l, a[i]);
      r = max(l, a[i]);
    }
    else
      cout << "0 ";
  }
}