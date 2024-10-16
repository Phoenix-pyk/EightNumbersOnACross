#include <iostream>
using namespace std;
// OK function to check if the number is valid
bool ok(int cro[], int help[][5], int ca){
for (int i=0; i<ca; i++){
    if(cro[ca]==cro[i]) return false; // check if the number is already used
}
int i=0;
while(help[ca][i] != -1){
    if (abs(cro[i]-cro[help[ca][i]])==1) return false;// check if the adjacent squares have the consecutive number.
    i++;
}
return true;
};

// putting numbers in the array
void eightnumbers(int cro[], int ca){
    if (ca==8) {
        print(cro); // print the result
        return;
    }
    for (int i = 1; i<9; i++){
        cro[ca]= i; // place the number
        if (ok(cro,ca)) eightnumbers(cro, ca+1); // if the number is valid, move onto next square.
    }
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
