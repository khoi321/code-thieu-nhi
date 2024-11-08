#include <bits/stdc++.h>
using namespace std;
int s,nhan=1;
int main() {
    int n;
    cin>>n;
    int x=n;
    vector<int> v;
    while(n>0){
        v.push_back(n%10);
        n=n/10;
    }
    int temp=0;
    for(int i=v.size()-1;i>=0;i--){
        s=nhan*v[i];
        temp+=s;
        nhan*=10;
    }
    if(x==temp){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
