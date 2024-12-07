#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k, left, right;
  vector<int> a(n);

  for (int &i : a)
    cin >> i;
  left = 0;
  right = n - 1;
  k = 0;

  while (left < right)
  {
    k++;
    while (left <= right && a[left] != k)
      left++;
    while (left <= right && a[right] != k)
      right--;
  }

  int ans = (a[left] == a[right]) ? a[left] : k - 1;
  cout << ans;
}