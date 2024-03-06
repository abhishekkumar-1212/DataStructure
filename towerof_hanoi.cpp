// Tower of hanoi :

#include<iostream>
using namespace std;

void toh(int n,char src,char helper,char des){
// base case
if(n==0) return ;

// recusive case 
// 1. n-1 disc ko src to helper  lekar jao(Recusion)sc ko src 
toh(n-1,src,des,helper);
//2. nth disc ko manually src to des rakho
cout<<"Take"<<n<<"from"<<src<<"to"<<des<<endl;
//3. n-1 disc helper se des par lekar jaao(Recursion)
toh(n-1,helper,src,des);


}



int main() {
  
// tower of hanoi :  

int n;
cin>>n;
toh(n,'A','B','C');



}