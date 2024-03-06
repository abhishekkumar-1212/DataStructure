/*
Take as input N, a number. Write a recursive function which prints counting from 0 to N in lexicographical order.

Output Format
Display all the numbers upto N in a lexicographical order

Sample Input
10
Sample Output
0 1 10 2 3 4 5 6 7 8 9 


*/

//lexicographical order
#include<bits/stdc++.h>
using namespace std;

void util(int i,int n){

if(i>n) return ;

cout<<i<<" ";
for(int j=0;j<10;j++){   // it is not compulsory j<10 but it also work with range(0 t0 10 ){int j=0;j<2;j++}
// But for general value of n =1000 so it goes 10 times so we need (int j=0;j<10;j++)
   
   util(i*10+j,n);     // Dry run 

}

}

int main()
{
int n;
cin>>n;


cout<<"0"<<" ";   
for(int i=1;i<=9;i++){
util(i,n);

}


}
