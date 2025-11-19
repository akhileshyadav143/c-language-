
// //#include<stdio.h>
// // // int main(){
// // //     int n;
// // //     printf("Enter value of n :");
// // //     scanf("%d",&n);
// // //     if(n&1){
// // //         printf("odd");
// // //     }else{
// // //         printf("even");
// // //     }
// // // }
// // // #include<iostream.h>
// // // using namespace std;
// // // inline int add( int x,int y)
// // // {
// // //     return x+y;
// // // }
// // // int main(){
// // //     int a,b;
// // //     a=0,b=20;
// // //     cout<<add(a,b);

// // // }
// // #include<iostream>
// // using namespace std;
// // struct data{
// // int data;
// // node *next,*prev;
// // }
// // node,*first,*temp,*ttemp;
// // void init(){
// //     first=temp=ttemp=NULL;
// // }
// // void createfirst(){
// //     first=new node;
// //     cout<<"enter data for first node:";
// //     cin>>first->data;
// //     first->next=NULL;
// //     first->prev=NULL;
// // }
// // void addnode(){
// //     ttemp=new node
// //     cout<<"enter data for new node:";
// //     cin>>ttemp->data;
// //     ttemp->next=NULL;
// //     ttemp->prev=NULL;

// //     temp=first;
// //     while(temp->next!=NULL){
// //         temp=temp->next;
// //     }
// // temp->next=ttemp;
// // ttemp->prev=temp;

// // }
// // void Add_Beforefirst(){
// //     temp=new node;
// //     cout<<"enter data to add before first node:";
// //     cin>>temp->data;
// //     temp->prev=NULL;
// //     temp->next=first;
// //     first->prev=temp;
// //     first=temp;

// // }
// // void display(){
// // temp=first;
// // cout<<"Doubly Linked list elements:";
// // while(temp!=NULL){
// //     cout<<temp->data<<"";
// //     temp=temp->next;
// // }
// // cout<<endl;
// // }
// // int main(){
// //     init();
// //     int n;
// //     cout<<"enter number of nodes";
// //     cin>>n;
// //     if(n<=0){
// //         cout<<"number of nodes should be greater then zero"<<endl;
// //     }else{
// //         createfirst();
// //         for(int i=1;i<n;i++){
// //             addnode();

// //         }
// //         display();

// //     }
// //     Add_Beforefirst();
// //     display();
// //     return 0;
        
// // }


// //////////////// ADD NODE ///////////////


// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// #include<iostream>
// #define null 0
// using namespace std;
// struct node
// {
//     int data;
//     node *next;
// };
// node *first,*temp,*ttemp,*p,*q,*r,*ptemp,*pttemp,*ntemp,*nttemp;
// void init()
// {
//     first=temp=ttemp=null;
// }
// void addnode(int val)
// {
//     temp=first;
//     while(temp->next!=null)
//     {
//         temp=temp->next;
//     }
//   ttemp=new node;
//   ttemp->data=val;
//   ttemp->next=null;
//   ttemp->next=ttemp;
// }
//  void createfirst(int val)
//  {
//      first = new node;
//      first->data=val;
//      first->next=null;
//  }
// // void add_node()
// // {
// //     temp=first;
// //     while(temp->next!=NULL)
// //     temp=temp->next;
// // ttemp=new node;
// // ttemp->next=null;
// // cin>>ttemp->data;
// // temp->next=ttemp;
// // }


// void disp()
// {
// temp=first;
// while(temp!=null)
// {
//     cout<<temp->data<<endl;
//     temp=temp->next;
// }
// }
// void add_after(int x,int y)
// {
// temp=first;
// while(temp->data!=x)
// temp=temp->next;
// ttemp=temp->next;
// p=new node;
// p->data=y;
// p->next=ttemp;
// temp->next=p;
// }
// void add_before(int x,inty)
// {
//     temp=first;
//     while(temp->data!=x)
//     {
//         ttemp=temp;
//         temp=temp->next;
//     }
//     p=new node;
//     p->next=temp;
//     ttemp->next=p;
// }
// void add_beforefirst(int x)
// {
//     temp=new node;
//     temp->data=x;
//     temp->next=first;
//     first=temp;
// }
// void add_beforelast(int x)
// {
//     temp=first;
//     while(temp->next!=null)
//     {
//         ttemp=temp;
//         temp=temp->next;

