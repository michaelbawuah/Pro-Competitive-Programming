// Glass and Mug | https://atcoder.jp/contests/abc332/tasks/abc332_b
// Time: O(K); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int k,g,m;
    std::cin>>k>>g>>m;
    int glass=0,mug=0;
    while(k--) {
        if(glass==g)glass=0;
        else if(mug==0)mug=m;
        else {
            int transfer=std::min(g-glass,mug);
            glass+=transfer;
            mug-=transfer;
        }
    }
    std::cout<<glass<<' '<<mug<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
