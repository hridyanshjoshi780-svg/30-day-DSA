#include<iostream>
using namespace std;
int main () {
int n ; 
cout<<"enter a number : ";
cin>>n;
int num = 1;
for(int i = 1 ; i<=n ; i++){
    for(int j = 0 ; j<i ; j++ ){
        cout<<num<<" " ;
        num++;
    }
    cout<<endl;
}
    return 0;
}
