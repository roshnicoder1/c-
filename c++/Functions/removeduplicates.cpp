#include<iostream>
#include<vector>
#include<set>
using namespace std;


vector<int> removeDuplicates(vector<int> input){

    // Write your code here
    set <int> s;
    vector<int> result;
    vector<int>::iterator it;
    for(it=input.begin();it!=input.end();it++){
        if(s.find(*it)==s.end()){
            //if element not found
            s.insert(*it);
            result.push_back(*it);
            
        }
    }
    return result;
    
    

}
//another method


vector<int> removeDuplicates(vector<int> input){

    // Write your code here
    vector<int> result;
    sort(input.begin(),input.end());
    result.push_back(input[0]);
    for(int i=1;i<input.size();i++){
        if(input[i]!=input[i-1]){
            result.push_back(input[i]);
        }
    }
    return result;

}