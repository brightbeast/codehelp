#include<iostream>
#include<math.h>
using namespace std;

void armstrong()
{
    cout<<endl<<"Armstrong numbers are "<<endl;
    int sum=0;
    int count=0;

    for(int i=999; i>0; i--)
    {
        if(10>i>0)
        count=1;
        if(100>i>9)
        count=2;
        if(1000>i>99)
        count=3;

        while(count>0)
        {
            int num=i;
            int r=num%10;
            int mul=pow(r,count);
            sum+=mul;
            num=(num/10);
            count--;
        if(i==153)
        cout<<endl<<sum<<endl;
        }
        if(sum==i)
        //cout<<sum<<" ";
        sum=0;

        
    }

    
}

void palindrome()
{
    int sum=0;
    cout<<endl<<"Palindrome numbers are"<<endl;
    int i=1000;
    do{
        for(int j=i; j>0; j--)
        {
            int r=j%10;
            sum=sum*10+r;
            j=(j/10)+1;
        }
        if(sum==i)
        cout<<i<<" ";
        sum=0;
        i--;
    }
    while(i>0);
}



int main()
{
    armstrong();
    palindrome();

    return 0;
}