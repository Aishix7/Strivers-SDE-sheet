#include <bits/stdc++.h>
using namespace std;
int main()
{
    int start, goal;
    cin >> start >> goal;
    
    int num = start^goal;
    int count = 0;
    while(num){
        num &= (num - 1);
        count++;
    }
    cout << count <<"\n";
    return 0;
}