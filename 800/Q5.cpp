#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;

    for(int i=0;i<t;i++){

        int n;
        cin>>n;

        vector<int> arr(n,0);

        for(int j=0;j<n;j++){
            cin>>arr[j];
        }

        int mini = INT_MAX;

        for(int j=0;j<n;j++){
            mini = min(mini,arr[j]);
        }

        if(arr[0]==mini){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}