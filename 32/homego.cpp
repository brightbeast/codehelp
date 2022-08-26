#include<iostream>
using namespace std;

void reachome(int start, int end)
{
    if(start==end)
    {
        cout<<"reached home";
        return ;
    }

    cout<<start<<"-"<<end;

    start++;
    reachome(start,end);


}

int main()
{
    int start=1;
    int dest=10;
    reachome(start, dest);


    return 0;
}

// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"Chalja kamine"<<endl;
//     return 0;
// }