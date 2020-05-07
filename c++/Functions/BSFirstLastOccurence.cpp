#include <iostream>
using namespace std;
int findfirstoccurence(int arr[],int n,int x);
    
int findlastoccurence(int arr[],int n,int x);


int main() {
	//code
	int T;
	int n,x;
	cin>>T;
	for(int i=0;i<T;i++){
	    cin>>n>>x;
	    int arr[n];
	    for(int j=0;j<n;j++){
	        cin>>arr[j];
	        
	    }
	    if(findfirstoccurence(arr,n,x)==-1)
	    {
	        cout<<findfirstoccurence(arr,n,x)<<endl;
	    }
	    else{
	        cout<<findfirstoccurence(arr,n,x)<<" ";
	        cout<<findlastoccurence(arr,n,x)<<endl;
	        
	    }
	     
	    
	}
	return 0;
}
int findfirstoccurence(int arr[],int n,int x){
    int l=0,h=n-1,m;
    while(l<=h){
        m=l+(h-l)/2;
        if(arr[m]<x){
            l=m+1;
        }
        else if(arr[m]>x){
            h=m-1;
        }
        else{
            if(m>0){
                if(arr[m]==arr[m-1]){
                    h=m-1;
                    
                    
                }
                else{
                    return m;
                }
            }
            else{
                return 0;
                
            }
        }
        
            
        
    }
    return -1;
    
}
int findlastoccurence(int arr[],int n,int x){
    int l=0,h=n-1,m;
    while(l<=h){
        m=l+(h-l)/2;
        if(arr[m]<x){
            l=m+1;
        }
        else if(arr[m]>x){
            h=m-1;
        }
        else{
            
            if(m==n-1){
                return m;
            }
            else{
                if(arr[m]==arr[m+1]){
                    l=m+1;
                    
                    
                }
                else{
                    return m;
                }
            }
        
        }
    
    }
    return -1;
    
    
}
