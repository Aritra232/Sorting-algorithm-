#include<iostream>

using namespace std;

int main()
{
    int n,tmp;
    cout<< "Array size: ";
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>> a[i];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=1; j<n-i; j++)
        {
                if(a[j]<a[j-1])
                {
                    tmp = a[j];
                    a[j] = a[j-1];
                    a[j-1] = tmp;
                }
        }
    }

    cout<< "Bubble Sort :"<< endl;
    for(int i=0; i<n-1; i++)
    {
        cout<< a[i]<< ",";
    }
    for(int i=n-1; i<n; i++)
    {
        cout<< a[i]<< endl;
    }
}
