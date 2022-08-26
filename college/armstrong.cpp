#include<iostream>
#include<math.h>
using namespace std;
void armstrong()
{
    cout<<endl<<"Armstrong numbers are "<<endl;
    int sum=0;
    int count;

    int i=1000;
    do
    {
        if(10>i && i>0)
        count=1;
        if(100>i && i>9)
        count=2;
        if(1000>i && i>99)
        count=3;

        int num=i;
        int champ=count;
        while(count>0)
        {
            int r=num%10;
            int mul=pow(r,champ);
            sum=sum+mul;
            num=(num/10);
            count--;
            // if(i==153)
            // {
            //     cout<<champ<<" "<<r<<" "<<mul<<" "<<sum<<endl;
            // }
        }
        
        if(sum==i){
        cout<<sum<<" ";
        }  
        sum=0;  
        i--;
    }while(i>0);

    
}
int main()
{
    armstrong();
    //cout<<pow(5,3);

    return 0;
}