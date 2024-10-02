#include <bits/stdc++.h>
using namespace std;

int main() {
    // cout<<"Number of testcases are : "<<endl;
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        string s;
        // for(int j=0;j<n;j++){
        //     cout<<"Enter the character"<<endl;
        //     char ch;
        //     cin>>ch;
        //     s+= ch;
        // }
        cin>>s;

        int count=0;
        int consecutive = 0;
        for(int j=0;j<n;j++){
            if(s[j]=='.'){
                consecutive++;
                if(consecutive>=3){
                    cout<<2<<endl;
                    break;
                }
                count++;
            }
            else{
                consecutive=0;
            }
        }
        if(consecutive<3){
            cout<<count<<endl;
        }
    }

    return 0;
}
