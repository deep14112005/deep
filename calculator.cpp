#include <iostream>
using namespace std;

int main (){
   /* #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt", "w", stdout);
    #endif */ 
    int n1,n2;
    cout<<"input 2 number"<<endl;
    cin >>n1>>n2;
    char op;
    cout<<"input an operator"<<endl;
    cin>>op;
    switch(op)
    {
        case '+':
        cout<<n1+n2<<endl;
        break;

        case '-':
        cout<<n1-n1<<endl;
        break;

        case '*':
        cout<<n1*n2<<endl;
        break;
        default:
        cout<<"still i am learning"<<endl;
    }
    return 0;
}