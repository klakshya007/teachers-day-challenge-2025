#include <iostream>
using namespace std;

int sol(int k, int n, int w){
    int req=k*w*(w+1)/2;
    if(req<n)return 0;
    return req-n;
}

int main(){
    int k,n,w;
    cin >> k  >> n>> w;
    cout << sol(k,n,w) << "\n";
}