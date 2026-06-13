#include<iostream>
using namespace std;

bool is_prime(int n){
    if(n<=1)return false;

    if(n==2)return true;
    
    if(n%2==0)return false;

    for(int i=3;i*i<=n;i+=2){
        if(n%i==0)return false;
    }
    return true;
}

int main(){
    int n,m;
    cin>>n>>m;
    int next_prime=n+1;
    while(!is_prime(next_prime)){
        next_prime++;
    }
    if(next_prime==m)cout << "YES";
    else cout << "NO";
}