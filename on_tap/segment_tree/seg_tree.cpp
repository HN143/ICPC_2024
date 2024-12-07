#include <bits/stdc++.h>
using namespace std;

int p;
int t[];

int sum(int k)
{
  int u, f;
  if (k == 0)
    return 0;
  u = p + k - 1;
  f = t[u];
  while (u > 0)
  {
    if (u & 1)
      f += t[u - 1];
  }
}

int main()
{
  int n;
  cin >> n;
  int t[n];

  for (int &i : t)
    cin >> i;

  // Build tree
  p = 1;
  while (p < n)
    p *= 2;

  for (int i = 0; i < n; i++)
  {
    cin >> t[p + i];
  }

  for (int i = p - 1; i > 0; --i)
  {
    t[i] = t[2 * i] + t[2 * i + 1];
  }
}