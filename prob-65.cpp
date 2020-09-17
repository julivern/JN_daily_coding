#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<std::vector<int>> matrix = {{1, 2, 3, 4, 5},
                                            {6, 7, 8, 9, 10},
                                            {11, 12, 13, 14, 15},
                                            {16, 17, 18, 19, 20}};

    int i, k = 0, l = 0;
    int m = 4, n = 5;
    std::cout << "Circular printout (clockwise) : ";
    while (k < m and l < n)
    {
        for (int i = l; i < n; i++)
            std::cout << matrix[k][i] << " ";
        k++;
        for(int i=k;i<m;i++)
            std::cout << matrix[i][n-1] << " ";
        n--;
        if(k<m){
            for(int i=n-1;i>=l;i--)
                std::cout << matrix[m-1][i]<<" ";
            m--;
        }
        if(l<n){
            for(int i=m-1;i>=k;i--)
                std::cout << matrix[i][l]<<" ";
        }
    }
    return 0;
}