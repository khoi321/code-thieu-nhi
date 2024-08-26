#include <bits/stdc++.h>
using namespace std;
int main() {
    iosbase::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;
    cin>>n>>m;
    vector<int> v1(n);
    vector<int> v2(m);

    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    for(int i=0;i<m;i++){
        cin>>v2[i];
    }
    v1.insert(v1.end(),v2.begin(), v2.end());
    sort(v1.begin(),v1.end());
    if(n+m%2==0){
        cout<<(v1[(n+m)/2]+v1[(n+m)/2-1])/2.0;
    }
    else{
        cout<<v1[(n+m)/2];
    }
}
