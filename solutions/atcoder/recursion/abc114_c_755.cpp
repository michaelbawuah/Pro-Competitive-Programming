// 755 | https://atcoder.jp/contests/abc114/tasks/abc114_c
// Time: O(3^digits(N)); extra space: O(digits(N)).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long n;std::cin>>n;int answer=0;auto dfs=[&](auto&& self,long long value,int mask)->void{if(value>n)return;if(mask==7)++answer;for(int i=0;i<3;++i){int digit=3+2*i;if(value<=(n-digit)/10&&value*10+digit<=n)self(self,value*10+digit,mask|(1<<i));}};dfs(dfs,0,0);std::cout<<answer<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
