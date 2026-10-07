// Batters | https://atcoder.jp/contests/abc256/tasks/abc256_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,score=0;
    std::cin>>n;
    std::vector<int>base(4);
    while(n--) {
        int advance;
        std::cin>>advance;
        base[0]=1;
        std::vector<int>next(4);
        for(int i=0;i<4;++i)if(base[i]) {
            if(i+advance>=4)++score;
            else next[i+advance]=1;
        }
        base=next;
    }
    std::cout<<score<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
