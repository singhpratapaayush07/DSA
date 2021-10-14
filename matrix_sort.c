#include <bits/stdc++.h>
using namespace std;
 
#define SIZE 10
 
void sortMatrix(int m[SIZE][SIZE], int n)
{
    int temp[n * n];
    int k = 0;
 
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            temp[k++] = m[i][j];
 
    sort(temp, temp + k);

    k = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            m[i][j] = temp[k++];
}
 
void printMatrix(int m[SIZE][SIZE], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    int m[SIZE][SIZE] = { { 5, 4, 7 },
                            { 1, 3, 8 },
                            { 2, 9, 6 } };
    int n = 3;
 
    cout << "Original Matrix:\n";
    printMatrix(m, n);
 
    sortMatrix(m, n);
 
    cout << "\nMatrix After Sorting:\n";
    printMatrix(m, n);
 
    return 0;
}