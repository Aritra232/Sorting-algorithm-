#include<bits/stdc++.h>
using namespace std;

int partion(int ar[], int p, int r)
{
    int x = ar[r];
    int i = p-1;

    for(int j=p; j<r; j++)
    {
        if(x>=ar[j])
        {
            i++;
            swap(ar[i],ar[j]);
        }
    }
    swap(ar[i+1],ar[r]);
    return i+1;
}

void quicksort(int ar[], int p, int r)
{
    if(p<r)
    {
        int q = partion(ar,p, r);

        quicksort(ar, p, q-1);
        quicksort(ar, q+1, r);
    }
}

int main()
{
    int n;
    cin >> n;
    int ar[n];

    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }

    quicksort(ar, 0, n-1);

    for(auto it: ar)
        cout << it << "  ";
}
