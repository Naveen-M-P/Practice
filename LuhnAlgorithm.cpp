#include<iostream>

using namespace std ;

int sumOfEven(string Number);
int sumOfOdd(string Number);
int Num(int a);


int main(){
    string cardNumber;
    cout<<"Enter the card number: \n";
    cin>>cardNumber;
    int result = sumOfEven(cardNumber)+sumOfOdd(cardNumber);
    cout<<(result%10==0?"Is a valid card number\n":"Not a valid card number\n");
    return 0;
}

int Num(int a){
    a=a%10+a/10%10;
    return a;
}

int sumOfEven(string Number){
    int sum=0;
    for(int i=Number.length()-2;i>-1;i-=2){
        sum+=Num((Number[i]-'0')*2);
    }
    return sum;
}
int sumOfOdd(string Number){
    int sum=0;
    for(int i=Number.length()-1;i>-1;i-=2){
        sum+=Num(Number[i]-'0');
    }
    return sum;
    return 0;
}