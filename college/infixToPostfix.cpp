#include<iostream>
#include<vector>
#include<stack>
using namespace std;

stack<char>st;
vector<char> postfix;
char ICP,ISP;

bool check(char icp, char isp)
{
    int income, instack;
    //seting the value of icp
    if(icp=='+' || icp=='-')
    income=1;
    if(icp=='*' || icp=='/')
    income=3;
    if(icp=='$' || icp=='^')
    income=6;
    if(icp=='(')
    income=9;

    //setting the value of isp
    if(isp=='+' || isp=='-')
    instack=2;
    if(isp=='*' || isp=='/')
    instack=4;
    if(isp=='^' || isp=='$') 
    instack=5;
    if(isp=='(' || isp==')')
    instack=0;

    if(income>instack)
    return true;
    else
    return false;

}

void InfixToPostfix(string infix)
{
    st.push(infix[0]);
    int n=infix.size();
    for(int i=1; i<n; i++)
    {
        ICP=infix[i];
        ISP=st.top();
        
        if((ICP>='A'&& ICP<='Z') || (ICP>='a' && ICP<='z'))
        {
            postfix.push_back(ICP);
        }
        //if it is having a opening bracket
        else if(ICP=='(')
        st.push('(');

        //if it is having a closing bracket
        else if(ICP==')')
        {
            while(st.top()!='(')
            {
                postfix.push_back(st.top());
                st.pop();
            }
            st.pop();
        }
        
        //else operators
        else 
        {
            bool confirm=check(ICP,ISP);
            //true-> icp>isp
            if(confirm==true)
            st.push(ICP);
            
            //false-> isp>icp
            else
            {
                while(check(ICP,ISP)!=true)
                {
                    postfix.push_back(st.top());
                    st.pop();
                    ISP=st.top();
                }
                st.push(ICP);
            }
        }
    }
}

int main()
{
    //cout<<infix;
    //cout<<endl<<postfix;
    string infix="(A+(B*C-(D/E^F)*G))";
    InfixToPostfix(infix);
    for(int i=0; i<postfix.size(); i++)
    {
        cout<<postfix[i];
    }
    return 0;
}