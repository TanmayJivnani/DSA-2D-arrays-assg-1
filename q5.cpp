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
     cout << endl;
    //finding row with max sum
   
    int MSum=INT_MIN;
    int idx=0; //store row idx
    for(int i=0; i<m; i++){
        int sum=0;
        for(int j=0; j<n; j++){
            sum+=a[i][j];
        }
        if(sum>MSum){
            MSum=sum;
            idx=i;
        }
    }
    cout << "Row " << idx <<  " has Max Sum of " << MSum << endl;
    return 0;
}

