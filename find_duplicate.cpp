#include <bits/stdc++.h>
using namespace std;
int duplicate(vector<int>& arr,int N){
    sort(arr.begin(),arr.end());
    for(int i=0;i<N;i++){
        if(arr[i]==arr[i+1]){
            cout << arr[i];
        }
    }
    return -1;
}
int main(){
    int N;
    cout << "Enter the number of elements in an array:";
    cin >> N;
    vector<int> arr;
    for(int i=0;i<N;i++){
        int j;
        cin >> j;
        arr.push_back(j);
    }
    cout << "Given array is:";
    for(auto it=arr.begin();it!=arr.end();++it){
        cout << *it <<" ";
    }
    cout <<endl;
    cout << "Duplicate number is:"<<endl;
    duplicate(arr,N);
    return 0;
}