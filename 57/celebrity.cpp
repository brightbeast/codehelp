// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution 
{
    private:
    
    bool knows(vector<vector<int> >& M,int a, int b)
    {
        if(M[a][b]==1)
        return true;
        else
        return false;
    }
    
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int>st;
        for(int i=0; i<n; i++)
        {
            st.push(i);
        }
        
        while(st.size()>1)
        {
            int a=st.top();
            st.pop();
            
            int b=st.top();
            st.pop();
            
            if(knows(M,a,b))
            st.push(b);
            else
            st.push(a);
        }
        
        //only 1 potential candidate
        int rowcount=0;
        //bool rowcheck=false;
        for(int i=0; i<n; i++)
        {
            if(M[st.top()][i]==0)
            rowcount++;
        }
        if(rowcount!=n)
        return -1;
        
        int colcount=0;
       // bool colcheck=false;
        for(int i=0; i<n; i++)
        {
            if(M[i][st.top()]==1)
            colcount++;
        }
        //cout<<st.top();
        
        if(colcount!=n-1)
        return -1;
        
        //if(colcheck==rowcheck)
        //return st.top();
        
        //else 
        return st.top();
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends