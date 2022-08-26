#include<iostream>
using namespace std;
int main()
{
   string code[5];
   cin>>code[5];
   // Here I have to add the if condition for the length restriction 
   if(code[0]={B,C,D,F,G,H,J,K,L,M,N,P,Q,R,S,T,V,W,X,Z})
   {
       if(code[1]={A,E,I,O,U})
       {
           if(code[2]={B,C,D,F,G,H,J,K,L,M,N,P,Q,R,S,T,V,W,X,Z})
           {
               if(code[3]={1,3,5,7,9})
               {
                    if(code[4]={2,4,6,8,0}) 
                    {
                        cout<<"Your can go";
                    }  
                    else
                    {
                        cout<<"Invalid input";
                    }
               }
               else
               {
                   cout<<"Invalid input";
               }
           }
           else
           {
               cout<<"Invalid input";
           }

       }
       else
       {
           cout<<"Invalid input";
       }
   }
   else
   {
       cout<<"Invalid input";
   }
   
   
   
   
   
   
   
//    for(int i=0; i<5; i++)
//    {
//        cin>>code[i];
//    }


    // for(int i=0; i<5; i++)
    // {
    //     cout<<code[i];
    // }



   return 0;
}