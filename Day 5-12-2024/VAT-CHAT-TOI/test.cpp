#include <bits/stdc++.h>
using namespace std;
typedef __int128_t i128t;

int main()
{
  freopen("inp.txt", "r", stdin);
  freopen("out.txt", "w", stdout);

  string s;
  int n;
  cin >> s;
  n = stol(s);
  vector<i128t> vt(n);
  i128t ans = 0;

  // string to number
  auto get_n = [&](string s)
  {
    int flg = 1;
    i128t t = 0;
    if (s[0] == '-')
    {
      flg = -1;
      s.erase(0, 1);
    }
    for (int i = 0; i < s.size(); i++)
    {
      t = t * 10 + s[i] - 48;
    }
    return t * flg;
  };

  auto num2st = [&](i128t num)
  {
    string s = "";
    int flag = 0;
    if (num < 0)
    {
      flag = 1;
      num = -num;
    }
    while (num > 0)
    {
      s = char(num % 10 + 48) + s;
      num /= 10;
    }

    if (flag)
    {
      s = '-' + s;
    }
    return s;
  };

  for (int i = 0; i < n; i++)
  {
    cin >> s;
    vt[i] = get_n(s);
    ans += vt[i];
  }

  ans /= 4;
  cout << num2st(ans);
}
