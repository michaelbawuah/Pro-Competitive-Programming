// Intersection of Cuboids | https://atcoder.jp/contests/abc361/tasks/abc361_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::vector<int>a(6),b(6);for(int&x:a)std::cin>>x;for(int&x:b)std::cin>>x;bool positive=true;for(int axis=0;axis<3;++axis)positive=positive&&std::max(a[axis],b[axis])<std::min(a[axis+3],b[axis+3]);std::cout<<(positive?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
