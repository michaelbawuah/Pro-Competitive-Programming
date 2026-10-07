// Strictly Superior | https://atcoder.jp/contests/abc310/tasks/abc310_b
// Time: O(N^2 M); extra space: O(NM).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,m;
    std::cin>>n>>m;
    std::vector<int>price(n),count(n);
    std::vector<std::vector<bool>>has(n,std::vector<bool>(m));
    for(int i=0;i<n;++i) {
        std::cin>>price[i]>>count[i];
        for(int j=0;j<count[i];++j) {
            int f;
            std::cin>>f;
            has[i][f-1]=true;
        }
    }
    bool exists=false;
    for(int i=0;i<n;++i)for(int j=0;j<n;++j)if(price[i]>=price[j]) {
        bool covers=true;
        for(int f=0;f<m;++f)if(has[i][f]&&!has[j][f])covers=false;
        if(covers&&(price[i]>price[j]||count[j]>count[i]))exists=true;
    }
    std::cout<<(exists?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
