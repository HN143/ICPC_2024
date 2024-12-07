#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x1, y1, x2, y2, x3, y3;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  int d12, d13, d23;
  d12 = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
  d13 = (x1-x3)*(x1-x3) + (y1-y3)*(y1-y3);
  d23 = (x3-x2)*(x3-x2) + (y3-y2)*(y3-y2);

  int dmax = max(d12, max(d13,d23));
  // int64 dmax = max({d12, d13, d23});
  if (dmax == d12){
    cout << x1 << y1 << x2 << y2;
  }
  else if(dmax == d13){
    cout << x1 << y1 << x3 << y3;
  }
  else
    cout << x2 << y2 << x3 << y3;
   
}
