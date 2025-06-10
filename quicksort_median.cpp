#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
int position(std::vector<T>&arr, int s, int e)
{
    
    int mid = s + (e - s)/2;
    std::swap(arr[mid],arr[e]);
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

template <typename T>
void quickSort(std::vector<T>&arr, int s, int e)
{
    if (s < e)
    {
        int id = position(arr, s, e);
        quickSort(arr, s, id - 1);
        quickSort(arr, id + 1, e);
    }
}
