#include <bits/stdc++.h>
using namespace std;

int main() 
{
    
    int n=4;
    
    /*
    Square pattern - numbers
    
    1234
    1234
    1234
    1234
    */
    
    // for(int i=1;i<=n;i++){
    //   for(int j=1;j<=n;j++){
    //     cout<<j;
    //   }
    //   cout<<endl;
    // }
    
    
    /*
    Square pattern - alphabets
    
    ABCD
    ABCD
    ABCD
    ABCD
    */
    
    // for(int i=0;i<n;i++){
    //   char ch='A';
    //   for(int j=0;j<n;j++){
    //     cout<<ch;
    //     ch++;
    //   }
    //   cout<<endl;
    // }
    
    /*
    Triangle patter with numbers
    1
    22
    333
    4444
    */
    
    // for(int i=0;i<n;i++){
    //   for(int j=0;j<=i;j++){
    //     cout<<i+1;
    //   }
    //   cout<<endl;
    // }
    
    /*
    Trangular reverse number pattern
    1 
    21
    321
    4321
    */
    
    // for(int i=0;i<n;i++){
    //   for(int j=i+1;j>0;j--){
    //     cout<<j;
    //   }
    //   cout<<endl;
    // }
    
    /*
    Reverse number rectangle
          i  Spaces(i) Numbers(n-i)
    1111  0    0       4
     222  1    1       3 
      33  2    2       2 
       4  3    3       1 
    */
    
    // for(int i=0;i<n;i++){
    //   for(int k=0;k<=i;k++) cout<< " ";
    //   for(int j=0;j<(n-i);j++){
    //     cout<<i+1;
    //   }
    //   cout<<endl;
    // }
    
    /*
    Pyramid
            i   S   N1  N2
       1    0   3   1   0
      121   1   2   2   1
     12321  2   1   3   2
    1234321 3   0   4   3
    */
    
    // for(int i=0;i<n;i++){
    //   for(int k=0;k<n-i-1;k++){
    //     cout<<" ";
    //   }
    //   for(int j=0;j<=i;j++){
    //     cout<<j+1;
    //   }
    //   for(int l=0;l<i;l++){
    //     cout<<l+1;
    //   }
    //   cout<<endl;
    // }
    
    /*
    Hollow diamond
    
       *
      * *
     *   *
    *     *
     *   *
      * *
       *
       
      
    
    */
    // //top
    // for(int i=0;i<n;i++){
    //   for(int j=0;j<n-i-1;j++) cout<< " ";
    //   cout<<"*";
    //   if(i!=0){
    //     for(int k=0;k<2*i-1;k++) cout<<" ";
    //     cout<<"*";
    //   }
    //   cout<<endl;
    // }
    // //bottom
    // for(int i=n-2;i>=0;i--){
    //   for(int j=0;j<n-i-1;j++) cout<<" ";
    //   cout<<"*";
    //   if(i!=0){
    //     for(int k=0;k<2*i-1;k++) cout<<" ";
    //     cout<<"*";
    //   }
    //   cout<<endl;
    // }
    
    /*
    Butterfly pattern 
    
    *      *
    **    **
    ***  ***
    ********
    ********
    ***  ***
    **    **
    *      *
    
    */
    
    for(int i=0;i<n;i++){
      for(int j=0;j<=i;j++) cout<<"*";
      
      for(int k=0;k<2*n-2*i-2;k++) cout<<" ";
      
      for(int l=0;l<=i;l++) cout<<"*";
      
      cout<<endl;
    }
    
    for(int i=0;i<n;i++){
      for(int j=0;j<n-i;j++) cout<<"*";
      
      for(int k=0;k<2*i;k++) cout<<" ";
      
      for(int l=0;l<n-i;l++) cout<<"*";
      
      cout<<endl;
    }
    
  
  return 0;
    
}
