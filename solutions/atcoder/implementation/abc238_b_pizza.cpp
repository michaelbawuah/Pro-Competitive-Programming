// Pizza | https://atcoder.jp/contests/abc238/tasks/abc238_b
// Time: O(n log n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,angle=0;
    std::cin>>n;
    std::vector<int>cuts{0,360};
    while(n--) {
        int a;
        std::cin>>a;
        angle=(angle+a)%360;
        cuts.push_back(angle);
    }
    std::sort(cuts.begin(),cuts.end());
    int best=0;
    for(std::size_t i=1;i<cuts.size();++i)best=std::max(best,cuts[i]-cuts[i-1]);
    std::cout<<best<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
