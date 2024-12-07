#include <bits/stdc++.h>
using namespace std;

int n, q;
typedef pair<int, int> pii;
set<pii> s;

void CheckCay()
{
  int check = 0;
  set<int> tempset;
  for (const pii &a : s)
  {
    tempset.insert(a.second);
  }
  for (const pii &a : s)
  {
    if (tempset.insert(a.first).second == true)
    {
      check++;
    }
  }
  if (check == 1)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}

int main()
{
  // FILE *f;
  //  freopen_s(&f, "Text.txt", "r", stdin);
  cin >> n;
  int temp1, temp2;
  for (int i = 0; i < n - 1; i++)
  {
    cin >> temp1 >> temp2;
    s.insert({temp1, temp2});
  }
  cin >> q;
  CheckCay();
  for (int i = 0; i < q; i++)
  {
    cin >> temp1 >> temp2;
    if (s.insert({temp1, temp2}).second == false)
    {
      s.insert({temp2, temp1});
      s.erase({temp1, temp2});
      CheckCay();
    }
    else
    {
      if (s.find({temp2, temp1}) != s.end())
      {
        s.erase({temp2, temp1});
      }
      CheckCay();
    }
  }

  return 0;
}