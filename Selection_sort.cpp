#include<iostream>

using namespace std;

int main()
{
    int n,pos,tmp,k;
    cout<< "Array size: ";
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>> a[i];
    }

    for(int i=0; i<n; i++)
    {
        pos = i;//0,1,2
        for(int j=i+1; j<n; j++) // 1;2;3
        {
            if(a[j] < a[pos])
            {
                pos = j;
            }
        }
        tmp = a[i];
        a[i] = a[pos];
        a[pos] = tmp;
    }

    cout<< "Selection Sort :"<< endl;
    for(int i=0; i<n; i++)
    {
        cout<< a[i] << "  ";
    }
}

