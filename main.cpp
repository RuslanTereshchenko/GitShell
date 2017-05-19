//
//  main.cpp
//  rgz11
//
//  Created by Ruslan Tereshchenko on 26.11.16.
//  Copyright © 2016 Ruslan Tereshchenko. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    string result;
    cout << "Input array size" << endl;
    cin >> n;
    cin >> m;
    int a[n][m];
    
    for(int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            a[i][j]=rand() % 96 + 33;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            char r=a[i][j];
            result.append(&r);
        }
    }
    cout << result << endl;
    
    return 0;
}