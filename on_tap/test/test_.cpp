#include <bits/stdc++.h>
using namespace std;

int main()
{
  freopen("inp.txt", "r", stdin);
  freopen("out.txt", "w", stdout);

  //set sẽ loại bỏ các phần tử trùng trong dãy và sắp xếp chúng lại theo chiều tăng dần
  int n;
  cin >> n;
  multiset<int> s;
  for(int i = 0; i < n; i++){
    int x; 
    cin >> x;
    s.insert(x);
  }

  for(int x: s){
    cout << x << " ";
  }
  //Duyệt xuôi
  cout << "\nDuyệt xuôi: ";
  for(auto it = s.begin(); it != s.end(); ++it){
    cout << *it << " ";
  }

  //Duyệt ngược
  cout << "\nDuyệt ngược: ";
  for(auto it = s.rbegin(); it != s.rend(); ++it)
    cout << *it << " ";
  s.erase(59);

  //Tìm kiếm 1 số trong dãy O(log(N))
  if(s.find(9) != s.end())
    cout << "\nFOUND!";
  else
    cout << "\nNOT FOUND!";

  //Đếm số lần xuất hiện của phần tử trong dãy O(log(N))
  if(s.count(5) != 0){
    cout << "\nFOUND!!!";
    s.erase(5); //O(log(N))
  }
  else
    cout << "\nNOT FOUND!!!";
  s.erase(59);

  //xoá dùng iterator
  auto it = s.find(9);
  s.erase(it);

  for(auto x: s)
    cout << x << " ";

  //multiset tương tự set -> sx dãy tăng dần nhưng ko lọc trùng

  //hàm find() -> do có phần tử trùng -> đưa ra iterator của phần tử trùng đầu tiên
  auto itr = s.find(4);
  cout << "\n" << *itr << " ";
  // auto dt = distance(s.begin(), it);
  // cout << dt  << endl;
  
  //hàm erase
  // s.erase(4); //xoá all các phần tử có giá trị 4

  //Nếu muốn xoá 1 phần tử có giá trị 4 trong những phần tử đồng giá trị -> cần tìm iterator của giá trị 4 này trước sau đó mới xoá
  cout << "\nHàm xoá: ";
  auto iter = s.find(4); //-> trả về iterator của phần tử 4 đầu tiên
  s.erase(iter);

  for(auto x: s)
    cout << x << " ";

  //map(key, value) - lưu các cặp {key, value}, key là duy nhất
  cout << "\nMap ---------------------------" << endl;
  map<int, int> mp;
  mp[1] = 10;
  mp[2] = 20;
  mp.insert({10, 100});
  mp.insert({11, 110});

  //show dữ liệu
  //cach1:
  cout << "out1: \n";
  for(pair<int, int> p: mp)
    cout << p.first << ", " << p.second << endl;

  //cach2:
  cout << "out2: \n";
  for(auto x: mp)
    cout << x.first << ", " << x.second << endl;

  //cach3:
  cout << "out3: \n";
  for(map<int, int>::iterator it = mp.begin(); it != mp.end(); it++){
    cout << (*it).first << ", " << (*it).second << endl;
  }
  
}