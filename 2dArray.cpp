#include <iostream>
using namespace std;

int main(){
    int row, col;
    cout << "Enter rows: ";
    cin >> row;
    cout << "Enter columns: ";
    cin >> col;

    int **mat = new int *[row];
    
    for (int i=0; i<row; i++){
        mat[i] = new int[col];
    }
    int x = 1;
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            mat[i][j] = x++;
            cout << mat[i][j] << " ";
        } cout << endl;
    }
}