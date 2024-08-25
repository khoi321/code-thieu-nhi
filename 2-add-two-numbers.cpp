#include <bits/stdc++.h>
using namespace std;
int convert(vector<int>v) {
    int temp=1;
    int res=0;
    for(int i=0;i<v.size();i++){
        res+=v[i]*temp;
        temp*=10;
    }
    return res;
}
int main() {
    int n,m;
    cin>>n>>m;

    vector<int> v1(n);
    vector<int> v2(m);
    for(int i=0;i<n;i++) {
        cin>>v1[i];
    }
    for(int i=0;i<m;i++) {
        cin>>v2[i];
    }
    cout<<convert(v1)+convert(v2);
}
