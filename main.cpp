/*Write a program which prompts the user to enter 10 Values
into an array known as Num.
The program should also display the numbers entered,
Calculate their sum,
and Average*/


#include <iostream>

using namespace std;

class Num{
    float num[10],
        sum,
        average;
    int i;
public:
    Num();
    void getData();
    void sumAverage();
    void Display();
}num;

void Num::getData(){
    cout<< "\nEnter 10 Numbers: "<<endl;
    for(i=0; i<=9; i++){
        cout<< "Enter Number in cell "<<i << " :";
        cin>> num[i];
    }
}

void Num::Display(){
    cout<< "Numbers Entered Are: "<<endl;
    for(i=0; i<10; i++){
        cout<< num[i]<< "\t";
    }
}

void Num::sumAverage(){
    for(i=0; i<10; i++){
        sum = sum +num[i];
        average= sum/10;
    }
    cout<< "\nThe Sum is: "<<sum;
    cout<< "\nThe Average is: "<< average;
}
Num::Num(){
    getData();
    Display();
    sumAverage();
}
int main()
{

}
