/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    // int largest = arr[0];
    // for(int i=0;i<n;i++){
    //     if(arr[i] > largest){
    //         largest = arr[i];
    //     }
    // }
    // int secondLargest = -1;
    // for(int i=0;i<n;i++){
    //     if(arr[i] < largest && arr[i] != largest){
    //         secondLargest = arr[i];
    //     }
    // }
    
    int largest = arr[0];
    int secondLargest = -1;
    
    for(int i=0;i<n;i++){
        if(arr[i] > largest){ 
            secondLargest = largest;
            largest = arr[i];
        }
        if(arr[i] < largest && arr[i] > secondLargest){
            secondLargest = arr[i];
        }
        
        // else if(secondLargest < largest && arr[i] != largest) secondLargest = arr[i];
    }
    
    int smallest = arr[0];
    int secondSmallest = 10;
    
    for(int i=0;i<n;i++){
        if(arr[i] < smallest){
            
            secondSmallest = smallest;
            smallest = arr[i];
            
        }
        if(arr[i] > smallest && arr[i] < secondSmallest){
            secondSmallest = arr[i];
        }
    }
    cout << "Second Largest is : " << secondLargest <<"\n";
    cout << "Second Smallest is : " << secondSmallest << "\n";

    return 0;
}