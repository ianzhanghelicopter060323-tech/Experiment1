#include <iostream>
using namespace std;


/*
**@brief:  the first swap function with pointer
**@param:  two int pointer point at two int to be swapped
**@return: none 
*/
void Swap1(int *num1, int *num2)
{
    int *temp = num1;
    *num1 = *num2;
    *num2 = *temp;
}

/*
**@brief: the second swap function with reference
**@param: reference of two int to be swapped
**@return: none 
*/
void Swap2(int &r_num1, int &r_num2)
{
    int &temp = r_num1;
    r_num1 = r_num2;
    r_num2 = temp;
}


int main()
{
    int a1 = 1;
    int b1 = 10;

    int a2 = 1;
    int b2 = 10;

    //Swap1
    cout<<"Before Swap:"<<"a1="<<a1<<" "<<"b1="<<b1<<endl;
    Swap1(&a1, &b1);
    cout<<"After Swap:"<<"a1="<<a1<<" "<<"b1="<<b1<<endl;

    //Swap2
    cout<<"Before Swap:"<<"a2="<<a2<<" "<<"b2="<<b2<<endl;
    Swap2(a2, b2);
    cout<<"After Swap:"<<"a2="<<a2<<" "<<"b2="<<b2<<endl;

    return 0;
}