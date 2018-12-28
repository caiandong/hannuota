#ifndef QUANJUBIANLIANG_H
#define QUANJUBIANLIANG_H
#include<QStack>

class myStack:public QStack<double>
{
private:

    static double rect_w;
public:
    myStack(double n=0):QStack<double>(),nagezhuzi(n){}
    double nagezhuzi;
    static void get_initial(double m);
};
struct rectweizhi
{
    double rect_w;
    int from_h;
    double from_which;
    int to_h;
    double to_which;
};
struct vectordate
{
    myStack* from;
    myStack* to;
};

#endif // QUANJUBIANLIANG_H
