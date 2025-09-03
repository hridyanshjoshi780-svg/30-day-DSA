#include<iostream>
using namespace std;
int main (){
int a , b ;
cout<<" enter a number : ";
cin>>a;
cout<<" enter a number : ";
cin>>b;
int count = 1 ;                   // initlization is must to set off starting value otherwise i'll be generating random numbers  
for(int i = 0 ; i<a ; i++){       //outer loop for row 
    for(int j = 0 ; j<b ; j++){   //inner loop for columns 
        cout<<count<<" ";         // important for continous number series 
        count++;
    }
    cout<<endl;
}
    return 0 ;
}