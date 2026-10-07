// Go Straight and Turn Right | https://atcoder.jp/contests/abc244/tasks/abc244_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,x=0,y=0,d=0;std::string t;std::cin>>n>>t;int dx[]={1,0,-1,0},dy[]={0,-1,0,1};for(char c:t){if(c=='R')d=(d+1)%4;else{x+=dx[d];y+=dy[d];}}std::cout<<x<<' '<<y<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
