// Distinct Values Subarrays II | https://cses.fi/problemset/task/2428/
// Time: O(n log k); extra space: O(n).
#include <iostream>
#include <map>
#include <vector>

void solve() {
    int n,k;
    std::cin>>n>>k;
    std::vector<int>a(n);
    for(int&x:a)std::cin>>x;
    std::map<int,int>freq;
    int left=0;
    long long ans=0;
    for(int right=0;right<n;++right) {
        ++freq[a[right]];
        while(static_cast<int>(freq.size())>k) {
            if(--freq[a[left]]==0)freq.erase(a[left]);
            ++left;
        }
        ans+=right-left+1;
    }
    std::cout<<ans<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
