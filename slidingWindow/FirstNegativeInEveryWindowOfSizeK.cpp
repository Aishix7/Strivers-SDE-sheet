class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        deque<int>q;
        int n = arr.size();
    
        vector<int>res;
    
        int i=0,j=0;
    
        while(j < n){
            if(arr[j] < 0){
                q.push_back(arr[j]);
            }
            if((j-i+1) == k){
                (q.empty())? res.push_back(0):res.push_back(q.front());
                
                if(!q.empty() && arr[i] == q.front()){
                    q.pop_front();
                }
                i++;
            }
            j++;
        }
        
        return res;
    }
};
