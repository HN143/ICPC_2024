#include <bits/stdc++.h>
using namespace std;

int main()
{
  freopen("kham.inp", "r", stdin);
  freopen("kham.out", "w", stdout);
  int n, m, s;
  cin >> n >> m >> s;
  if (s == n * m)
    cout << 0 << endl;
  else if (s % n == 0 || s % m == 0)
    cout << 1 << endl;
  else {
    for (int a = 1; a < n; a++){
      if (((s - (n - a)*m)/(2*a - n)) %2 == 0){
        cout << 2 << endl;
        return 0;
      }
       
    }
    cout << 3 << endl;
  }
  
    
}