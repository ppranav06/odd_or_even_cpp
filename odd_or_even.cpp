#include<iostream>
using namespace std;
void odd_or_even(int num){
if (num%2==0) goto even;
else goto odd;

even:
cout<<"The number "<<num<<" is even"<<endl;
return;

odd:
cout<<"The number "<<num<<" is odd"<<endl;
}

int main(){
    int num;
    cout<<"Enter a no.: "; 
    cin>>num;
    odd_or_even(num);
    return 0;
}