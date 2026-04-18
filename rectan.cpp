#include <iostream>
using namespace std;


class Rectangle
{
    public:
        float len;
        float wid;

    // width and length input
    void input(void)
    {
        // length input
        cout<<"The length of the rectangle: ";
        cin>>len;
    
        // width input
        cout<<"The length of the rectangle: ";
        cin>>wid;
    }

    //calculate the size of the rectangle
    float Rectan_Size(void)
    {
        return len*wid;
    }
};

int main()
{
    Rectangle rectan;
    
    //width and length input
    rectan.input();

    // size output
    cout<<"The size of the rectangle is :"<<rectan.Rectan_Size()<<endl;

    return 0;
}