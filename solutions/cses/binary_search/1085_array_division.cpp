// Array Division | https://cses.fi/problemset/task/1085/
// Time: O(n log(sum A)); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <vector>

void solve() {
    int n,k;
    std::cin>>n>>k;
    std::vector<long long>a(n);
    long long low=0,high=0;
    for(auto&x:a) {
        std::cin>>x;
        low=std::max(low,x);
        high+=x;
    }
    while(low<high) {
        long long mid=low+(high-low)/2,sum=0;
        int groups=1;
        for(long long x:a) {
            if(sum+x>mid) {
                ++groups;
                sum=0;
            }
            sum+=x;
        }
        if(groups<=k)high=mid;
        else low=mid+1;
    }
    std::cout<<low<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
