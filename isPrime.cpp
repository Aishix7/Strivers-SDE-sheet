// finding if a num is prime or not. 
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    for(int factor=2;factor<=sqrt(n);factor++){
        if(n%factor == 0){
            return false;
        }
    }
    
    return true;
}
int main()
{
    int n;
    cin >> n;
    
    bool prime = isPrime(n);
    if(prime){
        cout <<"true" <<"\n";
    }
    else{
        cout <<"false" <<"\n";
    }
    
    return 0;
}