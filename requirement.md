# getpower.cpp要求
1. 编写递归函数getPower计算xy，在同一个程序中针对整型和实型实现两个重载的函数
```cpp
int getPower（int x, int y）;//整型形式，当y<0时，返回0 
double getPower(double x, int y); //实型形式
```
2. 在主程序中实现输人输出，分别输人一个整数a和一个实数b作为底数，再输入一个整数m作为指数，输出a”和b”。另外请读者思考，如果在调用getPower函数计算a”时希望得到一个实型结果(实型结果表示范围更大，而且可以准确表示m0时的结果)，该如何调用?

# rectan.cpp要求
## 编写一个矩阵类
类名: Matrix
## 数据成员：
行数，列数，矩阵数组（或指针）
## 包含功能：
1. 构造和复制构造函数，析构函数；
2. 显示矩阵内容；
3. 修改矩阵中某位的值（位置为参数）；
4. 求矩阵中某行的和（行数为参数）；
5. 求矩阵中某列的和（列数为参数）；
6. 求矩阵中的最大，最小值；
7. 在主函数中测试； 

# struct.cpp要求
定义一个```cpp struct student ``` 结构体类型，设计输入函数```cpp void input(struct student stu[],int n)```，输入n个学生的学号、姓名和2门课的成绩，设计输出函数```cpp void outpput(struct student stu[],int n)```，输出每个学生的信息，编写主函数测试

# swap.cpp要求
编写2个swap函数，swap1和swap2，这两个函数有不同的参数类型，但都能实现2个整型数据的交换，并编写完整以下主函数进行测试

```cpp
int main()
{
    int a = 1;
    int b = 10;

    cout<<"before a: "<<a<<" b: "<<b<<endl;

    //调用编写的swap函数

    cout<<"after a: "<<a<<" b: "<<b<<endl; 
}
```