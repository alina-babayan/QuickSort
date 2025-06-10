#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
int partition(std::vector<T>& arr, int s, int e)
{
    T piv = arr[s];
    int i = s + 1;

    for (int j = s + 1; j <= e; ++j)
    {
        if (arr[j] < piv)
        {
            std::swap(arr[i], arr[j]);
            ++i;
        }
    }

    std::swap(arr[s], arr[i - 1]);
    return i - 1;
}

template <typename T>
void quickSort(std::vector<T>& arr, int s, int e)
{
    if (s < e)
    {
        int p = partition(arr, s, e);
        quickSort(arr, s, p - 1);
        quickSort(arr, p + 1, e);
    }
}

