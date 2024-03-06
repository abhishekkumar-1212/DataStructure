#include<iostream>
using namespace std;

int fact(int n){

// base
if(n==0) return 1;


//  by recursive case 

int ans =  n*fact(n-1);   
return ans ;

}


int main() {

// recursion by factorial of the number 
int n;
cout<<"Enter the value of n: "<<endl;
cin>>n;
cout<<fact(n);
  
}