#include <bits/stdc++.h>
using namespace std;
int maxLenth(string &s){
    unordered_map<char,int>mp;
    int maxi = -1;
    int n = s.length();
    int l = 0;
    int r = 0;
    int length = 0;
   
    while(r < n){
        if(mp.find(s[r]) != mp.end() && mp[s[r]] >= l){
            l = mp[s[r]] + 1;
        }
        
        mp[s[r]] = r;
        length = (r-l)+1;
        maxi = max(maxi,length);
        r++; 
        
    }
    return maxi;
}
int main()
{
    string s = "cadbzabcd";
    // cin >> s;
    
    int res = maxLenth(s);
    
    cout << res << endl;

    return 0;
}