#include <bits/stdc++.h>
using namespace std;
int miss(vector<int>& vec,int sum1){
    int sum2;
    sum2=0;
    for(int i=0;i<vec.size();i++){
        sum2+=vec[i];
    }
    cout << "Missing number is:";
    cout << sum1-sum2;
    return -1;
}
int main(){
    int N;
    cout << "Enter the length of an array :";
    cin >> N;
    vector<int> vec;
    for(int i=0;i<N-1;i++){
        int j;
        cin >> j;
        vec.push_back(j);
    }
    cout << "array is:"<<endl;
    for(auto it=vec.begin();it!=vec.end();++it){
        cout << *it <<" ";
    }
    cout << endl;
    int sum1;
    sum1=(N*(N+1))/2;
    miss(vec,sum1);
    return 0;
}