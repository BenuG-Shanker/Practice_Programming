#include<iostream>

using namespace std;

int solveMeFirst(int a, int b)
{
    int c;
    return c = a + b;
}

int main()
{
    int num1;
    int num2;
    int sum;
    cin>>num1>>num2;
    sum = solveMeFirst(num1, num2);
    cout<<sum;
    return 0;
}