#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// Function to create matrix dynamically
int** createMatrix(int rows, int cols)
{
    int **matrix = new int*[rows];
    for(int i = 0; i < rows; i++)
    {
        matrix[i] = new int[cols];
    }
    return matrix;
}
// Function to fill matrix with random numbers
void fillMatrix(int **matrix, int rows, int cols)
{
    srand(time(0));
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            matrix[i][j] = rand() % 100; // random numbers 0-99
        }
    }
}
// Function to display matrix and memory addresses
void displayMatrix(int **matrix, int rows, int cols)
{
    cout << "Matrix values with memory addresses:\n";
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " (" << &matrix[i][j] << ")  ";
        }
        cout << endl;
    }
}

// Function to find row with maximum sum
int findMaxRow(int **matrix, int rows, int cols)
{
    int maxRow = 0;
    int maxSum = 0;
    for(int j = 0; j < cols; j++)
        maxSum += matrix[0][j];
    for(int i = 1; i < rows; i++)
    {
        int sum = 0;
        for(int j = 0; j < cols; j++)
        {
            sum += matrix[i][j];
        }
        if(sum > maxSum)
        {
            maxSum = sum;
            maxRow = i;
        }
    }
    return maxRow;
}

// Function to swap rows using pointers and references
void swapRows(int* &row1, int* &row2)
{
    int* temp = row1;
    row1 = row2;
    row2 = temp;
}
int main()
{
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    int **matrix = createMatrix(rows, cols);
    fillMatrix(matrix, rows, cols);
    cout << "\nOriginal Matrix:\n";
    displayMatrix(matrix, rows, cols);
    int maxRow = findMaxRow(matrix, rows, cols);
    cout << "\nRow with maximum sum: Row " << maxRow + 1 << endl;
    // Swap first row and max row
    swapRows(matrix[0], matrix[maxRow]);
    cout << "\nMatrix after swapping first row with max row:\n";
    displayMatrix(matrix, rows, cols);
    return 0;
}


