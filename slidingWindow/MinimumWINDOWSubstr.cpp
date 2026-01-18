class Solution {
public:
    string minWindow(string s, string t) {
    int i = 0;
    int j = 0;
    int n = s.length();
    int reqCount = t.length();
    int windowSize = INT_MAX;
    int start = 0;
    unordered_map<char,int>mp;
    for(char c : t){
        mp[c]++;
    }
    while(j < n){

        if(mp[s[j]] > 0) reqCount--;
        mp[s[j]]--;
        
        while(reqCount == 0){
            int CurrWinSize = j - i + 1;
            if(windowSize > CurrWinSize){
                windowSize = CurrWinSize;
                start = i;
            }
            mp[s[i]]++;
            if(mp[s[i]] > 0) reqCount++; 
            i++;  
        }

        j++;  
    }
    if(t.length() > n) return "";
    return windowSize == INT_MAX?  "" :  s.substr(start,windowSize);
    }
};