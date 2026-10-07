// Yellow and Red Card | https://atcoder.jp/contests/abc292/tasks/abc292_b
// Time: O(N+Q); extra space: O(N).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,q;std::cin>>n>>q;std::vector<int>cards(n);while(q--){int type,x;std::cin>>type>>x;--x;if(type==1)++cards[x];else if(type==2)cards[x]=2;else std::cout<<(cards[x]>=2?"Yes":"No")<<'\n';}
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
