void lexicographic(vector<int> &A,vector<int> &aux,int curr,int i,vector<vector<int>> &ans){
    ans.push_back(aux);
    if(curr == A.size()){
        return;
    }
    if(i<A.size()){
        for(int j=i;j<A.size();j++){
            vector<int> aux1(aux);
            aux1.push_back(A[j]);
            lexicographic(A,aux1,curr+1,j+1,ans);
        }
        // ans.push_back(aux);
    }
}

vector<vector<int> > Solution::subsets(vector<int> &A) {
      vector<vector<int> > ans;
      vector<int> aux;
    
    if(A.size()){
       sort(A.begin(), A.end()); 
    }
    lexicographic(A,aux,0,0,ans);
     
    
    
return ans;
    
    
}
