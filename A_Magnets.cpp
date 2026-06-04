#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long n;cin >>n;
    string prev;
    cin >> prev;
    int count =0;
    for(long i=1;i<n;i++){
        string curr;cin>>curr;
        if(curr!=prev){
            count++;
            prev=curr;
        }
    }
    cout << ++count << "\n";
}