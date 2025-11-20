#include <bits/stdc++.h>
using namespace std;
bool allOnes(string &str){
    unordered_map<char,int>freq;
    for(int i=0;i<str.length();i++){
        freq[str[i]]++;
        if(freq[str[i]] > 1) return false;
    }
    
    return true;
}
int maxLength(string &s){
    
    int n = s.length();
    string str = "";
    
    int maxi = -1;
    for(int i=0;i<n;i++){
        str += s[i];
        if(allOnes(str)){
            maxi = max(maxi,(int)str.length());
        }
        else if(allOnes(str) == false){
            str = s[i];
        }
    }
    
    return maxi;
    
    
}
int main()
{
    string s = "abcbbace";
    int res = maxLength(s);
    
    cout << res << endl;

    return 0;
}