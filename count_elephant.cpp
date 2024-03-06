#include <iostream>
using namespace std;

int elephantways(int i, int j)
{
    if (i == 0 and j == 0){
        return 1;
    }
    if (i < 0 || j < 0){ 
        return 0;
    }    


    int ans = 0;

    // recusive case
    for (int k = 0; k < i; k++)
    {

        ans += elephantways(k, j);
    }

    for (int l = 0; l < j; l++)
    {
        ans += elephantways(i, l);
    }

    return ans;
}

int main()
{
    int i, j;
    cout << "Enter the value of i and j:" << endl;
    cin >> i >> j;
    cout << elephantways(i, j);
}