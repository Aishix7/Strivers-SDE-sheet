 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s ="1234asdc0976";
    int sum = 0;
    int num = 0;
    for(char c : s){
        if(isdigit(c)){
            num = num*10 + (c - '0');
        }
        else{
            sum += num;
            num = 0;
        }
    }
    sum += num;
    
    cout << sum << endl;
   
    
    return 0;
}