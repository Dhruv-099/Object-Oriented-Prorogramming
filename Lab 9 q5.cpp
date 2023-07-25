#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
class Matrix {
private:
    int rows;
    int cols;
    int matrix[MAX_SIZE][MAX_SIZE];
public:
    Matrix() {
        rows = 0;
        cols = 0;
    }
    Matrix(int r, int c) {
        rows = r;
        cols = c;
    }
    void setElement(int r, int c, int value) {
        matrix[r][c] = value;
    }
    int getElement(int r, int c) const {
        return matrix[r][c];
    }
    int getRows() const {
        return rows;
    }
    int getCols() const {
        return cols;
    }
    friend Matrix operator*(const Matrix& m1, const Matrix& m2);
    void display() const {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};
Matrix operator*(const Matrix& m1, const Matrix& m2) {
    int rows1 = m1.getRows();
    int cols1 = m1.getCols();
    int rows2 = m2.getRows();
    int cols2 = m2.getCols();
    if (cols1 != rows2) {
        cout << "Error: Incompatible matrix sizes for multiplication" << endl;
        return Matrix();
    }
    Matrix result(rows1, cols2);
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result.setElement(i, j, 0);
            for (int k = 0; k < cols1; k++) {
                result.setElement(i, j, result.getElement(i, j) + m1.getElement(i, k) * m2.getElement(k, j));
            }
        }
    }
    return result;
}
int main() {
	cout<<"Dhruv Bobal"<<endl;
	cout<<"102106029"<<endl;
    Matrix m1(2, 2);
    m1.setElement(0, 0, 1);
    m1.setElement(0, 1, 2); 
    m1.setElement(1, 0, 3);
    m1.setElement(1, 1, 4);    
    Matrix m2(2, 2);
    m2.setElement(0, 0, 5);
    m2.setElement(0, 1, 6);
    m2.setElement(1, 0, 7);
    m2.setElement(1, 1, 8);
    Matrix result = m1 * m2;
    cout << "Matrix 1:" << endl;
    m1.display();
    cout << "Matrix 2:" << endl;
    m2.display();
    cout << "Matrix Multiplication Result:" << endl;
    result.display();
    return 0;
}	
