// Counting Towers | https://cses.fi/problemset/task/2413/
// Time: O(max n+t); extra space: O(max n+t).
#include <algorithm>
#include <iostream>
#include <vector>



void solve() {
    int t;std::cin>>t;std::vector<int>queries(t);int limit=0;for(int&n:queries){std::cin>>n;limit=std::max(limit,n);}const long long mod=1000000007;std::vector<long long>joined(limit+1),split(limit+1);joined[1]=split[1]=1;for(int h=2;h<=limit;++h){joined[h]=(2*joined[h-1]+split[h-1])%mod;split[h]=(joined[h-1]+4*split[h-1])%mod;}for(int n:queries)std::cout<<(joined[n]+split[n])%mod<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
