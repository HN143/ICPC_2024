#include <bits/stdc++.h>
using namespace std;

int main()
{
  int64_t n, t, res = 1'000'000'000'000'000'000;
  cin >> n;
  vector<int64_t> arr(n + 1), p(n + 2, 0), s(n + 2, 0);
  for (int i = 1; i <= n; i++)
  {
    cin >> arr[i];
  }

  for (int i = 1; i <= n; i++)
  {
    p[i] = p[i - 1] + arr[i];
  }

  for (int i = 1; i <= n; i++)
  {
    p[i] += p[i - 1];
  }

  for (int i = n; i > 0; i--)
  {
    s[i] = s[i + 1] + arr[i];
  }

  for (int i = n; i > 0; i--)
  {
    s[i] += s[i + 1];
  }

  for (int i = 1; i <= n; i++)
  {
    t = p[i - 1] + s[i + 1];
    if (t < res)
      res = t;
  }

  cout << res;
}