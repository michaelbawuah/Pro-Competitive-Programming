// V | https://atcoder.jp/contests/abc289/tasks/abc289_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,m;std::cin>>n>>m;std::vector<bool>joined(n+1);while(m--){int a;std::cin>>a;joined[a]=true;}std::vector<int>answer;for(int left=1;left<=n;){int right=left;while(right<n&&joined[right])++right;for(int x=right;x>=left;--x)answer.push_back(x);left=right+1;}for(int i=0;i<n;++i)std::cout<<answer[i]<<(i+1==n?'\n':' ');
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
