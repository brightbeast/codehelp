#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    //creation of unordered map
    unordered_map<string, int> m;
    
    //1
    pair<string, int> pair1=make_pair("Prajwal",3);
    m.insert(pair1);

    //2
    pair<string, int> pair2("Praj",4);
    m.insert(pair2);

    //3
    m["Ashok"]=3;

    //size
    cout<<m.size()<<endl;

    //to check the presence
    cout<<m.count("Hello")<<endl;

    //erase 
    m.erase("Praj");
    cout<<m.size()<<endl;

    //print entire array
    for(auto i:m)
    cout<<i.first<<" "<<i.second<<endl;

    //iterator
    cout<<"Iterator's chance"<<endl;
    unordered_map<string,int> :: iterator it=m.begin();

    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }

    return 0;
} 