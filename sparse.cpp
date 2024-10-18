#include <iostream>
using namespace std;
int convertToSparse(int arr[4][5], int sparse[][3])
{
    int size = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] != 0)
            {
                sparse[size][0] = i;
                sparse[size][1] = j;
                sparse[size][2] = arr[i][j];
                size++;
            }
        }
    }
    return size;
}
void transposeSparseMatrix(int sparse[][3], int size, int trans[][3])
{
    for (int i = 0; i < size; i++)
    {
        trans[i][0] = sparse[i][1];
        trans[i][1] = sparse[i][0];
        trans[i][2] = sparse[i][2];
    }
}
void printSparseMatrix(int sparse[][3], int size)
{
    cout << "Row\tColumn\tValue\n";
    for (int i = 0; i < size; i++)
    {
        cout << sparse[i][0] << "\t" << sparse[i][1] << "\t" << sparse[i][2] << "\n";
    }
}
int addSparseMatrices(int sparse1[][3], int size1, int sparse2[][3], int size2, int add[][3])
{
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2)
    {
        if (sparse1[i][0] == sparse2[j][0] && sparse1[i][1] == sparse2[j][1])
        {
            // Same position, add values
            add[k][0] = sparse1[i][0];
            add[k][1] = sparse1[i][1];
            add[k][2] = sparse1[i][2] + sparse2[j][2];
            i++;
            j++;
            k++;
        }
        else if (sparse1[i][0] < sparse2[j][0] || (sparse1[i][0] == sparse2[j][0] && sparse1[i][1] < sparse2[j][1]))
        {
            // Only sparse1 has this position
            add[k][0] = sparse1[i][0];
            add[k][1] = sparse1[i][1];
            add[k][2] = sparse1[i][2];
            i++;
            k++;
        }
        else
        {
            // Only sparse2 has this position
            add[k][0] = sparse2[j][0];
            add[k][1] = sparse2[j][1];
            add[k][2] = sparse2[j][2];
            j++;
            k++;
        }
    }

    // If there are remaining elements in sparse1
    while (i < size1)
    {
        add[k][0] = sparse1[i][0];
        add[k][1] = sparse1[i][1];
        add[k][2] = sparse1[i][2];
        i++;
        k++;
    }

    // If there are remaining elements in sparse2
    while (j < size2)
    {
        add[k][0] = sparse2[j][0];
        add[k][1] = sparse2[j][1];
        add[k][2] = sparse2[j][2];
        j++;
        k++;
    }

    return k; // Return the size of the resultant sparse matrix
}
int main()
{
    int arr1[4][5] = {
        {0, 0, 3, 0, 4},
        {0, 0, 5, 7, 0},
        {0, 0, 0, 0, 0},
        {0, 2, 6, 0, 0}};
    int arr2[4][5] = {
        {0, 0, 3, 4, 4},
        {0, 0, 5, 7, 0},
        {0, 3, 0, 4, 0},
        {0, 2, 6, 0, 0}};
    cout << "ORIGINAL MATRIX 1 :" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nORIGINAL MATRIX 2 :" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    int sparse1[100][3];
    int sparse2[100][3];
    int size1 = convertToSparse(arr1, sparse1);
    int size2 = convertToSparse(arr2, sparse2);
    cout << "\nSPARSE MATRIX 1 :" << endl;
    printSparseMatrix(sparse1, size1);
    cout << "\nSPARSE MATRIX 2 :" << endl;
    printSparseMatrix(sparse2, size2);
    int trans1[100][3];
    transposeSparseMatrix(sparse1, size1, trans1);
    cout << "\nTRANSPOSE SPARSE MATRIX 1 :" << endl;
    printSparseMatrix(trans1, size1);
    int add[100][3];
    int resultSize = addSparseMatrices(sparse1, size1, sparse2, size2, add);
    cout << "\nADDITION SPARSE MATRIX :" << endl;
    printSparseMatrix(add, resultSize);
    return 0;
}
