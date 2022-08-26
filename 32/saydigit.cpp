
//Solving the question without using the recursion

/*#include<iostream>
using namespace std;

int saydigit(int a)
{
    for(int i=a; i>1; i++)
    {
        string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"}; 
        int divisor=i%10;
        for(int j=0; j<10; j++)
        {
            if(j==divisor)
            {
                cout<<arr[j]<<endl;
            }
        }
        i=(i/10)-1;
    }
}

int main()
{
    int n;
    cin>>n;
    saydigit(n);

    return 0;
}
*/


#include<iostream>
using namespace std;

void namecall(int a)
{
    if(a==0)
    return ;

    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int digit=a%10;
    a=a/10;

    namecall(a);

    cout<<arr[digit]<<endl;

}

int main()
{
    int n;
    cin>>n;
    namecall(n);


    return 0;
}