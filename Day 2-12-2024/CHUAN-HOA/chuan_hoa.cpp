#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
#define ff first
#define ss second

int main()
{
  freopen("inp.txt", "r", stdin);
  freopen("out.txt", "w", stdout);

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;
  vector<int> a(n), r(n);
  for (int &i : a)
    cin >> i;
  
  auto norm=[&](){
    vector<pii> b(n);
    for(int i = 0; i < n; i++){
      b[i] = {a[i], i};
      r[i] = a[i];
    }
    sort(begin(r), end(r));
    sort(begin(b), end(b));
    auto t = unique(begin(r), end(r));
    int q;
    r.resize(t-r.begin());
    q = r.size();
    int p = 0;
    for (int i  = 0; i < q, p < n; i++){
      while(b[p].first == r[i])
        b[p++].first = i+1;
    }
    for(int i = 0; i < n; i++){
      a[b[i].second] = b[i].first;
    }
  };
  norm();
  for(int i:a)
    cout <<i << " ";
    cout << "\n";
}