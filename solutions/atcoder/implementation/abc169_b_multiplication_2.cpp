// Multiplication 2 | https://atcoder.jp/contests/abc169/tasks/abc169_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    std::vector<long long>a(n);
    for(auto&x:a)std::cin>>x;
    if(std::find(a.begin(),a.end(),0)!=a.end()) {
        std::cout<<0<<'\n';
        return;
    }
    long long product=1,limit=1000000000000000000LL;
    for(long long x:a) {
        if(product>limit/x) {
            std::cout<<-1<<'\n';
            return;
        }
        product*=x;
    }
    std::cout<<product<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
