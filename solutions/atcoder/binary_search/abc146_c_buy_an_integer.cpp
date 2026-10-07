// Buy an Integer | https://atcoder.jp/contests/abc146/tasks/abc146_c
// Time: O(log(10^9) log(10^9)); extra space: O(log(10^9)).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long a,b,x;
    std::cin>>a>>b>>x;
    long long low=0,high=1000000001;
    while(high-low>1) {
        long long mid=(low+high)/2;
        long long cost=a*mid+b*static_cast<long long>(std::to_string(mid).size());
        if(cost<=x)low=mid;
        else high=mid;
    }
    std::cout<<low<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
