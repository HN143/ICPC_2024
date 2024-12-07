#include <bits/stdc++.h>
using namespace std;

int main()
{
  freopen("intput_task.txt", "r", stdin);
  freopen("output_task.txt", "w", stdout);
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, k, p, q, u, v, x, x1, x2, u1, v1, u2, v2;

  cin >> n >> k >> p >> q;
  x = (p - 1) * 2 + q;
  x1 = x - k;
  x2 = x1 + k;

  u1 = 0;
  if (x1 > 0)
  {
    u1 = (x1 + 1) / 2;
    v1 = x1 - (u1 - 1) * 2;
  }

  u2 = 0;
  if (x2 <= n)
  {
    u2 = (x2 + 1) / 2;
    v2 = x2 - (u2 - 1) * 2;
  }

  u = -n;
  if (u1 > 0)
  {
    u = u1;
    v = v1;
  }
  if (u2 > 0 && u2 - p < p - u)
  {
    u = u2;
    v = v2;
  }
  if (u > 0)
    cout << u << " " << v;
  else
    cout << -1;
}
