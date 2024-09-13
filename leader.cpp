#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
    vector<int> vec;
    vector<int> ans;
    int N;
    cout << "Enter the number of elements in array :";
    cin >> N;
    for(int i=0;i<N;i++){
        int j;
        cin >> j;
        vec.push_back(j);
    }
    cout << "Array:"<< endl;
    for(auto it=vec.begin();it!=vec.end();it++){
        cout << *it <<" ";
    }
    cout <<endl;
    cout << "Leaders is:";
    int max_element=vec[N-1];
    for(int i=N-1;i>=0;i--){
        if(vec[i]>=max_element){
            ans.push_back(vec[i]);
        }
        max_element=max(vec[i],max_element);
    }
    reverse(ans.begin(),ans.end());
    for(auto it=ans.begin();it!=ans.end();it++){
        cout << *it <<" ";
    }
    return 0;
}
