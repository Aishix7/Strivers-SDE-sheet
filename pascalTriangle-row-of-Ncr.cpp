#include <bits/stdc++.h>
using namespace std;
int findNCR(int n, int r){
    int res = 1;
    for(int i=0;i<r;i++){
      res = res*(n-i);
      res = res/(i+1);
    }
    return res;
}
void secondApproach(int n){
    int res = 1;
    cout << res <<" ";
    for(int i=1;i<n;i++){
        res = res*(n-i);
        res = res/i;
        
        cout << res <<" ";
    }
    cout << endl;
    
}
int main()
{
    int n;
    cin >> n;
    for(int c=1;c<=n;c++){
        cout << findNCR(n-1,c-1)<<" ";
    }
    cout << "\n";
    
    secondApproach(n);
    
    return 0;
}