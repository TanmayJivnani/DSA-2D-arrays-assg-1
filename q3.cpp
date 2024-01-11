#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cout << " Rows m: ";
    cin >> m;
    cout << " Columns n: ";
    cin >> n;
    int a[m][n];
    cout << endl;
    int l1,r1,l2,r2;
    cout << "l1: ";
    cin >> l1;
    cout << "r1: ";
    cin >> r1;
    cout << "l2: ";
    cin >> l2;
    cout << "r2: ";
    cin >> r2;
    cout << endl;
    //intializing a
    cout << "Enter matrix: \n";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>> a[i][j];
        }
    }
    
    // sum
    cout << endl;
    int sum=0;
    for(int i=l1; i<=l2; i++){
        for(int j=r1; j<=r2; j++){
            sum+=a[i][j];
        }
    }
    cout << "The Sum is " << sum;

    return 0;
}

