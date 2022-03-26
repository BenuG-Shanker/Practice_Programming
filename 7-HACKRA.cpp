/*
The syntax for a function is :

return_type function_name(arg_type_1 arg_1, arg_type_2 arg_2, ...)
{
        ...
        ...
        ...
    [if return_type is non void]
            return something of type 'return_type';
}

for example,
a function to return the sum of four parameters can be written as:
int sum_of_four(int a, int b, int c, int d)
{
    int sum = 0;
    sum += a;
    sum += b;
    sum += c;
    sum += d;
    return sum;
}

+= : Add and Assignment Operator. It adds the right operand to the left operand and assigns the results to the left operand.
a += b is equivalent to a = a + b;

*/

#include<iostream>

using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int x = max(a, b);
    int y = max(c, d);
    if(x > y)
        return x;
    else
        return y;
}

int main()
{
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    cout<<max_of_four(a, b, c, d);
    return 0;
}