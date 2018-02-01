#include<iostream>
using namespace std;
int main()
{
    int t, n, c,s,i;
    cin>>t;
    while(t)
    {
        cin>>n>>c;
        s=0;
        int d[n];
        for(i=0;i<n;i++)
        {
             cin>>d[i];
             s+=d[i];
        }
        if(s<=c)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        t--;
    }
    return 0;
}
