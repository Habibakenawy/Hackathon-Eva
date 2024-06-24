#include <bits/stdc++.h>

using namespace std;
bool anagrams(string s1,string s2)
{
    if(s1.size()!=s2.size())return false;
    for(int i=0; i<s1.size(); i++)
    {
        for(int j=0; j<s2.size(); j++)

        {
            if(tolower(s1[i])==tolower(s2[j]))
              {s2.erase(j,1);
                break;}
            if(j==(s2.size()-1))
                return false;
        }

    }
    return true;

}
int main()
{
    ios::sync_with_stdio(false);
    string s1,s2;
    cin>>s1>>s2;
    cout<<anagrams(s1,s2);

}