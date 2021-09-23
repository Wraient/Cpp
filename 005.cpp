#include <iostream>
using namespace std;

int main()
{
    // for(int i=1; i<10001; i++){
    //     if(i%3==0){
    //         continue;
    //     }
    //     else{
    //         cout << i << "\n";
    //     }
    // }

    // int num;
    // cout << "Entre a number : ";
    // cin >> num;
    // for(int i=2; i<num; i++){
    //     if((num%i)==0){cout << "Non-Prime"; break;}
    //     else if(i==num-1){cout << "Prime";}
    // }

    int num, num1, max, min;
    cout << "Entre number 1 : ";
    cin >> num;
    cout << "Entre number 2 : ";
    cin >> num1;
    if(num<num1){max = num1; min = num;}
    else{max = num; min = num1;}
    for(int i=min; i<max; i++){
        for(int j=2; j<i; j++){
            if((i%j)==0){break;}
            else if(j==(i-1)){
                cout<<"LOL - " << i << "\n";
            }
        }
    }


    return 0;
} 