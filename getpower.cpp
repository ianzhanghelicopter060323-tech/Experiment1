#include <iostream>
using namespace std;


/*
**@brief: calculate x^y in int
**@param: x, y(x^y)
**@retrun: x^y
*/
int getPower(int x, int y)
{
    static int result = 1;
    if (y<0) return 0; //as required
    if (y == 0) return 1;
    result *= x;
    getPower(x, --y);
    return result;
}

/*
**@brief: double x^y considering y<0
**@param: double x, double y
**@return: x^y
*/
double getPower(double x, int y)
{
    static double result = 1.0;
    if (y<0)
    {
        result *= 1/x;
        return getPower(x, ++y);
    }
    if (y == 0) return result;
    if (y>0)
    {
        result *= x;
        return getPower(x, --y);
    }
    return result;
}

int main()
{
    int a = 2;
    double b = 3.0;
    int m = 4;

    
    int result = getPower(a, m);
    double result_double = getPower(b, m);
    
    //test utput
    cout<<result<<endl;
    cout<<result_double<<endl;
    return 0;
}
