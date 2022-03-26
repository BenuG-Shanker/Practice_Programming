/*
A pointer in C++ is used to share a memory address among different contexts.
They are used whenver a function needs to modify the content of a variable, but it does not have ownership.
To access the emory address of a varaiable "val", prepend it with & sign as "&val".
This memory address is assigned to a pointer and can be shared among functions.

void increment(int *v)
{
    (*v)++;
}

int main()
{
    int a;
    scanf("%d", &a);
    increment(&a);
    printf("%d", a);
    return 0;
}
*/
#include<iostream>

using namespace std;

void update(int *a, int *b)
{
    int sum, absdiff;
    sum = *a + *b;
    absdiff = (*a - *b) > 0 ? (*a - *b) : -(*a - *b);

    *a = sum;
    *b = absdiff;
}

int main()
{
    int p, q;
    cin>>p>>q;
    update(&p,&q);
    cout<<p<<endl<<q<<endl;
    return 0;
}