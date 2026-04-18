#include <iostream>
using namespace std;


class Tree
{
    public:
        int ages;

    /*
    **@brief: function to renew age of the tree
    **@param: int year: year to be added
    **@retrun： none   
    */
    void grow(int years)
    {
        ages += years;
    }

    /*
    **@brief: function to show the age of the tree
    **@param: none
    **return: none
    */
    void age(void)
    {
        cout<<"Age of the tree is :"<<ages<<endl;
    }
};


int main()
{
    Tree t1;
    //set original ages to be 10 years
    t1.ages = 10;
    //show ages
    t1.age();

    //add another 10 years
    int add_years = 10;
    t1.grow(add_years); 
    //show ages
    t1.age();
    return 0;
}