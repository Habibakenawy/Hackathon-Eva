
#include <bits/stdc++.h>
using namespace std;
vector <int> num = { 3, 34, 4, 12, 5, 2 };
bool summa(int n,int sum)
{
    if(sum==0)
        return true;
    if(n==0)
        return false;

    if(num[n-1]>sum)
        return summa(n-1,sum);

    return summa(n-1,sum)||summa(n-1,sum-num[n-1]);

}

int main()
{
    int sum;
    int n = 6;
    cin>>sum;
    sort(num.begin(),num.end());
    if (summa(n, sum) == true)
        cout << "true";
    else
        cout << "false";
    return 0;
}


