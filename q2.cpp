#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cout << " m: ";
    cin >> m;
    cout << " n: ";
    cin >> n;
    int a[m][n], b[m][n];
    //intializing a
    cout << "Enter a: \n";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>> a[i][j];
        }
    }
    //intializing b
    cout << "Enter b: \n";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>> b[i][j];
        }
    }
    // addition and printing
    cout << endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            b[i][j]+=a[i][j];
            cout<<b[i][j]<< " ";
        }
        cout << endl;
    }

    return 0;
}

