#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a;
    double percentage;
    for(int i=0;i<n;i++){
        cin>>a;
        percentage+=a;
    }
    percentage/=n;
    cout << fixed<<setprecision(12);
    cout <<(percentage)<<"\n";
}