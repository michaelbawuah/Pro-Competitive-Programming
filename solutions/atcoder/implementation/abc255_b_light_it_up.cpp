// Light It Up | https://atcoder.jp/contests/abc255/tasks/abc255_b
// Time: O(NK); extra space: O(N+K).
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <vector>

void solve() {
    int n,k;
    std::cin>>n>>k;
    std::vector<int>lights(k);
    for(int&i:lights) {
        std::cin>>i;
        --i;
    }
    std::vector<long long>x(n),y(n);
    for(int i=0;i<n;++i)std::cin>>x[i]>>y[i];
    long long required=0;
    for(int i=0;i<n;++i) {
        long long nearest=std::numeric_limits<long long>::max();
        for(int j:lights) {
            long long dx=x[i]-x[j],dy=y[i]-y[j];
            nearest=std::min(nearest,dx*dx+dy*dy);
        }
        required=std::max(required,nearest);
    }
    std::cout<<std::setprecision(15)<<std::sqrt(static_cast<double>(required))<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
