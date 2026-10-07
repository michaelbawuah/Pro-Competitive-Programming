// Maximum Subarray Sum II | https://cses.fi/problemset/task/1644/
// Time: O(n log n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <limits>
#include <set>
#include <vector>



void solve() {
    int n,a,b;std::cin>>n>>a>>b;std::vector<long long>prefix(n+1);for(int i=1;i<=n;++i){long long x;std::cin>>x;prefix[i]=prefix[i-1]+x;}std::multiset<long long>starts;long long ans=std::numeric_limits<long long>::lowest();for(int r=a;r<=n;++r){starts.insert(prefix[r-a]);if(r-b-1>=0)starts.erase(starts.find(prefix[r-b-1]));ans=std::max(ans,prefix[r]-*starts.begin());}std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
