#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    // sort(a, a+n); //asendring order
     sort(a,a+n, greater<int>()); //desendring // greater build in function
       for(int i=0;i<n;i++){
        cout<< a[i]<< " ";
    }

}