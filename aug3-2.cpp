#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long n;
    cin >> n;
    int luckyCount=0;
    while(n!=0){
        int rem = n%10;
        n=n/10;
        if(rem==4 || rem==7)luckyCount++;
    }
    if(luckyCount==4 || luckyCount==7)cout<<"YES";
    else cout << "NO";
}