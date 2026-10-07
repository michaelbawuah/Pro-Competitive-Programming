// Delimiter | https://atcoder.jp/contests/abc344/tasks/abc344_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::vector<int>a;
    int x;
    while(std::cin>>x) {
        a.push_back(x);
        if(x==0)break;
    }
    for(auto it=a.rbegin();it!=a.rend();++it)std::cout<<*it<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
