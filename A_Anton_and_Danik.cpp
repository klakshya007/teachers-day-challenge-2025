#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int a;
    cin >> a;
    cin.tie(0);
    string s;
    cin >> s;
    int acount=0;
    int dcount=0;
    for(int i=0;i<a;i++){
        s[i]=='A'?acount++:dcount++;
    }
    if(acount>dcount)cout << "Anton" << "\n";
    else if(acount<dcount)cout << "Danik" << "\n";
    else cout << "Friendship" << "\n";
}