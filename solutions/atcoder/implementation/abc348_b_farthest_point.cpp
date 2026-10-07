// Farthest Point | https://atcoder.jp/contests/abc348/tasks/abc348_b
// Time: O(n^2); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<long long>x(n),y(n);for(int i=0;i<n;++i)std::cin>>x[i]>>y[i];for(int i=0;i<n;++i){long long best=-1;int answer=0;for(int j=0;j<n;++j){long long dx=x[i]-x[j],dy=y[i]-y[j],distance=dx*dx+dy*dy;if(distance>best){best=distance;answer=j+1;}}std::cout<<answer<<'\n';}
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
