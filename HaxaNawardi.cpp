#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    vector<string> ver(t,"NULL");
    for(auto s: ver)
        cout<< s<<" ";
    cout<<endl;
    for(int i = 0; i<t; i++){
        cin>>ver[i];
    }

    for(auto s: ver) {
        for (auto x: s)
            cout << x << "_";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}