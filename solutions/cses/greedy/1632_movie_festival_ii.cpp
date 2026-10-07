// Movie Festival II | https://cses.fi/problemset/task/1632/
// Time: O(n log n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <set>
#include <utility>
#include <vector>



void solve() {
    int n,k;std::cin>>n>>k;std::vector<std::pair<int,int>>movies(n);for(auto&[end,start]:movies)std::cin>>start>>end;std::sort(movies.begin(),movies.end());std::multiset<int>available;for(int i=0;i<k;++i)available.insert(0);int ans=0;for(auto[end,start]:movies){auto it=available.upper_bound(start);if(it==available.begin())continue;--it;available.erase(it);available.insert(end);++ans;}std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
