// Smartphone Addiction | https://atcoder.jp/contests/abc185/tasks/abc185_b
// Time: O(M); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long capacity,t;
    int m;
    std::cin>>capacity>>m>>t;
    long long charge=capacity,previous=0;
    bool ok=true;
    while(m--) {
        long long a,b;
        std::cin>>a>>b;
        charge-=a-previous;
        if(charge<=0)ok=false;
        charge=std::min(capacity,charge+b-a);
        previous=b;
    }
    charge-=t-previous;
    std::cout<<(ok&&charge>0?"Yes":"No")<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
