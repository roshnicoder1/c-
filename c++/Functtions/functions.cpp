#include<iostream>
#include<algorithm>
#include<cmath>
#include<utility>


using namespace std;

struct Interval{
	int st;
	int et;
};

bool compare(Interval i1,Interval i2){
	return i1.st < i2.st;
}
int main(){	
	int arr[] = {1,3,2,5,7,6};
	sort(arr,arr+6);
	for(int i=0;i<6;i++){
		cout<<arr[i] << " ";
	}

    //to sort in decreasing order
    // sort(arr,arr+6,greater<int>());
    // for(int i=0;i<6;i++){
    //     cout<<arr[i]<<" ";
    // }



    //if this ,it will sort from index 2 to end 
    // sort(arr+2,arr+6);
	// for(int i=0;i<6;i++){
	// 	cout<<arr[i] << " ";
	// }

    //to sort intervals on the basis of starting index define struct Interval and function compare

    Interval arr1[] = {{6,4} , {3,4}, {4,6} , {8,13}};
	sort(arr1,arr1+4,compare);
    for(int i=0;i<4;i++){
        cout<<arr1[i].st<<":"<<arr1[i].et<<endl;
    }


	cout<<endl;
    //search 2, using binary_search 
	cout << "index of 2 is"<<binary_search(arr,arr+6,2);
	cout<<endl;

    //search 8, using binary_search 
	cout << "index of 8 is"<<binary_search(arr,arr+6,8);
	cout<<endl;

    //lower bound returns pointer to that position like arr+2 that's why we substract by arr

	cout<<lower_bound(arr,arr+6,3) - arr;
	cout<<endl;

    //if element does't exist then it will return position where element should be
	cout<<lower_bound(arr,arr+6,4) - arr;
	cout<<endl;

    //if there is repetition then it will return position of first occuring no

	//upper_bound will return just next higher no.and if there is repetition it will consider last 
    //occurence and then add 1 
    cout<<upper_bound(arr,arr+6,3) - arr;
	cout<<endl;
	
	cout<<endl;

	cout<<__gcd(10,6)<<endl;
    //pow is in cmath

	cout<<pow(2.2,5)<<endl;

	int x= 10;
	int y=12;
    //swap is in utility
	swap(x,y);
	cout<<x<<endl;
	cout<<y<<endl;

	cout<<min(14,18)<<endl;
		// for(int i=0;i<4;i++){
	// 	cout << arr[i].st << " : " << arr[i].et << endl;
	// }
	return 0;
}