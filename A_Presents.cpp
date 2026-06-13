#include <iostream>
#include <map>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;cin>>n;
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        mpp[a-1]=i+1;
    }
    for(auto it:mpp){
        cout << it.second << " ";
    }
}