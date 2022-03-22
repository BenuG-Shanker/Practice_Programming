// for the value of n in the inclusive interval[n, m] seperated by a new line.
// where print the number name in english from 1 to 9
// print the number even or odd when the number in input is greater than 9

#include<iostream>

using namespace std;
int main() {
    int n, m, i;
    cin>>n>>m;
    for(i = n; i <= m; i++)
    {
        if(i == 1)
        {
            cout<<"one"<<endl;
        }
        else if(i == 2)
        {
            cout<<"two"<<endl;
        }
        else if(i == 3)
        {
            cout<<"three"<<endl;
        }
        else if(i == 4)
        {
            cout<<"four"<<endl;
        }
        else if(i == 5)
        {
        cout<<"five"<<endl;
        }
        else if(i == 6)
        {
            cout<<"six"<<endl;
        }
        else if(i == 7)
        {
            cout<<"seven"<<endl;
        }
        else if(i == 8)
        {
            cout<<"eight"<<endl;
        }        
        else if(i == 9)
        {
            cout<<"nine"<<endl;
        }
        else 
        {
            if(i>9)
            {
                if(i%2 == 0)
                {
                    cout<<"even"<<"\t"<<i<<endl;
                }
                else {
                {
                    cout<<"odd"<<"\t"<<i<<endl;
                }
                }
            }
        }
    }
    return 0;
}