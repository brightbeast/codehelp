#include<iostream>
using namespace std;

bool check(int x, int y, int n, int visited[100][100], int arr[100][100])
{
    if((x>=0 && x<n) && (y>0 && y<n) && arr[x][y]==1 &&visited[x][y]==0 )
    return 1;

    else
    return 0;
}

void solve(int arr[100][100],int visited[100][100], int x, int y, int n)
{
    if(x>n &&y>n)
    {
        return;
    }
    visited[x][y]=1;

    //for down

    x=x+1;
    y=y;
    if(check(x,y,n,visited, arr)==1)
    {
        cout<<"D";
        solve(arr,visited, x,y,n);
        visited[x][y]==0;
    }

    //left
    x=x;
    y=y-1;
    if(check(x,y,n,visited, arr)==1)
    {
        cout<<"L";
        solve(arr,visited, x,y,n);
        visited[x][y]==0;
    }

    //right
    x=x;
    y=y+1;
    if(check(x,y,n,visited, arr)==1)
    {
        cout<<"R";
        solve(arr,visited, x,y,n);
        visited[x][y]==0;
    }

    //up
    x=x-1;
    y=y;
    if(check(x,y,n,visited, arr)==1)
    {
        cout<<"U";
        solve(arr,visited, x,y,n);
        visited[x][y]==0;
    }

    visited[x][y]==0;




}


int main()
{
    int m;
    cin>>m;
    int arr[100][100];
    for(int i=0; i<100; i++)
    {
        for (int j=0; i<100; j++)
        {
            cin>>arr[i][j];
        }
    }

    int srcx=0;
    int srcy=0;

    int visited[100][100];
    for(int i=0; i<100; i++)
    {
        for (int j=0; i<100; j++)
        {
            visited[i][j]=0;
        }
    }

    solve(arr,visited,srcx,srcy,m);


    return 0;
}