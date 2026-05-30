#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a;
    cin>> a;
    int count =0;
    int initial=5;
    while(a!=0){
        count+=a/initial;
        a%=initial;
        initial--;
    }
    cout << count << "\n";
}