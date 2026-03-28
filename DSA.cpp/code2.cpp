// #include<iostream>
// using namespace std;
// void printTable( int n){
//     for( int i=1;i<=10;i++){
//       cout << n <<"*" << i <<"=" << n*i<< endl;
//      }
//     }
//     int main() {
//         int n=5;
//         printTable(n);
//         return 0;
//     }



//     #include<iostream>
//     using namespace std;
//     void printTable(int n){
//     for(int i=1;i<=10;i++){
//         cout<< n<<"*"<<i<<"="<<n*i<<endl;  
//   }
// }
// int main(){
//  int n=7;
//  printTable(n);
//  return 0;
// }


//sum of n natural numbers


// #include<iostream>
// using namespace std;
// int findsum(int n){
//     int sum=0;
//     for(int i=0;i<=n;i++){
//      sum=sum+i;  
//       }
//     return sum;
// }
// int main(){
//     int n=8
//     ;
//     cout<<findsum(n);
//     return 0;
// }

#include<iostream>
using namespace std;

int findSum(int n)
{
    return n*(n+1)/2;

}
int main(){
    int n=5;
    cout<<findSum(n);
    return 0;
}