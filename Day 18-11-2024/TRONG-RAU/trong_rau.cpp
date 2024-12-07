#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (int &i : a)
  {
    cin >> a[i];
  }

  sort(a.rbegin(), a.rend());
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    ans = max(ans, a[i] + i);
  }
}