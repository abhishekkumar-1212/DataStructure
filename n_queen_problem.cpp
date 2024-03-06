#include<iostream>
using namespace std;

bool issafe(int board[][100],int i,int j,int n)
{
    //1, current row mei queen nahi honi chahaye
    for(int k=0;k<i;k++){
        if(board[k][j]==1) return false;

    }

//2. Left diagnol ma queen nahi honi  chaiye 

int original_i=i;
int original_j=j;

while(i>=0 and j>=0){
    if(board[i][j]==1) return false;
    i--;
    j--;
}
//3. right diagnol ma queen nahi hone chayeye 

 original_i=i;
 original_j=j;


while(i>=0 and j<n){
    if(board[i][j]==1) return false;
    i--;
    j++;
}
return true;

}





bool nqueen(int board[][100],int row,int n)
{
// base case
if(row==n){
    // print the board 

    for(int i=0;i<n;i++){
        for(int j=0;j<n;++j){
            if(board[i][j]==1) cout<<"Q"<<" ";
            else cout<<"_"<<" ";
        }
        cout<<endl;
    } cout<<endl;
    return false;
}

// recusive case 
for(int col=0;col<n;col++){
if(issafe(board,row,col,n)==true){

board[row][col]=1; // queen ko place kar diya
bool kyabaaki=nqueen(board,row+1,n);
if(kyabaaki) return true;
board[row][col]=0;  // backtracking

}
}

return false;
  
}



int main() {
  
  // 4X4   N queen                         

  int board[100][100]={0};
    int n;
    cin>>n;
  nqueen(board,0,n);



}