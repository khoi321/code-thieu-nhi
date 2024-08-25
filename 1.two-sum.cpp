#include <bits/stdc++.h>
using namespace std;
int main(){
    iosbase::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int > v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int target;
    cin>>target;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]+v[j]==target){
                cout<<i<<" "<<j<<endl;
            }
        }
    }
}
