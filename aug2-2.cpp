#include <iostream>
using namespace std;

int main() {
    int arr[5][5];
    int m, x, y;
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            cin >> m;
            arr[i][j]=m;
            if (m==1){
                x=i+1;y=j+1;
            }
        }
    }
    int count=0;
    while (x>3){
        x--;
        count++;
    }
    while (x<3){
        x++;
        count++;
    }
    while (y>3){
        y--;
        count++;
    }
    while (y<3){
        y++;
        count++;
    }
    cout << count;
}