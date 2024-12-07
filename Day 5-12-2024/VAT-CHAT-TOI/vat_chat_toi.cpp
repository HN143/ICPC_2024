#include <bits/stdc++.h>
using namespace std;
typedef __uint128_t u128;
typedef __int128_t t128;

int main()
{
  freopen("inp.txt", "r", stdin);
  freopen("out.txt", "w", stdout);

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  string s;
  int n;
  cin >> s;
  n = stol(s);
  vector<t128> d(n);
  t128 ans = 0;

  // string to number
  auto get_n = [&](string s)
  {
    int flg = 1;
    t128 t = 0;
    if (s[0] == '-')
    {
      flg = -1;
      s.erase(0, 1);
    }
    for (int i = 0; i < s.size(); ++i)
    {
      t = t * 10 + s[i] - 48;
    }
    return t * flg;
  };

  //number to string
  auto prt = [&](t128 x)
  {
    string v = "";
    int flg = 0;
    if (x < 0)
    {
      flg = 1;
      x = -x;
    }
    while (x > 0)
    {
      v = char(x % 10 + 48) + v;
      x /= 10;
    }
    if (flg)
      v = '-' + v;
    return v;
  };

  // input data
  for (int i = 0; i < n; i++)
  {
    cin >> s;
    d[i] = get_n(s);
    ans += d[i];
  }

  ans /= 4;
  cout << prt(ans);
}