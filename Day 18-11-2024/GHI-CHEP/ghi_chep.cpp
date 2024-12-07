#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;

int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  string s, ans = "";

  cin >> s;

  // Tính địa chỉ đầu của các nút trong cây
  int n = s.size();
  int p = 1;
  while (p < n)
    p <<= 1;

  vector<pii>
    t(4 * n + 10, {123, 1});
  stack<int> st;

  //Tìm và xử lý ký tự min trong xâu
  char ch = *min_element(s.begin(), s.end());
  if(s[n-1]!=ch)
    st.push(n-1);

  //Tìm và xử lý ký tự min
  for(int i = n-1; i >= 0; --i){
    if(s[i] == ch){
      ans += ch;
      s[i] = '{';
      st.push(i);
      if(i > 0)
        st.push(i-1);
    }
    else  
      t[p+i] = {s[i] - 97, -i};
  }

  //Xử lý nút trong ở giai đoạn xây dựng cây
  for (int i = p-1; i > 0; --i)
    t[i] = min(t[2*i], t[2*i+1]);
  
  auto upd_t = [&](int x){
    int v = p + x;
    t[v] = {123, 1};
    while(v > 1){
      v >>=1;
      t[v] = min(t[2*v], t[2*v+1]);
    }
  };

  //Hàm tìm ký tự min trong xâu con kết thúc ở vị trí x
  auto get_min = [&](int x){
    int v = p + x;
    pii r = t[v];
    while (v > 0){
      if (v&(-v) == v)
        break;
      if (v&1)
        r = min(r, t[v-1]);
      v >>= 1;
    }
    return r;
  };

  pii res;
  while(!st.empty()){
    int q = st.top();
    res = get_min(q);
    auto [u,v] = res;
    v = -v;

    if(u > 26){
      st.pop();
      continue;
    }

    s[v] = '{';
    upd_t(v);
    ans+= char(u+97);
    st.push(v);
    if(v > 0)
      st.push(v-1);
  }
  cout <<ans;
}
