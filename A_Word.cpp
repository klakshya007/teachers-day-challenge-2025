#include <iostream>
#include <string>
#include <map>
using namespace std;

string sol(string a){
    map<int,int>mpp;
    for(int i=0;i<a.size();i++){
        mpp[a[i]]++;
    }
    int lcase=0;
    int ucase=0;
    for(auto it:mpp){
        if(it.first<=90&&it.first<=90)ucase+=it.second;
        else if (it.first>=97 && it.first<=122) lcase+=it.second;
    }
    if(lcase<ucase){
        for(int i=0;i<a.size();i++){
            if(a[i]>=97&&a[i]<=122)a[i]-=32;
        }
    }
    else {
        for(int i=0;i<a.size();i++){
            if(a[i]>=65&&a[i]<=90)a[i]+=32;
        }
    }
    return a;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string a;
    cin >>a;
    cout << sol(a);
}