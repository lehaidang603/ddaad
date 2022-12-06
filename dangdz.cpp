#include <iostream>

using namespace std;
long long a[1000],i,s,n;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++){cin>>a[i];}
    for(i=1;i<=n;i++){
        if(a[i]<0){s-=a[i];}
        else{s+=a[i];}}
    cout<<s;
    return 0;
}
