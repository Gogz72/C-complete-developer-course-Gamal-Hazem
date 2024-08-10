#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int** arrptr;
    int n, num, size;
    int q, x;
    vector <int> queries;

    cin >> n >> q;

    arrptr = new int* [n];

    for (int i = 0; i < n; i++)
    {
        cin >> size;
        arrptr[i] = new int[size];

        for (int j = 0; j < size; j++)
        {
            cin >> arrptr[i][j];
        }
    }

    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> x;
            queries.push_back(x);
        }
    }

    for (int i = 0; i < queries.size(); i += 2)
    {
        cout << arrptr[queries[i]][queries[i + 1]] << endl;
        //if (i == queries.size())
        //{
       //     break;
       // }
    }

    for (int i = 0; i < n; i++)
    {
        delete[] arrptr[i];
        arrptr[i] = nullptr;
    }

    delete[] arrptr;


    return 0;
}
