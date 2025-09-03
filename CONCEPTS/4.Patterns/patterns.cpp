#include <bits/stdc++.h>
using namespace std;

int main() 
{
  /* 
   1234
   1234
   1234
   1234
   
   */
   
  // int n = 4;
  //   // outer loop
  //   for(int i =1; i <= n ; i++){
  //       // inner loop     
  //       for( int j =1; j <= n; j++){
  //       cout << j << " ";
  //     }
  //       cout << endl;
  //   }
  /*
    * * * * 
    * * * * 
    * * * * 
    * * * * 
  */
  // int n =5;
  // for (int i = 1; i < n; i++){//outer
    
  //   for (int j =1; j< n; j++){//inner
  //     cout << "*" << " ";
  //   }
  //   cout << endl;
  // }

  /*
  ABCD PATTERN
    A B C D 
    A B C D 
    A B C D 
    A B C D 
  */
  
  // int n =4;
  
  // for (int i=0; i<n; i++){//outer
  // char ch = 'A';
  
  //   for (int j=0; j<n; j++){//inner
  //   cout << ch << " ";
  //   ch++; // 65 + 1 = 66 = B and so on
  //   }
  // cout << endl;
  // }

    
      
  /* 
    123
    456
    789
  */
  // In this pattern we do not reset the value, thereby we declare it outside the for loops.

//   int n = 3;
//   int val=1; 
//   for (int i=1; i <= n; i++){
    
//     for(int j=1; j<= n; j++){
//       cout << val << " ";
    
//       val++;
//     }
    
//     cout << endl;
//   }  
  
/* 
    A B C D 
    E F G H 
    I J K L 
    M N O P 
  */
  
//   int n = 4;
//   char val='A';
//   for (int i=1; i <= n; i++){
    
//     for(int j=1; j<= n; j++){
//       cout << val << " ";
    
//       val++;
//     }
    
//     cout << endl;
//   }  
  

/* Triangle pattern  
  
  * 
  * * 
  * * * 
  * * * * 
  * * * * * 
  
  */
  
//   int n=5;
  
//   for(int i=0; i<=5; i++){
    
//     for(int j=0; j<i; j++){
      
//       cout << "* " ;
//     }
    
//     cout << endl;
//   }
  
//   return 0;


 /*
    reverse integer
  
    1 
    2 1 
    3 2 1 
    4 3 2 1   
    
  */
  // int n = 4;
  
  // for(int i =0; i<n; i++){//  outerloop
  //   for(int j=i+1; j > 0; j--){// innerloop
  //     cout << j <<" ";
  //   }
  //   cout << endl;
  // }
  

   /* 
    48. Print Floyd’s triangle.
    Floyd's triangle
    1 
    2 3 
    4 5 6 
    7 8 9 10 
  */
  
  // int n=5;
  // int count = 1;
  // for (int i =0; i< n; i++){//outer loop
  
  // for(int j=0; j< i; j++){//inner loop
  //   cout << count << " ";
  //   count++;
      
  // }
  //   cout << endl;
  // }

  /*
    reverse chars
    A 
    B A 
    C B A 
    D C B A 
  */
  // int n = 4;
  
  // for(int i =0; i<n; i++){//  outerloop
  //   char val = 'A';
  //   val = val+i;
  //   for(int j=i+1; j > 0; j--){// innerloop
  //     cout << val <<" ";
  //     val=val-1;
  //   }
  //   cout << endl;
  // }

  /*  
    Reverse triangle
    111111111
     22222222
      3333333
       444444
        55555
         6666
          777
           88
            9
  */
  
  // int n = 9;
  
  // for (int i =0; i<n; i++){//outer loop
  //   // number of lines
    
  //   for(int j =0; j<i; j++){//inner loop #1
  //   //spaces      
  //     cout << " ";
  //   }
    
  //    for(int j =0; j<n-i; j++){//inner loop #1
  //   //spaces      
  //     cout << (i+1);
  //   }
  //   cout << endl; 
  // }

  /*  
    PYRAMID PATTERN
       1
      121
     12321
    1234321
  */
  
  // int n=4;
  
  // for(int i=0; i<n; i++){//outer loop
    
  //   //spaces
  //   for(int j=n-i-1; j>0; j--){
  //     cout << " ";
  //     // cout << j;
  //   }
    
  //   //nums set1
  //   for(int j=0; j<i+1; j++){
  //     cout << j+1;
  //   }
    
    
  //   //nums set2
  //   for(int j=i; j > 0; j--){// innerloop
  //     cout << j;
  //   }
    
    
  //   cout << endl;
  // }

   /*  
    Hollow pyramid
      *
     * *
    *   *
   *     *
  *       *
   *     *
    *   *
     * *
      *
  */
  
  // int n=5;
  
  // for(int i=0; i<n; i++){//outer loop
  //   //top portion only
  //   //spaces
  //   for(int j=n-i-1; j>0; j--){
  //     cout << " ";
  //   }
  //     cout << "*";
    
  //   if(i!=0){
  //     // odd spaces
  //      for(int j=2*i-1; j>0; j--){
  //     cout << " ";
  //   }
      
  //     cout << "*";
  //   }
    
    
  //   cout << endl;
  // }
  // //bottom loop
  // for(int i=0; i<n-1; i++){
    
  //   // spaces
  //   for(int j=0; j<i+1; j++){
  //     cout << " ";
  //   }
  //   cout<< "*";
    
  //   if(i!=n-2){
  //   //spaces odd 
  //   for(int j =2*(n-i)-5; j>0; j--){
  //     cout << " ";
  //   }
    
  //   cout << "*";
  //   }  
    
    
  //   cout << endl;
  // }


return 0;
}