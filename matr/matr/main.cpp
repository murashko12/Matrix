#include <iostream>
using namespace std;

int **Matrix_in(const int size1, const int size2) // input matrix
{
    int **matr;
    matr = new int *[size1];
    for (int i = 0; i < size1; i++)
        matr[i] = new int [size2];
    for (int i = 0; i < size1; i++)
        for (int j = 0; j < size2; j++)
            scanf("%d", &matr[i][j]);
    return matr;
}

int main()
{
    int N,M; // matrix size
    scanf("%d %d",&N, &M);
    int **Matrix = Matrix_in(N, M);
    return 0;
}
