#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n;
 cin>>n;
vector<int>v(n);
for(int i=0;i<5;i++)
{
    cin>>v[i];
}
v.push_back(50);

sort(v.begin(),v.end());

for(int i=0;i<v.size();i++)
{

    cout<<v[i]<<" ";
}
cout<<endl;

return 0;
}
