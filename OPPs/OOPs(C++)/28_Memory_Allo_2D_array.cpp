#include <bits/stdc++.h>
using namespace std;
int main()
{

    int row = 3;
    int col = 5;

    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    // print array

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;


    // delete []arr;  ---> delete one D array

    for(int i =0;i<row;i++){
        delete []arr[i];
    }
   delete []arr;

// 2D delete


    // not  use this Use vector of vector

    vector<vector<int>> v(row, vector<int>(col, 0));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}