 #include <bits/stdc++.h>
using namespace std;
vector<int>result;
bool isPrime(int n){
    for(int factor=2;factor<=sqrt(n);factor++){
        if(n%factor == 0){
            return false;
        }
    }
    
    return true;
}
void fun(int n){
    vector<bool>arr(n+1,true);
    arr[0] = false;
    arr[1] = false;
    
    for(int i=2;i<=sqrt(n);i++){
        if(isPrime(i)){
            for(int j=2;(j*i)<=n;j++){
                arr[j*i] = false;
            }
        }
    }
    for(int i=0;i<=n;i++){
        if(arr[i] == true){
            result.push_back(i);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    fun(n);
    for(int i=0;i<result.size();i++){
        cout << result[i] <<" ";
    }
    cout << "\n";
   
    
    return 0;
}