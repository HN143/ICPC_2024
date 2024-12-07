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
  cout << (max - min -1) << endl;
}