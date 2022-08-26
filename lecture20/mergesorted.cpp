/*#include<iostream>
#include<vector>
using namespace std;

vector<int> arr(vector<int>v)
{
    for(int i=0; i<v.size(); i++)
    {
        cin>>v[i];
        }
}

void print(vector<int>v)
{
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i];
    }
}

int main()
{
    vector<int>a;
    vector<int> arr1[]= arr(a);

    print(arr1);

    return 0;
}
*/


#include<iostream>
#include<vector>
using namespace std;

void merge(int arr1[], int m, int arr2[], int n, int arr3[])
{
    int i=0, j=0, t=0;
    for(t=0; i<m && j<n; t++)
    {
        if(arr1[i]<arr2[j])
        {arr3[t]=arr1[i];
        i++;}
       else if(arr2[j]<arr1[i])
        {arr3[t]=arr2[j];
        j++;}

        else
        {
            i++; 
            j++;
        }
    }

     //copy element of 1st array

        while(i<m)
        {
            arr3[t]=arr1[i];
            //cout<<arr3[t]<<" "<<t<<endl;
            i++;
            t++;
        }

        //copy element of 2nd array

        while(j<n)
        {
            arr3[t]=arr2[j];
           // cout<<arr3[t]<<" "<<endl;
            j++;
            t++;
        }
}

void print(int arr3[], int t)
{
    for(int i=0; i<t; i++)
    {
       cout<<arr3[i]<<" ";
    }
}


int main()
{
    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};
    int arr3[8]={0};

    merge(arr1, 5, arr2, 3,arr3);

    print(arr3, 8);
    return 0;
}