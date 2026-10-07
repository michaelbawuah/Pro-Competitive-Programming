// Jogging | https://atcoder.jp/contests/abc249/tasks/abc249_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int a,b,c,d,e,f,x;
    std::cin>>a>>b>>c>>d>>e>>f>>x;
    auto distance=[&](int walk,int speed,int rest) {
        return (x/(walk+rest)*walk+std::min(walk,x%(walk+rest)))*speed;
    };
    int first=distance(a,b,c),second=distance(d,e,f);
    std::cout<<(first>second?"Takahashi":first<second?"Aoki":"Draw")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
