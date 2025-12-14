//  #include <iostream>
// using namespace std;

// void Honai(int n, char from, char to, char aux)
// {
//     if (n == 1)
//     {
//         cout << "Move disk 1 from " << from << " to " << to <<endl ;
//         return;
//     }

//     Honai(n - 1, from, aux, to);
//     cout << "Move disk " << n << " from " << from << " to " << to <<endl;
//     Honai(n - 1, aux, to, from);
// }

// int main()
// {
//     int n;
//     cout << "Enter number of disks: ";
//     cin >> n;

//     Honai(n, 'A', 'C', 'B');  
//     return 0 ;
// } 

// #include<iostream>
// using namespace std;
// int sum (int n)
// {
//     if(n==0)
//     return 0;
// return n+sum(n-1);
// }
// int main()
// {
//     cout<<sum(3);
// }



// #include<iostream>
// using namespace std;
// int fact(int n){
// if(n==0)
// return 1;
// return n*fact(n-1);
// }
// int main()
// {
//     cout<<fact(5);
// }