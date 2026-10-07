// Discord | https://atcoder.jp/contests/abc303/tasks/abc303_b
// Time: O(NM+N^2); extra space: O(N^2).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,m;std::cin>>n>>m;std::vector<std::vector<bool>>adjacent(n,std::vector<bool>(n));while(m--){int previous;std::cin>>previous;--previous;for(int i=1;i<n;++i){int current;std::cin>>current;--current;adjacent[previous][current]=adjacent[current][previous]=true;previous=current;}}int answer=0;for(int i=0;i<n;++i)for(int j=0;j<i;++j)answer+=!adjacent[i][j];std::cout<<answer<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
