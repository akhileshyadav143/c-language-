






































































#include<stdio.h>
// // int main(){
// //     int n;
// //     printf("Enter value of n :");
// //     scanf("%d",&n);
// //     if(n&1){
// //         printf("odd");
// //     }else{
// //         printf("even");
// //     }
// // }
// // #include<iostream.h>
// // using namespace std;
// // inline int add( int x,int y)
// // {
// //     return x+y;
// // }
// // int main(){
// //     int a,b;
// //     a=0,b=20;
// //     cout<<add(a,b);

// // }
// #include<iostream>
// using namespace std;
// struct data{
// int data;
// node *next,*prev;
// }
// node,*first,*temp,*ttemp;
// void init(){
//     first=temp=ttemp=NULL;
// }
// void createfirst(){
//     first=new node;
//     cout<<"enter data for first node:";
//     cout>>first->data;
//     first->next=NULL;
//     first->prev=NULL;
// }
// void addnode(){
//     ttemp=new node
//     cout<<"enter data for new node:";
//     cin>>ttemp->data;
//     ttemp->next=NULL;
//     ttemp->prev=NULL;

//     temp=first;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
// temp->next=ttemp;
// ttemp->prev=temp;

// }
// void Add_Beforefirsta(){
//     temp=new node;
//     cout<<"enter data to add before first node:";
//     cin>>temp->data;
//     temp->prev=NULL;
//     temp->next=first;
//     first->prev=temp;
//     first=temp;

// }
// void display(){
// temp=first;
// cout<<"Doubly Linked list elements:";
// while(temp!=NULL){
//     cout<<temp->data<<"";
//     temp=temp->next;
// }
// cout<<endl;
// }
// int main(){
//     init();
//     int n;
//     cout<<"enter number of nodes";
//     cin>>n;
//     if(n<=0){
//         cout<<"number of nodes should be greater then zero"<<endl;
//     }else{
//         createfirst();
//         for(int i=1;i<n;i++){
//             addnode();

//         }
//         display();

//     }
//     Add_Beforefirst();
//     display();
//     return 0;
        
// }
