#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1 = 3, n2 = 4;
    int a = n1, b = n2;
    // take two strings of binary bits of each number and then find the one with max length. 
    string s1,s2;
    while(n1 > 0){
        int r = n1%2;
        s1 += (r + '0');
        n1 /= 2;
    }
    while(n2 > 0){
        int r = n2%2;
        s2 += (r + '0');
        n2 /= 2;
    }
    int size = max(s1.length(),s2.length());
    vector<int> start(size, 0);
    vector<int> goal(size, 0);
    int n = size - 1;
    while(a > 0){
        start[n] = (a%2);
        n--;
        a /= 2;
    }
    n = size - 1; 
    while(b > 0){
        goal[n] = (b%2);
        n--;
        b /= 2;
    }
    int count = 0;
    for(int i=(size-1);i>=0;i--){
        if(start[i] != goal[i]) count++;
        
    }
    cout << count <<"\n";
    return 0;
}