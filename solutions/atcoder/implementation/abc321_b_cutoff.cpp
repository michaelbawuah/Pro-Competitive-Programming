// Cutoff | https://atcoder.jp/contests/abc321/tasks/abc321_b
// Time: O(n+101); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,x;std::cin>>n>>x;std::vector<int>a(n-1);int sum=0;for(int&v:a){std::cin>>v;sum+=v;}int low=*std::min_element(a.begin(),a.end()),high=*std::max_element(a.begin(),a.end()),answer=-1;for(int last=0;last<=100;++last)if(sum+last-std::min(low,last)-std::max(high,last)>=x){answer=last;break;}std::cout<<answer<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
