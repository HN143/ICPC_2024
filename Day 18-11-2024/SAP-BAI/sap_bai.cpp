#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for (int &i : a)
  {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  int p = a[0] & 1;
  int ans = 1;
  for (int i = 1; i < n; i++)
  {
    if(a[i] & 1 != p){
      ans++;
      p^=1;
    }
     
  }
  cout << ans;

}