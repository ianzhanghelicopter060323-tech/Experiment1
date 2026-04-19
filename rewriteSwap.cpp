#include <iostream>
using namespace std;


void swap1(int *num1, int *num2)
{
    int temp = *num1; // temp 只是一个普通的int
    *num1 = *num2;
    *num2 = temp;
}

void swap2(int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}


int main()
{
    int a = 1;
    int b = 10;

    cout<<"before a: "<<a<<" b: "<<b<<endl;

    //调用编写的swap函数
    swap1(&a, &b);

    cout<<"after a: "<<a<<" b: "<<b<<endl; 
    return 0;
}