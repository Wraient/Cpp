#include <iostream>
using namespace std;

int main()
{
    // cout << "Entre number of columns : ";
    // int columns;
    // cin >> columns;
    // cout << "\n";
    cout << "Enter number of rows : ";
    int rows;
    cin >> rows;
    cout << "\n";

    // for(int i=0; i<rows; i++){
    //     for(int j=0; j<columns; j++){
    //         cout << "* ";
    //     }
    //     cout << "\n";
    // }

    // cout << "\n";

    // for(int i=0; i<rows; i++){
    //     if(i==0 || i==(rows-1)){
    //         for(int j=0; j<columns; j++){
    //             cout << "* ";
    //         }
    //         cout << "\n";
    //     }
    //     else{
    //         for(int j=0; j<columns; j++){
    //             if(j==0 || j==(columns-1)){
    //                 cout << "* ";
    //                 if(j==(columns-1)){
    //                     cout << "\n";
    //                 }
    //             }
    //             else{
    //                 cout << "  ";
    //             }
    //         }
    //     }
    // }

    // cout << "\n";

    // for(int i=rows; i>0; i--){
    //     if(rows<=1){cout<<"*"; break;}
    //     int num = ((rows)-(i));
    //     for(int j=1; j<=num; j++){
    //         cout << " ";
    //     }
    //     for(int k=0; k<i; k++){
    //         cout << " *";
    //     }
    //     cout << "\n";
    // }

    // cout << "\n";

    // int spaces = ((((rows*2)-1)*2)-1); // 4 -> 6,13 ; 5 -> 8,17
    // for(int i=1; i<rows+1; i++){
    //     for(int j=1; j<=i; j++){
    //         cout << "* ";
    //     }
    //     for(int k=spaces; k>1; k--){
    //         cout << " ";
    //     }
    //     spaces -= 4;
    //     for(int l=0; l<i; l++){
    //         cout << " *";
    //     }
    //     cout << "\n";
    // }
    // spaces = 0;
    // for(int i=1; i<rows+1; i++){
    //     for(int j=0; j<((rows+1)-i); j++){
    //         cout << "* ";
    //     }
    //     for(int k=spaces; k>0; k--){
    //         cout << " ";
    //     }
    //     spaces += 4;
    //     for(int l=0; l<(rows+1)-i; l++){
    //         cout << " *";
    //     }
    //     cout << "\n";
    // }

    return 0;
}