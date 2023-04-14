#include <iostream>
using namespace std;

int main() {
    int arr[3][3] ;
    cin>>arr[0][0]>>arr[1][2]>>arr[2][0]; 

    int count = 0; 
    int row_sum, col_sum, diag_sum;
    row_sum = col_sum = diag_sum = 0;

 
    diag_sum = arr[0][0] + arr[1][1] + arr[2][2];

   
    int anti_diag_sum = arr[0][2] + arr[1][1] + arr[2][0];

    
    for (int i = 0; i < 3; i++) {
        row_sum = 0; 
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == 0) continue; 
            row_sum += arr[i][j];
        }
        
        if (row_sum == diag_sum && row_sum == col_sum && row_sum == anti_diag_sum) {
            count++;
        }
    }


    for (int j = 0; j < 3; j++) {
        col_sum = 0; 
        for (int i = 0; i < 3; i++) {
            if (arr[i][j] == 0) continue; 
            col_sum += arr[i][j];
        }
        
        if (col_sum == diag_sum && col_sum == row_sum && col_sum == anti_diag_sum) {
            count++;
        }
    }

   
    if (diag_sum == row_sum && diag_sum == col_sum && diag_sum == anti_diag_sum) {
        count++;
    }

    cout << count << endl; 
    return 0;
}
