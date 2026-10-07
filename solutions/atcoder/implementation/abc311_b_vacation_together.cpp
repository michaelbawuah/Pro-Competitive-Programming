// Vacation Together | https://atcoder.jp/contests/abc311/tasks/abc311_b
// Time: O(ND); extra space: O(D).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,d;
    std::cin>>n>>d;
    std::vector<bool>free(d,true);
    while(n--) {
        std::string s;
        std::cin>>s;
        for(int i=0;i<d;++i)free[i]=free[i]&&s[i]=='o';
    }
    int run=0,best=0;
    for(bool day:free) {
        run=day?run+1:0;
        best=std::max(best,run);
    }
    std::cout<<best<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
