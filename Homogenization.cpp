#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n;
    cin>> n;

    string str1, str2;
    getline(cin,str1);
    getline(cin,str1);
    getline(cin,str2);

    int res = 0;

    for(int i = 0; i< n; ++i)
    {
        int j = i;
        if(str1[i] != str2[i]){
            res+=1;
            j++;
            if(j < n){
                if(str1[j] == str2[i])
                    swap(str1[i],str1[j]);
                else{
                    if(str1[i] == '0')
                        str1[i] = '1';
                    else
                        str1[i] = '0';
                }
            }
            else{
                if(str1[i] == '0')
                    str1[i] = '1';
                else
                    str1[i] = '0';
            }

        }
    }

    cout<< res<<endl;



    return 0;

}