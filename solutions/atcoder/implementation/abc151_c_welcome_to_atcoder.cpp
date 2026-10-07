// Welcome to AtCoder | https://atcoder.jp/contests/abc151/tasks/abc151_c
// Time: O(n+m); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,m;
    std::cin>>n>>m;
    std::vector<bool>solved(n);
    std::vector<int>wrong(n);
    int accepted=0,penalty=0;
    while(m--) {
        int id;
        std::string verdict;
        std::cin>>id>>verdict;
        --id;
        if(solved[id])continue;
        if(verdict=="AC") {
            solved[id]=true;
            ++accepted;
            penalty+=wrong[id];
        }
        else ++wrong[id];
    }
    std::cout<<accepted<<' '<<penalty<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
