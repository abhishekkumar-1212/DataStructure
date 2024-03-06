#include<iostream>
using namespace std;

// Rat in maze
bool ratinmaze( char maze[][5],int i,int j,int n,int m,int sol[][10]){

// base case 
if(i==n-1 and j==m-1){
sol[i][j]=1;  // desitnation is the part of the answer 
for(int i=0;i<n;++i){
    for(int j=0;j<m;j++){
    cout<<sol[i][j]<<" ";}
    cout<<endl;
}
cout<<endl;
return false;
}



// recusive case 
//1. right side se check karo
if(j+1<m and maze[i][j+1] !='X' ){

bool kyarightsemazesolvehui=ratinmaze(maze,i,j+1,n,m,sol);
if(kyarightsemazesolvehui== true){
    return true;
}



}

// 2. downward side se check karo 
if(i+1<n and maze[i+1][j]!='X'){
    bool kyadownsemazesolvehui=ratinmaze(maze,i+1,j,n,m,sol);
    if(kyadownsemazesolvehui== true){
        return true;
    }
}

sol[i][j]=0;
return false;

}
int main() {


char maze[][5]={

    "0000",
     "00XX",
     "0000",
     "XX00"
};
int sol[10][10]={0};
cout<<ratinmaze(maze,0,0,4,4,sol);
}