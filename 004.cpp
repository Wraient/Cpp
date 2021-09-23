#include <iostream>
using namespace std;

int main(){
    // for(int i=0; i<10; i++){
    //     cout<< "Hello world " << i << endl;
    // }
    // int i=0;
    // while(i<5){
    //     cout << "hello " << i << endl;
    //     i++;
    // }

    // Fibonacci in c++
    int num = 0;
    cout << "Entre a number : ";
    cin >> num;
    cout << endl;
    int a, b, c;
    a = 0;
    b = 1;
    c = (a+b);
    for(int i = 0; i<num; i++){
        cout << a << " ";
        a = b;
        b = c;
        c = (a+b);
    }
    return 0;
}