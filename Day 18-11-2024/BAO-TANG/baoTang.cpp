#include <bits/stdc++.h>
using namespace std;

int main(){
  int x1, y1, x2, y2, x3, y3, d12, d13, d23;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  d12 = abs(x1 - x2) + abs(y1 - y2);
  d13 = abs(x1 - x3) + abs(y1 - y3);
  d23 = abs(x2 - x3) + abs(y2 - y3);

  cout << (d12+d13+d23)/2;


}