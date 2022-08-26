/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the cash"<<endl;
    cin>>n;

    //for no. of 100 rupees
    int m=n/100;
    cout<<"The number of 100 rupee cash is"<<" "<<m <<endl;

    //for no. of 20 rupees
    int o=n-(m*100);
    int p=o/20;
    cout<<"The number of 20 rupee cash is"<< " "<<p <<endl;
    
    //for no. of 1 rupees
    int q=o-p*20;
    cout<<"The number of 1 rupee cash is"<<" "<<q<<endl;

    return 0;
}*/

#include<iostream>
using namespace std;
int main()
{
    int n,m,p,o,q;
    cout<<"Enter the cash"<<endl;
    cin>>n;
    switch(1)
    {
    case 1:{ m=n/100;
    cout<<"The number of 100 rupee cash is"<<" "<<m <<endl;}

    case 2:{o=n-(m*100);
     p=o/20;
    cout<<"The number of 20 rupee cash is"<< " "<<p <<endl;}

    case 3: { q=o-p*20;
    cout<<"The number of 1 rupee cash is"<<" "<<q<<endl;}
    break;

    default: cout<<"Enter the valid no."<<endl;
    break;
    }
    return 0;
}