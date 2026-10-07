// Peaks | https://atcoder.jp/contests/abc166/tasks/abc166_c
// Time: O(n+m); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,m;std::cin>>n>>m;std::vector<int>h(n);std::vector<bool>good(n,true);for(int&x:h)std::cin>>x;while(m--){int a,b;std::cin>>a>>b;--a;--b;if(h[a]<=h[b])good[a]=false;if(h[b]<=h[a])good[b]=false;}std::cout<<std::count(good.begin(),good.end(),true)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
