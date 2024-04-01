#include <iostream>
#include <vector>

using namespace std;

// Function to multiply two matrix
vector<vector<int>> matrixMultiply(const vector<vector<int>>& mat1, const vector<vector<int>>& mat2) {

    int m = mat1.size();
    int n = mat2[0].size();
    int p = mat2.size();

    vector<vector<int>> result(m, vector<int>(n, 0));

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < p; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    return result;
}

// Function to display a matrix
void displayMatrix(const vector<vector<int>>& mat) {
    for (const auto& row : mat) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> mat1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> mat2 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "Matrix 1:" << endl;
    displayMatrix(mat1);

    cout << "Matrix 2:" << endl;
    displayMatrix(mat2);

    vector<vector<int>> result = matrixMultiply(mat1, mat2);

    cout << "Resultant Matrix:" << endl;
    displayMatrix(result);

    return 0;
}
