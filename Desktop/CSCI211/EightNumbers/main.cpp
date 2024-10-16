#include <iostream>
using namespace std;
// OK function to check if the number is valid
bool ok(int cro[], int help[][5], int ca){
for (int i=0; i<ca; i++){
    if(cro[ca]==cro[i]) return false; // check if the number is already used
}
int i=0;
while(help[ca][i] != -1){
    if (abs(cro[i]-cro[help[ca][i]])==1) return false;
    i++;
}
return true;
};

int main() {
int cross[8];
int helper[7][5] = {
        {-1},
        {0,-1},
        {0,-1},
        {0,1,2,-1},
        {0,1,3,-1},
        {2,3,4,-1},
        {3,4,5,6,-1}
    };


    return 0;
}
