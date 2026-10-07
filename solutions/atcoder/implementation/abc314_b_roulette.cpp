// Roulette | https://atcoder.jp/contests/abc314/tasks/abc314_b
// Time: O(total bets); extra space: O(total bets+N).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<std::vector<int>>bets(n);for(auto&row:bets){int c;std::cin>>c;row.resize(c);for(int&x:row)std::cin>>x;}int x;std::cin>>x;std::size_t best=38;std::vector<int>answer;for(int i=0;i<n;++i)if(std::find(bets[i].begin(),bets[i].end(),x)!=bets[i].end()){if(bets[i].size()<best){best=bets[i].size();answer.clear();}if(bets[i].size()==best)answer.push_back(i+1);}std::cout<<answer.size()<<'\n';for(std::size_t i=0;i<answer.size();++i)std::cout<<answer[i]<<(i+1==answer.size()?'\n':' ');
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
