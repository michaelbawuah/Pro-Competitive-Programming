// Subarray Sums I | https://cses.fi/problemset/task/1660/
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <vector>



void solve() {
    int n;long long target;std::cin>>n>>target;std::vector<long long>a(n);for(auto&x:a)std::cin>>x;long long sum=0,answer=0;int left=0;for(int right=0;right<n;++right){sum+=a[right];while(sum>target)sum-=a[left++];answer+=sum==target;}std::cout<<answer<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
