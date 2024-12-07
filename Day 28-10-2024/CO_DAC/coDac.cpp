#include <bits/stdc++.h>
using namespace std;

int main()
{
  freopen("input_coDac.txt", "r", stdin);
  freopen("output_coDac.txt", "w", stdout);
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  string s;
  cin >> s;
  int ans = 0, n = s.size() - 1;

  for (int i = 0; i < n + 1; i++)
  {
    if (i & ~n)
      continue;
    ans ^= s[i] - '0';
  }
  cout << ans << '\n';
}