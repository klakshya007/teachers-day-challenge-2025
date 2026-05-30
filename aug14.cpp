#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[],int low,int mid, int high){
    vector<int>vec;
    int left=low;
    int right=mid+1;
    int sum=0;
    while(left<=mid && right<=high){
        if(arr[left]>=arr[right]){
            vec.push_back(arr[right]);
            right++;
            sum+=arr[right];
        }
        else {
            vec.push_back(arr[left]);
            left++;
            sum=arr[left];
        }
    }
    while(left<=mid){
        vec.push_back(arr[left]);
        left++;
        sum+=arr[left];
    }
    while(right<=high){
        vec.push_back(arr[right]);
        right++;
        sum+=arr[right];
    }
    for(int i=low;i<high;i++){
        arr[i]=vec[i-low];
    }
}

void divide(int arr[],int low,int high){
    if(low<high){
        int mid = (low+high)/2;
        divide(arr,low,mid);
        divide(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}

int main(){
    int a;
    cin >> a;
    int arr[a];
    int totalSum=0;
    for(int i=0;i<a;i++){
        int b;
        cin >> b;
        arr[i]=b;
        totalSum+=b;
    }
    divide(arr,0,a-1);
    int sum=0;
    int i=0;
    for(int i;i<a;i++){
        sum+=arr[i];
        int left = totalSum-sum;
        if(sum>left)break;
    }
    cout << i+1 << "\n";
    return 0;
}
