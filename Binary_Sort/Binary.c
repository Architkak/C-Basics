#include <stdio.h>
int binarySearch(int a[], int start, int end, int val)
{
    int m;
    if (end >= start)
    {
        m = (start + end) / 2;
        if (a[m] == val)
            return m + 1;
        else if (a[m] < val)
            return binarySearch(a, m + 1, end, val);
        else
            return binarySearch(a, start, m - 1, val);
    }
    return -1;
}
int main()
{
    int length;
    printf("Enter the size of the array: ");
    scanf("%d", &length);
    int a[length];
    printf("enter the elements of the array: ");
    for (int i = 0; i < length; i++)
        scanf("%d", &a[i]);
    int val;
    printf("Enter the element to be found: ");
    scanf("%d", &val);
    int n = sizeof(a) / sizeof(a[0]);
    int res = binarySearch(a, 0, n - 1, val);
    if (res == -1)
        printf("Element is not present in the array");
    else
        printf("Element is present at %d index of array", res - 1);
    return 0;
}
