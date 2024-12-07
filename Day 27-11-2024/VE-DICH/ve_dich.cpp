#include <bits/stdc++.h>
using namespace std;

int main()
{
  freopen("ve_dich.txt", "r", stdin);
  freopen("out_ve_dich.txt", "w", stdout);
  int a, b, m, t;
  string s = "";
  cin >> t;
  for (int i = 1; i <= t; i++)
  {
    cin >> a >> b >> m;
    if ((b-a) % (m + 1) == 0){
      s+="B";
    }
    else 
      s+="R";
  }
  cout << s;
}