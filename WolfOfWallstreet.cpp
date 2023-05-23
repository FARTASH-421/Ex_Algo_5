#include <bits/stdc++.h>
using namespace std;
int main(){
    int value, n;
    cin>> n >>value;
    vector<long long> ver(n,-1);
    for(int i = 0; i< n; ++i)
        cin>>ver[i];

    int sum = ver[0];
    long firstValue = ver[0];
    bool check = true;
    vector<long long > copy = ver;
    copy[0] = 0;

    while (check){
        double max= 0;
        int j = 0;
        bool  che = false;
        for(int i = 0; i< n; i++) {

            if (copy[i] == 0)
                continue;

            else {
                long long val = sum + copy[i];
                double temp =(double) firstValue / val;
                if (max < temp && !che ) {
                    max = temp;
                    j = i;
                }
                if (val >= value) {
                    if (max > temp) {
                        max = temp;
                        j = i;
                        che = true;
                    }
                }
            }
        }

        sum += copy[j];
        copy[j] = 0;
        if(sum >= value)
            check = false;
    }

    for(int i = 0; i< n; i++){
        if(copy[i] == 0)
            cout<< i<<" ";
    }
    return 0;
}