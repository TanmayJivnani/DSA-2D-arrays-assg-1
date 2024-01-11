#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << " n: ";
    cin >> n;
    int a[n][n];
    //intializing a
    cout << "\nEnter Elements of Square Mtrx: \n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>> a[i][j];
        }
    }
     cout << endl;
    //Printing Central Row and Column

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==n/2 || j==n/2) cout << a[i][j];
            else cout << " ";
        }
        cout << endl;
    }
    return 0;
}

