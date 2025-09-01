#include <bits/stdc++.h>
using namespace std;

int main(){

    int n=5;

// *
// **
// ***
// ****
// *****

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

//     *
//    ***
//   *****
//  *******
// *********

    // for(int i=0;i<n;i++){
    //     for(int k=0;k<(n-i-1);k++) cout<<" ";
    //     for(int j=0;j<(2*i +1);j++) cout<< "*";
    //     cout<<endl;
    // }

// *******
// *     *
// *     *
// *     *
// *******

    // for(int i=0;i<n;i++){
    //     cout<<"*";
    //     for(int j=0;j<n;j++){
    //         if(i==0 || i==n-1){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<"*";
    //     cout<<endl;
    // }

// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++) cout<<"*";
    //     for(int k=0;k<n-i-1;k++) cout<<" ";
    //     for(int z=0;z<n-i-1;z++) cout<<" ";
    //     for(int y=0;y<=i;y++) cout<<"*";
    //     cout<<endl;
    // }
    // for(int i=0;i<n-1;i++){
    //     for(int j=0;j<n-i-1;j++) cout<<"*";
    //     for(int k=0;k<=i;k++) cout<<" ";
    //     for(int y=0;y<=i;y++) cout<<" ";
    //     for(int z=0;z<n-i-1;z++) cout<<"*";
    //     cout<<endl;
    // }

//     *        
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++) cout<<" ";
        for(int k=0;k<=i;k++) cout<<"*";
        for(int l=0;l<i;l++) cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=i;j++) cout<<" ";
        for(int k=0;k<n-i-1;k++) cout<<"*";
        for(int l=0;l<n-i-2;l++) cout<<"*";
        cout<<endl;
    }



    return 0;
}