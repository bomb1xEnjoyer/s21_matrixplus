# s21_matrixplus
Implementation the matrix library using the object-oriented approach.

## Necessary software for development:
- GCC compiler
- make Utility

## Commands:
- Run `make` - to library project and run tests

## About project
### Matrix class in C++
```cpp
class S21Matrix {
    private:
        // Attributes
        int rows_, cols_;         // Rows and columns
        double **matrix_;         // Pointer to the memory where the matrix is allocated

    public:
        S21Matrix();              // Default constructor
        ~S21Matrix();             // Destructor

        void SumMatrix(const S21Matrix& other); 
        // Other methods..
}
```
### Matrix operations

| Operation | Description | Exceptional situations |
| ----------- | ----------- | ----------- |
| `bool EqMatrix(const S21Matrix& other)` | Checks matrices for equality with each other. |  |
| `void SumMatrix(const S21Matrix& other)` | Adds the second matrix to the current one | different matrix dimensions. |
| `void SubMatrix(const S21Matrix& other)` | Subtracts another matrix from the current one | different matrix dimensions. |
| `void MulNumber(const double num) ` | Multiplies the current matrix by a number. |  |
| `void MulMatrix(const S21Matrix& other)` | Multiplies the current matrix by the second matrix. | The number of columns of the first matrix is not equal to the number of rows of the second matrix. |
| `S21Matrix Transpose()` | Creates a new transposed matrix from the current one and returns it. |  |
| `S21Matrix CalcComplements()` | Calculates the algebraic addition matrix of the current one and returns it. | The matrix is not square. |
| `double Determinant()` | Calculates and returns the determinant of the current matrix. | The matrix is not square. |
| `S21Matrix InverseMatrix()` | Calculates and returns the inverse matrix. | Matrix determinant is 0. |

Apart from those operations, also supports constructors and destructors:

| Method | Description |
| ----------- | ----------- |
| `S21Matrix()` | A basic constructor that initialises a matrix of some predefined dimension. |  
| `S21Matrix(int rows, int cols) ` | Parametrized constructor with number of rows and columns. |
| `S21Matrix(const S21Matrix& other)` | Copy constructor. |
| `S21Matrix(S21Matrix&& other)` | Move constructor. |
| `~S21Matrix()` | Destructor. |

Overloading of the following operators is also implemented, partly corresponding to the operations above:

| Operator | Description | Exceptional situations |
| ----------- | ----------- | ----------- |
| `+`      | Addition of two matrices. | Different matrix dimensions. |
| `-`   | Subtraction of one matrix from another. | Different matrix dimensions. |
| `*`  | Matrix multiplication and matrix multiplication by a number. | The number of columns of the first matrix does not equal the number of rows of the second matrix. |
| `==`  | Checks for matrices equality (`EqMatrix`). | |
| `=`  | Assignment of values from one matrix to another one. | |
| `+=`  | Addition assignment (`SumMatrix`) | different matrix dimensions. |
| `-=`  | Difference assignment (`SubMatrix`) | different matrix dimensions. |
| `*=`  | Multiplication assignment (`MulMatrix`/`MulNumber`). | The number of columns of the first matrix does not equal the number of rows of the second matrix. |
| `(int i, int j)`  | Indexation by matrix elements (row, column). | Index is outside the matrix. |