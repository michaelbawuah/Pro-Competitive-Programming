// Right Triangle | https://atcoder.jp/contests/abc362/tasks/abc362_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long x[3],y[3];for(int i=0;i<3;++i)std::cin>>x[i]>>y[i];std::vector<long long>square;for(int i=0;i<3;++i){int j=(i+1)%3;long long dx=x[i]-x[j],dy=y[i]-y[j];square.push_back(dx*dx+dy*dy);}std::sort(square.begin(),square.end());std::cout<<(square[0]+square[1]==square[2]?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
