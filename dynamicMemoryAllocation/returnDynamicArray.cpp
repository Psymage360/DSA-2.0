// returning dynamic arrays
#include<bits/stdc++.h>
using namespace std;
int* fun(){
    int *a=new int[5];
    for(int i=0;i<5;i++)
    cin>>a[i];
    return a;
}
int main()
{
    int *b= fun();
    int n=sizeof(b)/sizeof(int);
    cout<<n<<endl;
    for(int i=0;i<5;i++)
    cout<<b[i]<<endl;
    return 0;
}