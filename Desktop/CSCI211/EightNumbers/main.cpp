#include <iostream>
using namespace std;
// OK function to check if the number is valid
bool ok(int cro[], int help[][5], int ca){
for (int i=0; i<ca; i++){
    if(cro[ca]==cro[i]) return false; // check if the number is already used
}
int i=0;
while(help[ca][i] != -1){
    if (abs(cro[ca]-cro[help[ca][i]])==1) return false;// check if the adjacent squares have the consecutive number.
    i++;
}
return true;
}

//print function for the cross
void print(int cro[]){
    static int sol = 1;
    cout << "Solution #" << sol++ << " : " << endl;
    for(int i =0; i<8; i++) {
        cout << cro[i] <<" ";
    }
    cout << endl;
    cout << " " << cro[0] << cro[1] << " " << endl;
    cout << cro[2] << cro[3] << cro[4] << cro[5] << endl;
    cout << " " << cro[6] << cro[7] << " " << endl;
    cout << endl;
}

// putting numbers in the array
//recursive backtracking.
void eightnumbers(int cro[], int hel[][5], int ca){
    if (ca==8) {
        print(cro); // print the result
        return;
    }
    for (int i = 1; i<9; i++){
        cro[ca]= i; // place the number
        if (ok(cro,hel, ca)) eightnumbers(cro, hel, ca+1); // if the number is valid, move onto next square.
    }
}



int main() {
int cross[8];
int helper[8][5] = {
        {-1}, //0
        {0,-1},//1
        {0,-1},//2
        {0,1,2,-1},//3
        {0,1,3,-1},//4
        {1,4,-1},//5
        {2,3,4,-1},//6
        {3,4,5,6,-1}//7
    };

eightnumbers(cross, helper, 0);
    return 0;
}
