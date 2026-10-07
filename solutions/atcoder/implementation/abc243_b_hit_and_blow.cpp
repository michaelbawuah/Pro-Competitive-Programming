// Hit and Blow | https://atcoder.jp/contests/abc243/tasks/abc243_b
// Time: O(n^2); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    std::vector<int>a(n),b(n);
    for(int&x:a)std::cin>>x;
    for(int&x:b)std::cin>>x;
    int hit=0,blow=0;
    for(int i=0;i<n;++i)for(int j=0;j<n;++j)if(a[i]==b[j]) {
        if(i==j)++hit;
        else ++blow;
    }
    std::cout<<hit<<'\n'<<blow<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
