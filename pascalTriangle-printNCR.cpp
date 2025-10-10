#include <bits/stdc++.h>
using namespace std;
int findNCR(int n, int r){
    int res;
    for(int i=0;i<r;i++){
       res = res*(n-i);
       res = res/(i+1);
    }
    return res;
}
int main()
{
    int n,r;
    cin >> n >> r;
    int result = findNCR(n,r);
    cout << result << endl;
    return 0;
}