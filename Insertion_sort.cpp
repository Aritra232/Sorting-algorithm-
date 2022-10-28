#include<iostream>

using namespace std;

int main()
{
    int n,tmp,value,hole;
    cout<< "Array size: ";
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>> a[i];
    }

    for(int i=1; i<n; i++)
    {
        value = a[i];
        hole = i;

        while(hole>0 && a[hole-1] > value)
        {
            a[hole] = a[hole-1];
            hole--;
        }
        a[hole] = value;
    }

    cout<< "Insertion Sort :"<< endl;
    /*for(int i=0; i<n; i++)
    {
        cout<< a[i];
    }*/
    for(int i=n-1; i>0; i--)
    {
        cout<< a[i]<< ",";
    }
    for(int i=0; i>=0; i--)
    {
        cout<< a[i];
    }
}

