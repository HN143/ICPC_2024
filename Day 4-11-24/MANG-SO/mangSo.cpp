#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, lf, rt, t, k = 0, str, m, p, q = 2;
  cin >> n >> lf >> rt;
  vector<int> a(n, 0);

  int i = 1;
  // if (lf %2 == 0)
  //   a[0] = lf;
  // else
  //   a[0] = lf + 1;
  str = lf | 1;
  a[0] = str;
  a[1] = str + 2;
  t = a[1];
  k = 2;
  for (int i = 2; i < n; i++)
  {
    if ((i + 1) % 3 == 0)
    {
      a[i] = a[i - 1] + 1;
      if (a[i] % 3 == 0 && a[i - 2] % 3 == 0)
      {
        a[i] -= 2;
        if (a[i] % 5 == 0)
          a[i] += 4;
      }
    }
    else
    {
      t += 2;
      a[i] = t;
    }
  }

  m = k - 3;
  for (int i = k; i < n; i++)
  {
    t = (i - k) % 3;
    a[i] = a[m + t];
  }
  for (int &j : a)
  {
    cout << j << " ";
  }
}