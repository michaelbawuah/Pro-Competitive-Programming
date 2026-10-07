// Count Order | https://atcoder.jp/contests/abc150/tasks/abc150_c
// Time: O(n n!); extra space: O(n).
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <numeric>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<int>p(n),q(n),v(n);for(int&x:p)std::cin>>x;for(int&x:q)std::cin>>x;std::iota(v.begin(),v.end(),1);int rank=0,a=0,b=0;do{if(v==p)a=rank;if(v==q)b=rank;++rank;}while(std::next_permutation(v.begin(),v.end()));std::cout<<std::abs(a-b)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
