#include <bits/stdc++.h>
using namespace std;
set<string>temp; // SC is O(n)
int findOccur(string input){
    int count = 0;
    for(string s : temp){ // O(n)
        if(input.find(s) != string::npos){ 
            count++;
        }
    }
    return count;
}
void findAnagrams(string word,vector<bool>& used,string str){
    if(str.length() == word.length()){
        temp.insert(str);
        return;
    }
    for(int i=0;i<word.length();i++){ // O(n)*o(2^n);
        if(used[i]) continue;
        
        used[i] = true;
        str.push_back(word[i]);
        
        findAnagrams(word,used,str);
        
        str.pop_back();
        used[i] = false;
    }
}
int main()
{   string input = "forxxorfxdofr";
    string word = "for";
    int len = word.length();
    vector<bool> used(word.length(), false);
    findAnagrams(word,used,"");
    int occur = findOccur(input);
    
    cout << occur <<"\n";
    return 0;
}


// findAnagrams:
// Time Complexity: O(n! * n)
// Space Complexity: O(n! * n)

// findOccur:
// Time Complexity: O(n! * L * n)
// Space Complexity: O(1)

// Overall:
// Time Complexity: O(n! * L * n)
// Space Complexity: O(n! * n)
