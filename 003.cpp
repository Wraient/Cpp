#include <iostream>
using namespace std;

int main()
{
    // int a,b,c;
    // cin>>a>>b>>c;
    // if(a>b){
    //     if(a>c){
    //         cout<<a;
    //     }
    //     cout<<c;
    // }
    // else if (b>c){
    //     cout<<b;
    // }
    // else{
    //     cout<<c;
    // }

    int num;
    cout << "Enter a number : ";
    cin>>num;
    if((num%2)==0){
        cout << "Even";
    }
    else{
        cout << "odd";
    }

    return 0;
}