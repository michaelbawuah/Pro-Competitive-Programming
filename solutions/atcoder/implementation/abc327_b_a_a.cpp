// A^A | https://atcoder.jp/contests/abc327/tasks/abc327_b
// Time: O(15^2); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long b;std::cin>>b;int answer=-1;for(int a=1;a<=15;++a){long long value=1;for(int i=0;i<a;++i)value*=a;if(value==b)answer=a;}std::cout<<answer<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
