// Piano | https://atcoder.jp/contests/abc346/tasks/abc346_b
// Time: O(12(W+B)); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int w,b;std::cin>>w>>b;std::string pattern="wbwbwwbwbwbw";bool possible=false;for(int start=0;start<12;++start){int white=0;for(int i=0;i<w+b;++i)white+=pattern[(start+i)%12]=='w';possible=possible||white==w;}std::cout<<(possible?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
