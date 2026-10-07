// Hammer | https://atcoder.jp/contests/abc270/tasks/abc270_b
// Time: O(1); extra space: O(1).
#include <cstdlib>
#include <iostream>



void solve() {
    int x,y,z;std::cin>>x>>y>>z;if(x<0){x=-x;y=-y;z=-z;}int answer;if(y<0||y>x)answer=x;else if(z>y)answer=-1;else answer=std::abs(z)+std::abs(x-z);std::cout<<answer<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
