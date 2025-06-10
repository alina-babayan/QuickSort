#include <iostream>
#include <algorithm>
#include <vector>
template <typename T>
int partition(std::vector<T>&arr, int s, int e)
{
    T piv = arr[e];
    int i = s - 1;
    for(int j = s; j < e; ++j)
    {
        if(arr[j] < piv)
        {
            i++;
            std::swap(arr[i],arr[j]);
        }
    }
    std::swap(arr[i+1],arr[e]);
    return i + 1;
}
template<typename T>
void quickSort(std::vector<T>&arr, int s, int e)
{
    if(s < e)
    {
        int index = partition(arr,s,e);
        quickSort(arr, s, index - 1);
        quickSort(arr, index+1, e);
    }
}

