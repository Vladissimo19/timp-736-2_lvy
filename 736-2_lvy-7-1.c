#include <stdio.h>
#include <stdlib.h>

int spacing(int gap)
{
    gap = (gap * 10) / 13;
    if (gap == 9 || gap == 10)
        gap = 11;
    if (gap < 1)
        gap = 1;
    return gap;
}

void sortirovkarasch(int a[], int aSize)
{
    int gap = aSize;
    int temp, i;
    for (;;)
    {
        gap = spacing(gap);
        int swapped = 0;
        for (i = 0; i < aSize - gap; i++)
        {
            int j = i + gap;
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                swapped  =  1;
            }
        }
        if (gap  ==  1 && !swapped)
            break;
    }
}
int main ()
{
    int n, i;
    int *a;
    scanf("%d", &n);
    a  =  (int *)calloc(n, sizeof(int));
    for (i = 0;i< n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0;i < n;i++)
    {
         printf("%d ", a[i]);
    }
    sortirovkarasch(a, n);
    for(i = 0;i < n;i++)
    {
        printf("%d ", (a[i]));
    }
    return 0;
}
