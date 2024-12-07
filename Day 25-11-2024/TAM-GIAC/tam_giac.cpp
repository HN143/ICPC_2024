#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; 
  cin >> n;
  int64_t a[n];
  for (int i = 0; i < n; i++){
    cin >> a[i];
  }
  sort(a, a+n);

  int max = a[1] + a[0];
  int min = a[n-1] - a[0];
  int ans = max - min - 1;
  if (ans <= 0){
    cout << 0;
  }
  else{
    cout << ans;
  }
}