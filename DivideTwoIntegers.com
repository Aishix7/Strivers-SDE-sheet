#include <bits/stdc++.h>
using namespace std;
int ans(int &dividend, int &divisor){
    bool sign = true;
    if(dividend >= 0 && divisor < 0)sign = false;
    if(dividend <= 0 && divisor > 0)sign = false;
    
    long quotient = 0;
    long n = abs(dividend);
    long d = abs(divisor);
    
    while(n >= d){
        int count = 0;
        while(n >= d << (count + 1)){
            count++;
        }
        quotient += (1 << count);
        n -= (d << count);
    }
    if(quotient == (1<< 31) && sign) return INT_MAX;
    if(quotient == (1 << 31) && !sign) return INT_MIN;
    
    return sign? quotient : (-quotient);
}
int main()
{
    int dividend = 10;
    int divisor = 3;
    long res = ans(dividend,divisor);
    
    cout << res <<"\n";
    return 0;
}