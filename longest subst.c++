#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    string s1;
    vector<pair<int,string>>sub;
    map<char,bool>vis;
    int counter=0;
    int starting=0;
    cin>>s1;
    for(int i=0; i<s1.size(); i++)
    {
        if(!vis[s1[i]])
        {
            if(counter==0)
                starting=i;
            counter++;
            vis[s1[i]]=true;
            if(i==(s1.size()-1))
            {
                sub.push_back({counter,s1.substr(starting,counter)});
            }
        }
        else
        {
            sub.push_back({counter,s1.substr(starting,counter)});
            i-=counter;
            counter=0;
            vis.clear();
        }

    }
    sort(sub.begin(),sub.end());
    cout<<sub[sub.size()-1].second;
    return 0;
}