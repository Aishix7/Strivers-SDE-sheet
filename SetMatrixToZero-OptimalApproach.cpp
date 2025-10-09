int main(){
    string line;
    vector<vector<int>>matrix;

    while(getline(cin,line)){
        if(line.empty())break;

        stringstream ss(line);

         int num;

         vector<int>row;
         
         while(ss >> num){
            row.push_back(num);
         }

         matrix.push_back(row);
    }
    int n = matrix.size();
    int m = matrix[0].size();
    
    vector<int>Nrow(n,0);
    vector<int>Ncol(m,0);

    check(n,m,matrix,Nrow,Ncol);
    change(n,m,matrix,Nrow,Ncol);

    for(auto &row : matrix){
        for(auto val : row){
            cout << val <<" ";
        }
        cout << endl;
    }
}