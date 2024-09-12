#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>& arr1,vector<int>& arr2,int N,int M){
    int high=N-1;
    int low=0;
    while(high>=0 && low<=M){
        if(arr1[high]>=arr2[low]){
            swap(arr1[high],arr2[low]);
            high--;
            low++;
        }
        else{
            break;
        }
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
}
int main(){
    vector<int> arr1;
    vector<int> arr2;
    int N;
    int M;
    cout << "Enter the number of elements in array 1:";
    cin >> N;
    cout << "Enter the number of elements in array 2:";
    cin >> M;
    cout << "Enter the elements of array 1:";
    cout << endl;
    for(int i=0;i<N;i++){
        int j;
        cin >> j;
        arr1.push_back(j);
    }
    cout << "Enter the elements of array 2:";
    cout << endl;
    for(int i=0;i<M;i++){
        int j;
        cin >> j;
        arr2.push_back(j);
    }
    cout << "Array1:"<< endl;
    for(auto it=arr1.begin();it!=arr1.end();it++){
        cout << *it <<" ";
    }
    cout <<endl;
    cout << "Array2:"<<endl;
    for(auto it=arr2.begin();it!=arr2.end();it++){
        cout << *it <<" ";
    }
    cout <<endl;
    cout <<"merging of sorted arrays";
    merge(arr1,arr2,N,M);
    cout << endl;
    cout << "Array1:"<< endl;
    for(auto it=arr1.begin();it!=arr1.end();it++){
        cout << *it <<" ";
    }
    cout <<endl;
    cout << "Array2:"<<endl;
    for(auto it=arr2.begin();it!=arr2.end();it++){
        cout << *it <<" ";
    }
    return 0;
}
