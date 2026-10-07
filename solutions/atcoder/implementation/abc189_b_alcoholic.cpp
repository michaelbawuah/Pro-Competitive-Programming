// Alcoholic | https://atcoder.jp/contests/abc189/tasks/abc189_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;long long x;std::cin>>n>>x;long long total=0;int answer=-1;for(int i=1;i<=n;++i){long long v,p;std::cin>>v>>p;total+=v*p;if(answer==-1&&total>100*x)answer=i;}std::cout<<answer<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
