#include <bits/stdc++.h>
using namespace std;

int main(){
  freopen("ip.txt", "w", stdin);
  freopen("out.txt", "w", stdout);
  vector<int> vt(4);
  for(int &i: vt)
    cin >> i;
  sort(vt.begin(), vt.end());
  cout << vt[0]*vt[2];
  
}