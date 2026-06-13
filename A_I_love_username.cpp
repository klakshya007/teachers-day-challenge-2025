#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    int score;
    cin >> score;
    
    int min_score = score;
    int max_score = score;
    int amazing_performances = 0;
    
    for (int i = 1; i < n; ++i) {
        cin >> score;
        if (score > max_score) {
            max_score = score;
            amazing_performances++;
        } else if (score < min_score) {
            min_score = score;
            amazing_performances++;
        }
    }
    
    cout << amazing_performances << endl;
    return 0;
}