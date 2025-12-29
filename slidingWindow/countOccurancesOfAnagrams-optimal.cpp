#include <bits/stdc++.h>
using namespace std;
bool checkIfZeros(map<char,int>&mp){
    for(auto it : mp){
        if(it.second != 0) return false;
    }
    return true;
}
int main()
{
    string s = "forxxorfxdofr";
    string word = "for";
    int len = word.length();
    map<char,int>mp;
    for(char c : word){
        mp[c]++;
    }
    int i=0,j=0;
    int n = s.length();
    int count = 0;
    while(j < n){
        if(word.find(s[j]) != string::npos){
            mp[s[j]]--;
            
        }
        if((j - i + 1) == len){
            if(checkIfZeros(mp)){
                count++;
            }
            if(word.find(s[i]) != string::npos)mp[s[i]]++;
            i++;
        }
        
        
        j++;
    }
    
    cout << count <<"\n";
    
    return 0;
}