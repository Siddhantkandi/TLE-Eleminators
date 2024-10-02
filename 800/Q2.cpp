#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n,x;
        cin>>n>>x;

        vector<int> dis(n,0);
        for(int i=0;i<n;i++){
            cin>>dis[i];
        }

        int maxdis = INT_MIN;
        int prev = 0;

        for(int i=0;i<dis.size();i++){
            int curr = dis[i];
            maxdis = max(maxdis,curr-prev);
            prev = curr;
        }

        maxdis = max(maxdis,(x-dis[n-1])*2);

        cout<<maxdis<<endl;

    }

    return 0;
}
