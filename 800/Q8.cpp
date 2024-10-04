#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;

    for(int i=0;i<t;i++){

        int n,k;
        cin>>n>>k;

        vector<int> arr(n,0);

        for(int j=0;j<n;j++){
            cin>>arr[j];
        }

        string ans = "No";

        for(int j=0;j<n;j++){
            if(arr[j]==k){
                ans = "Yes";
                break;
            }
        }

        cout<<ans<<endl;


        
    }

    return 0;
}