//     }
//     p=new node;
//     p->data=x;
//     p->next=temp;
//     ttemp->next=p;
// }
// int main()
// {
//     init();
//     createfirst(10);
//     addnode(20);
//     addnode(30);
//     addnode(50);
//     addnode(60);
// cout<<"after add after";
// add_after(30,70);
// }


// ////////////// delete node/////////////
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// #include<iostream>
// #define null 0
// using namespace std;
// struct node
// {
//     int data;
//     node *next;
// };
// node *first,*temp,*ttemp,*p,*q,*r,*ptemp,*pttemp,*ntemp,*nttemp;
// void init()
// {
//     first=temp=ttemp=null;
// }
// void addnode(int val)
// {
//     temp=first;
//     while(temp->next!=null)
//     {
//         temp=temp->next;
//     }
//   ttemp=new node;
//   ttemp->data=val;
//   ttemp->next=null;
//   ttemp->next=ttemp;
// }
//  void createfirst(int val)
//  {
//      first=new node;
//      first->data=val;
//      first->next=null;
//  }
//  void disp()
// {
// temp=first;
// while(temp!=null)
// {
//     cout<<temp->data<<endl;
//     temp=temp->next;
// }
// }
// int main()
// {
//     init();
//     createfirst(10);
//     addnode(20);
//     addnode(30);
//     addnode(50);
//     addnode(60);
// cout<<"after add after";
// add_after(30,70);
// } 



// struct scll
// {
//     int data;
//     scll *next;
// }
// SCLL *temp,*first,*ttemp,*p;
// void createfirst()
// {
//     first=new scll;
//     cin>>first->data;
//     first->next=first;

// }
// void add_nodes()
// {
//     temp=first;
//     while(temp->next!=first)
//     temp=new scll;
//     cin>>ttemp->first;
//     ttemp->next=first;
//     temp->next=ttemp;
// }
// void disp()
// temp=first
// do{
//     cout<<temp->data;
//     temp=temp->next;
//     while(temp=first);
// }

// void add_beforefirst()
// {
//     temp=first;
// //     ttemp=new scll
// // }



// #include<iostream>
// using namespace std;
// struct DCLL
// {
//  int data;
//  DCLL *next,*prev;
// };
// DCLL *first,temp,*ttemp,*p;
// void createfirst()
// {
//     first=new DCLL;
//     cin>>first->data;
//     first->next->prev=first;
// }

// void add_node()
// {
//  temp=first->prev;
// ttemp=new DCLL;
// cin>>ttemp->data;
// ttemp->next=first;
// first->prev=ttemp;
// temp->next=ttemp;
// ttemp->prev=temp;
// }

//link list// 
//singly link list

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// #include<iostream>
// #define null 0
// using namespace std;

//  struct node
// {
//   int data;
//     node *next;
// };
// node *first,*temp,*ttemp,*p,*q,*r,*ptemp,*pttemp,
// *ntemp,*nttemp;
// void init()
// {
//  first=temp=ttemp=null;
// }

// void addnode(int val)
// {
//   temp=first;
//   while(temp->next!=null)
//   {
//   temp=temp->next;

