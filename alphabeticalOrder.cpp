#include<iostream>
using namespace std; 
int main (){
    int n ; 
    cout<<"enter a number : ";
    cin>>n ;
for(int i = 0 ; i < n ; i++){     //outer loop
    for(int j = 0 ; j < n ; j++){ //inner loop
            cout<< char('a'+ j) <<" ";  //'a' is a character which can be increased , "a" is a string can not be increased
    }
    cout<<endl;
}
    return 0 ;
}