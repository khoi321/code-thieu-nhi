#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int n=s.size();
    int ans=0;    
    int i=0,j=0;
    unordered_map<char,int> mp;
    while(j<n) {
        if(mp.find(s[j]) != mp.end()) {
            i=max(mp[s[j]],i);
        }   
        ans=max(ans,j-i+1);
        mp[s[j]]=j+1;
        j++;
    }
    return ans;
}
int main(){
    string s;
    cin>>s;
    cout<<lengthOfLongestSubstring(s);
}
