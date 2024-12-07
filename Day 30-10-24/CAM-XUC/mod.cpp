#include <bits/stdc++.h>
using namespace std;

int main()
{
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  int64_t n;
  cin >> n;

  vector<int64_t> ans;
  int64_t p = n, q = 2 * n;
  while (q > 0)
  {
    if (q & 1)
    {
      ans.push_back(p);
      q--;
    }
    else
      q >>= 1;
    --p;
  }
  q = ans.size();
  cout << q << '\n';
  for (int i = q - 1; i >= 0; --i)
    cout << ans[i] << ' ';
}