 //#include<stdio.h>
 //int main(){
//     int arr[5]={4,5,3,4,5};
//     int xor=0;
//     for(int i=0;i<5;i++)
//       xor=xor^arr[i];

//  printf("%d",xor);
// }

//revers in a bcd code in using xor
// int a=5;
//int b=3;
//int result;
//printf("5 XOR 3 = %d",result);
 //}
//   int arr[4]={1,2,4,5};
//  int xor=0;
//  int xor1=0;
//  for(int i=1;i<=5;i++){
//    xor=xor^i;
//  }
//  for(int i=0;i<4;i++){
//  xor1=xor1^arr[i];
//  }
//  printf("%d",xor^xor1);
// }

//recurstion program

// #include<stdio.h>
// void sum(int a){
//  if(a==0){
  
//   return;
//  }
//  printf("%d",a);
//  sum(a-1);
 
// }
// int main(){
//   sum(5);
// }

///sum 1-5
  
//#include<stdio.h>
//    int sum(int a){
//    if(a==0){
//      return 0;
//    } 
//      return a+sum(a-1);

//   }

//   int main(){ 
//       int data= sum(5);
//    printf("%d",data);
//  }
  
//  ////factotial in recurstion

//  #include<stdio.h>
//    int fact(int a){
//    if(a==0 || a==1){
//      return 1;
//    } 
//      return a*fact(a-1);

//   }

//   int main(){ 
//       int data= fact(5);
//    printf("%d",data);
//  }

//power

//  #include<stdio.h>
//    int power(int x,int n){
//    if(n==0){
//      return 1;
//    } 
//      return x*power(x,n-1);

//   }

//   int main(){ 
//       int data= power(2,3);
//    printf("%d",data);
//  }

// #include<stdio.h>
//    int sum(int arr[],int n){
//    if(n==0){
//      return 0;
//    } 
//      return arr[n-1]+sum(arr,n-1);

//   }

//   int main(){ 
//       int arr[5]={1,2,3,4,5};0
//       int n=5;
//    int data= sum(arr,n);
//    printf("%d",data); 
//  }
