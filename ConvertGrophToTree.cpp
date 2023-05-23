#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pii;
int main(){
    int n, m, cost;
    cin>>n>>m;
    set<ll> lis;
    vector<pair<int,pair<pii,int>>> graph;
    pair<ll,ll> p;

    for(int i= 0; i< m; ++i){

        cin>> p.first>> p.second>> cost;
        pair<pii,int>ps;
        ps.first = p;
        ps.second = i;
        pair<int,pair<pii,int>> add;
        add.first = cost;
        add.second = ps;
        graph.push_back(add);

    }
    sort(graph.begin(),graph.end());

    for(auto s: graph){
        cout<<s.first<<"\t< "<< s.second.first.first<<","<<s.second.first.second<<" > "<<s.second.second<<"\n";
        if(lis.empty()){
            lis.insert(s.second.first.first);
            lis.insert(s.second.first.second);
        }else {
//            bool check1 = false, check2 = false;
//            for (auto x: lis) {
//                if (x == s.second.first)
//                    check1 = true;
//                if (x == s.second.second)
//                    check2 = true;
//            }
//            if(check1 && check2){
//                continue;
//            }
//            else{
//                lis.insert(s.second.first);
//                lis.insert(s.second.second);
//            }
        }
    }

    return 0;
}
