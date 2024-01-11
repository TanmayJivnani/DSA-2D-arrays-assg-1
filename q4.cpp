#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cout << " m: ";
    cin >> m;
    cout << " n: ";
    cin >> n;
    int a[m][n];
    //intializing a
    cout << "\nEnter Elements of Mtrx: \n";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>> a[i][j];
        }
    }
    //calculating largest
    int l=0;
    cout << endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]>l) l=a[i][j];
        }
    }
    cout << "Largest: " << l << endl;
    return 0;
}

