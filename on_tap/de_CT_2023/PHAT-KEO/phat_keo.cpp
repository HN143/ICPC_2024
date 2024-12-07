#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,q;
  cin >> n >> q;
  vector<int> arr(n);
  vector<vector<int>> option; //lưu các thao tác gồm loại 1 + loại 2
  for (int &x: arr){
    cin >> x;
  }
  for (int i = 0; i < q; i++){
    cin >> option[i][0];
    if(option[i][0] == 1){
      for (int t = 1; t <=2; t++){
        cin >> option[i][t];
      }
    }
  }

  for (int i = 0; i < option.size(); i++){
    cout << option[i];
  }

}