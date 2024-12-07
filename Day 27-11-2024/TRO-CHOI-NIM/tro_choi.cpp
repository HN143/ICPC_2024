// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//   int n, k;
//   cin >> n;
//   int a[n];
//   vector<pair<int, int>> b(n);
//   cin >> n;
//   for(int i = 0; i < n; i++)
//     cin >> a[i];
//   int s = a[0];
//   for(int i = 1; i < n; i++)
//     s ^= a[i];
//   if(s == 0)
//     cout << 0;
//   else{
//     for(int i = 0; i < n; i++){
//       int x = a[i] ^ s;
//       if(x <= a[i]){
//         k++;
//         b[k] = {i,(x - a[i])};
//         b.push_back({i, x-a[i]});
//       }
//     }
//   }
//   cout << k << endl;
//   for(auto [u,v]:b)
//     cout << u+1 << " " << v << endl;
// }

#include <iostream>
int main() {
    std::cout << __cplusplus << std::endl;
    return 0;
}
