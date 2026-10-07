// Append | https://atcoder.jp/contests/abc340/tasks/abc340_b
// Time: O(Q); extra space: O(Q).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int q;
    std::cin>>q;
    std::vector<int>a;
    while(q--) {
        int type,x;
        std::cin>>type>>x;
        if(type==1)a.push_back(x);
        else std::cout<<a[a.size()-x]<<'\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
