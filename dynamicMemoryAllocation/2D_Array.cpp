// allocating 2D dynamic arrays
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int **arr;
    int rows,columns;
    cin>>rows>>columns;
    // create array of row heads
    arr=new int*[rows];
    // creating 2d array
    for(int i=0;i<rows;i++)
    arr[i]=new int[columns];
    
    // taking input and print elements

    int val=1;
    
    for(int i=0;i<rows;i++)
    {
    for(int j=0;j<columns;j++)
    {
    arr[i][j]=val;
    val++;
    cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }

    return 0;
}