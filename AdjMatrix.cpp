#include<iostream>

using namespace std;

void printGraph(int mat[][20], int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << "\n\n";
    }
}

int main() {
    int v;
    cout << "Enter no of vertices :" << endl;
    cin >> v;

    int mat[20][20];

    for(int i=0; i<v; i++) {
        for(int j=i; j<v; j++) {
            if(i != j) {
                cout << "Enter 1 if vertex " << i+1 << "is connected to" << j+1 << " ,otherwise enter 0:" << endl;
                cin >> mat[i][j];

                mat[j][i] = mat[i][j];
            }
            else {
                mat[i][j] = 0;
            }
        }
    }

    printGraph(mat,v);


    return 0;
}