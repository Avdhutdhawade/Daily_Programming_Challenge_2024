#include <bits/stdc++.h>
using namespace std;
int arrange(vector<int> vec){
    int low=0;
    int high=vec.size()-1;
    int mid=0;
    while(mid<=high){
        if(vec[mid]==0){
            swap(vec[mid],vec[low]);
            low++;
            mid++;
        }
        else if(vec[mid]==1){
            mid++;
        }
        else{
            swap(vec[mid],vec[high]);
            high--;
        }
    }
    for(auto it=vec.begin();it !=vec.end();++it){
        cout << *it << " ";
    }
return -1;
}
int main(){
    int t;
    cout << "Enter the number of elements in array(0,1,2):";
    cin >> t;
    vector<int> vec;
    for(int i=0;i<t;i++){
        int j;
        cin >> j;
        vec.push_back(j);
    }
    cout << "array is:" << endl;
    for(auto it=vec.begin();it !=vec.end();++it){
        cout << *it << " ";
    }
    cout << endl;
    cout << "sorted array is" << endl;
    arrange(vec);
    return 0;
}
