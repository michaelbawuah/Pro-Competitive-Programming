// Call the ID Number | https://atcoder.jp/contests/abc293/tasks/abc293_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<int>a(n);for(int&x:a){std::cin>>x;--x;}std::vector<bool>called(n);for(int i=0;i<n;++i)if(!called[i])called[a[i]]=true;std::vector<int>answer;for(int i=0;i<n;++i)if(!called[i])answer.push_back(i+1);std::cout<<answer.size()<<'\n';for(std::size_t i=0;i<answer.size();++i)std::cout<<answer[i]<<(i+1==answer.size()?'\n':' ');
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
