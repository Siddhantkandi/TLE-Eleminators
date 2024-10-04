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

        unordered_map<int,int> mpp;

        for(int j : arr){
            mpp[j]++;
            if(mpp.size()>2){
                break;
            }
        }

        if(mpp.size()<2){
            cout<<"Yes"<<endl;
        }
        else if(mpp.size()==2){
            auto it1  = mpp.begin();
            auto it2 = next(mpp.begin());

            if(abs(it1->second - it2->second) <=1 ){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}