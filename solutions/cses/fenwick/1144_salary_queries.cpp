// Salary Queries | https://cses.fi/problemset/task/1144/
// Time: O((n+q) log(n+q)); extra space: O(n+q).
#include <algorithm>
#include <iostream>
#include <tuple>
#include <vector>



void solve() {
    int n,q;std::cin>>n>>q;std::vector<int>salary(n),values;for(int&x:salary){std::cin>>x;values.push_back(x);}std::vector<std::tuple<char,int,int>>queries(q);for(auto&[kind,a,b]:queries){std::cin>>kind>>a>>b;if(kind=='!')values.push_back(b);}std::sort(values.begin(),values.end());values.erase(std::unique(values.begin(),values.end()),values.end());int size=static_cast<int>(values.size());std::vector<int>bit(size+1);auto index=[&](int value){return static_cast<int>(std::lower_bound(values.begin(),values.end(),value)-values.begin());};auto add=[&](int i,int delta){for(++i;i<=size;i+=i&-i)bit[i]+=delta;};auto prefix=[&](int count){int sum=0;for(;count>0;count-=count&-count)sum+=bit[count];return sum;};for(int x:salary)add(index(x),1);for(auto[kind,a,b]:queries){if(kind=='!'){--a;add(index(salary[a]),-1);salary[a]=b;add(index(b),1);}else{int right=static_cast<int>(std::upper_bound(values.begin(),values.end(),b)-values.begin());std::cout<<prefix(right)-prefix(index(a))<<'\n';}}
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
