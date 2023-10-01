#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> multiplyMatrices(const vector<vector<int>>& matrix1, const vector<vector<int>>& matrix2) {
    int rows1 = matrix1.size();
    int cols1 = matrix1[0].size();
    int cols2 = matrix2[0].size();
    vector<vector<int>> result(rows1, vector<int>(cols2, 0));

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    return result;
}

vector<vector<int>> inputMatrix(int rows, int cols) {
    vector<vector<int>> matrix(rows, vector<int>(cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    return matrix;
}

int main() {
    int rows1, cols1, rows2, cols2;
    cin >> rows1 >> cols1 >> rows2 >> cols2;
    if (cols1 != rows2) {
        cout << "Matrix multiplication is not possible." << endl;
        return 1;
    }
    vector<vector<int>> matrix1 = inputMatrix(rows1, cols1);
    vector<vector<int>> matrix2 = inputMatrix(rows2, cols2);
    vector<vector<int>> result = multiplyMatrices(matrix1, matrix2);
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[0].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
