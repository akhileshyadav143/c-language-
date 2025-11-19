// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter number of n :");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         printf("%d ",i);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int day;
//     printf("enter day number(1-7)");
//     scanf("%d",&day);
//     switch(day){
//         case 1:printf("monday\n"); break;
//         case 2:printf("tuesday\n"); break;
//         case 3:printf("wednesday\n"); break;
//         case 4:printf("thusday\n"); break;
//         case 5:printf("friay\n"); break;
//         case 6:printf("saturday\n"); break;
//         case 7:printf("sunday\n"); break;

//     }
// // }

// #include<stdio.h>
// int main(){
//     int month;
//     printf("enter month number(1-12)");
//     scanf("%d",&month);
//     switch(month){
//         case 1:printf("january\n"); break;
//         case 2:printf("february\n"); break;
//         case 3:printf("march\n"); break;
//         case 4:printf("april\n"); break;
//         case 5:printf("may\n"); break;
//         case 6:printf("june\n"); break;
//         case 7:printf("juiy\n"); break;
//         case 8:printf("august\n"); break;
//         case 9:printf("september\n"); break;
//         case 10:printf("october\n"); break;
//         case 11:printf("november\n"); break;
//         case 12:printf("december\n"); break;



//     }


// }

// #include<Stdio.h>
// int main(){
//     int choice;
//     float a,b;
//     printf("1. add\n2, subtract\n3. multiply\n4. divide\n");
//     printf("enter your choice:");
//     scanf("%d",&choice);
//     printf("enter two numbers:");
//     scanf("%f%f",&a ,&b);


// switch(choice){
//     case 1:printf("sum=%.2f\n",a+b); break;
//     case 2:printf("difference=%.2\n",a-b); break;
//     case 3:printf("product=%.2f\n",a*b); break;
//     case 4:if(b!=0) printf("divide=%.2f\n",a/b); break;
// }
// }


 
//  #include<stdio.h>
// int main(){
//     char grade;
//     printf("enter grade(A,B,C,D,F):");
//     scanf("%d",&grade);
//     switch(grade){
//         case 'A':printf("exellent\n"); break;
//         case 'B':printf("good\n"); break;
//         case 'C':printf("average\n"); break;
//         case 'D':printf("below average\n"); break;
//         case 'F':printf("fail\n"); break;
//     }
//     return 0;
//     }
//  #include<stdio.h>
//     int main() {
//         char color;
//         printf("enter traffic light color(R/G/Y): ");
//         scanf("%c",&color);
// switch(color){
//     case 'R' :printf("stop\n "); break;
//     case 'G' :printf("go\n"); break;
//     case 'Y' :printf("wait\n"); break;    
  

//   }  
  
// }


// #include<stdio.h>
// int main(){
//   char ch;
//   printf("enter a character :");
//   scanf("%c",&ch);
//   switch(ch){
//     case 'a':case 'e': case 'i': case'o':case 'u' :
//     printf("vowel\n");break;
//     default: printf("consonont");
//   }
//   }

  #include<stdio.h>
  int main(){
    int num;
    printf("enter a number");
    scanf("%d",&num);
    switch(num % 2){
      case 0: printf("it is even\n");
      case 1: printf("it is odd\n");
    }
  }
