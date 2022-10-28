#include<iostream>
#include<cmath>
using namespace std;

void Merge(int a[], int p, int q, int r);

void mergesort(int ar[],int p, int r)
{
    int q;
    if(p<r)
    {
        q = ceil((p+r)/2);

        mergesort(ar, p, q);
        mergesort(ar, q+1, r);
        Merge(ar,p,q,r);
    }

}

void Merge(int a[], int p, int q, int r)
{
    int n1 = q-p+1;
    int n2 = r-q;

    int L[n1],R[n2];

    for(int i=0; i<n1; i++)
    {
        L[i] = a[p+i];
    }
    for(int j=0; j<n2; j++)
    {
        R[j] = a[q+1+j];
    }

    int i=0, j=0, k=p;

    while(i<n1 && j<n2)
    {
        if(L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    while(i<n1)
    {
        a[k] = L[i];
        k++;
        i++;
    }

    while(j<n2)
    {
        a[k] = R[j];
        k++;
        j++;
    }
}

int main()
{
    int a=8;
    cout<< "Array:"<<endl;
    int arr[a] = {8,2,4,1,6,3,9,5};
    for(int i=0; i<8; i++)
    {
        cout<<arr[i] << " ";
    }
    cout<< endl;
    mergesort(arr,0,a-1);

    cout<< "Merge Sorted Array:"<< endl;

    for(int i=0; i<8; i++)
    {
        cout<<arr[i] << " ";
    }
}
