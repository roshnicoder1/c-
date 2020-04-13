#include<iostream>
#include<vector>
#include<string>
#include<utility>
#include<set>
#include<unordered_map>
using namespace std;



int main(){

    // Vector: Dyanamic array (Resize is allowed)
    
        //we don't want to declare the size of vector and pushing element using push_back
        
        vector<int> v;
	

        for(int i=0;i<5;i++){
             v.push_back(i+1);
        }

        //way to declare iterator
        vector<int>::iterator it;
        // begin points to first element of vector and end() points to next position of last element of vector

        for(it=v.begin();it!=v.end();it++){
             cout<<*it<<endl;
        }

        //Another way by declaring the size of vector and inserting elememt like array
        vector<char> v1(5);
        for(int j=0;j<v1.size();j++){
            v1[j]=char(65+j);
        }
        vector<char>::iterator it1;
        for(it1=v1.begin();it1!=v1.end();it1++){
            cout<<*it1<<endl;
        }


        // String (Resize is not allowed)


        string s = "Parikh";
        string s2(s); //it will copy same string s as s2
        string s1(s,2,4); //it will take character from index 2 to next 4 characters from s
        cout<<s<<endl;
        cout<<s1<<endl;
        cout<<s2<<endl;


        string s3 = s.substr(2,4); //it will take character from index 2 to next 4 characters from s
        cout<<s3<<endl;

        if(s1.compare(s2) == 0){
             cout<<s1 <<"is equal to " << s2<<endl;
        }else{
             cout<<s1 <<"is not equal to " << s2<<endl;
        }

        // Pair #include<utility>

        pair<int,char> p;
        p = make_pair(2,'b');
        pair<int,char> p2(1,'a');
        cout<<p.first << " " << p.second<<endl;
        cout<<p2.first << " " << p2.second<<endl;


        // Set

        set<int> s4;
        int arr[] = {1,2,3,4,5,6,5};

        for(int i=0;i<7;i++){
             s4.insert(arr[i]);
        }

        set<int>::iterator it4;

        for(it4=s4.begin();it4!=s4.end();it4++){
             cout<<*it4<<endl;
        }

        if(s4.find(5) == s4.end()){
             cout<<"Element not found"<<endl;
        }else{
             cout<<"Element found"<<endl;
        }


       // Map

        int arr[] = {1,2,3,4,5,6,5};

        //we can use map or unordered_map (unorrderd_map uses hash so avrg toc is O(1))
        unordered_map<int,int> m;

        for(int i=0;i<7;i++){
                m[arr[i]] = m[arr[i]]+1;
        }

        unordered_map<int,int>::iterator it;
        for(it=m.begin();it!=m.end();it++){
                cout<<it->first << " :" << it->second<<endl;
        }
        cout<<endl;
        m.erase(1);
        for(it=m.begin();it!=m.end();it++){
                cout<<it->first << " :" << it->second<<endl;
        }





























        return 0;
}
