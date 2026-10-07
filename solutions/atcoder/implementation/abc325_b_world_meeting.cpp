// World Meeting | https://atcoder.jp/contests/abc325/tasks/abc325_b
// Time: O(24N); extra space: O(N).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<int>w(n),zone(n);for(int i=0;i<n;++i)std::cin>>w[i]>>zone[i];long long best=0;for(int utc=0;utc<24;++utc){long long count=0;for(int i=0;i<n;++i){int hour=(utc+zone[i])%24;if(9<=hour&&hour<18)count+=w[i];}best=std::max(best,count);}std::cout<<best<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
