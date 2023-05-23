#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> ver = {1,2,3,4,5,6};

    vector<int> copy = ver;

    copy[0] = 0;
    copy [2] = 0;

    for(auto x: ver)
        cout<<x<<" ";
    return 0;
}