//   }
//   ttemp=new node;
//   ttemp->data=val;
//   ttemp->next=null;
//   temp->next=ttemp;
// }
// void createfirst(int val)
// {
//  first=new node;
//   first->data=val;
//   first->next=null;
// }
// void disp()
//  {
//  temp=first;
//  while(temp!=null)
//  {
//    cout<<temp->data<<endl;
//    temp=temp->next;
//  }
// }
// //void add_After(iny x, int y) 
// // {
// //   temp=first;
// //   while(temp->data!=x)

  
// //   temp=temp->next;
// //   ttemp=temp->next;
// //   p=new node;
// //   p->data=y;
// //   p->next=ttemp;
// //   temp->next=p;
// // }
// void add_Before(int x, int y )
// {
//   temp=first;
//   while(temp->data!=x)
//   {
//     ttemp=temp;
//     temp=temp->next;
//   }
//   p=new node;
//   p->data=y;
//   p->next=tmp;
//   ttemp->next=p;
// }
// void add_Beforefirst()
// {
//   temp=new node;
//   temp->data=x;
//   temp->next=first;
//   first=temp;
// }
// void add_Beforelast()
// {
//   temp=first;
//   while(temp->next!=null)
//   {
//     ttemp=temp;
//     temp=temp->next;    
//   }
//   p=new node;
//   p->data=x;
//   p->next=temp;
//   ttemp->next=p;
// }
// int main()
// {
// 	init();
// 	createfirst(10);
// 	addnode(20);
// 	addnode(30);
// 	addnode(50);
// 	addnode(60);
//   cout<<"Before  add_Before";
//  add_Before(30,70);
// 	disp();

// return 0;
// }






// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// #include<iostream>
// #define null 0
// using namespace std;

//  struct node
// {
//   int data;
//     node *next;
// };
// node *first,*temp,*ttemp,*p,*q,*r,*ptemp,*pttemp,
// *ntemp,*nttemp;
// void init()
// {
//  first=temp=ttemp=null;
// }

// void addnode(int val)
// {
//   temp=first;
//   while(temp->next!=null)
//   {
//   temp=temp->next;

//   }
//   ttemp=new node;
//   ttemp->data=val;
//   ttemp->next=null;
//   temp->next=ttemp;
// }
// void createfirst(int val)
// {
//  first=new node;
//   first->data=val;
//   first->next=null;
// }
// void disp()
//  {
//  temp=first;
//  while(temp!=null)
//  {
//    cout<<temp->data<<endl;
//    temp=temp->next;
//  }
// }
// void del_beforefirst(int x){
//    temp=first;
//    while(temp->data!=x)
//    temp=temp->next;
//    ttemp=temp->next;
//    p=new node;
//    p->next=ttemp;
//    temp->next=p;

// }
// void del_before(int x,int y){
// temp=first;
// while(temp->data!=x)
// {
//   ttemp=temp;
//   temp=temp->mext;
// }
// p=new node;
// p->data=y;
// p->next=temp;
// temp->next=p;

// }
// void del_after()
// {
//   temp=first;
//   while(temp->next!=x)
//   temp=temp->next;
//   ttemp=temp->next;
//   p=ttemp->next;
//   temp->next=p;
//   ttemp->next=null;
//   delete ttemp;
// }

// int main()
// {
// 	init();
// 	createfirst(10);
// 	addnode(20);
// 	addnode(30);
// 	addnode(50);
// 	addnode(60);
//   disp();
// }


#include<iostream>
using namespace std;

#define MAX 5

struct stack
{
    int data[MAX];
    int top;
};

stack s1, *p;

void init()
{
    p = &s1;
    p->top = -1;
}

int empty()
{
    return (p->top == -1);
}

int full()
{
    return (p->top == MAX - 1);
}

void push(int x)
{
    if(full())
    {
        cout << "Stack Overflow\n";
        return;
    }
    p->top++;
    p->data[p->top] = x;
}

int pop()
{
    if(empty())
    {
        cout << "Stack Underflow\n";
        return -1;
    }
    int x = p->data[p->top];
    p->top--;
    return x;
}

int main()
{
    init();
    push(10);
    push(20);
    push(30);

    cout << pop() << endl;
    cout << pop() << endl;
    cout << pop() << endl;

    return 0;
}




 
