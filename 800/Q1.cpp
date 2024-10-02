#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;

        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            cin>>ans[i];
        }
        if(k==1){
            int increasing = 1;
            for(int i=1;i<n;i++){
                if(ans[i-1]> ans[i]){
                    cout<<"No"<<endl;
                    increasing = 0;
                    break;
                }
            }
            if(increasing){
                cout<<"Yes"<<endl;
            }
        }
        else if(k>=2){
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}
