#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
    string s;
    cin >> s;
    int n=s.size();
    if(n>10){
    cout << s[0] << n-2 <<s[n-1] <<"\n";
    }
    else cout << s  << "\n";
}
}