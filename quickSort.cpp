int partition(int array[], int low, int high)
{
    int pivot = array[high];
    int index = low - 1;
    for (int j = low; j < high; j++)
    {
        if (array[j] < pivot)
        {
            index++;
            swap(array[j], array[index]);
        }
    }
    swap(array[index+1], array[high]);
    return index + 1
}

void quicksort(int array[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(array, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1; high);
    }
}

int main()
{
    int array[] = {10, 7, 8, 9, 1, 5};
    int N = sizeof(arr)/sizeof(int);
    quicksort(array, 0, N - 1)
    cout << "Sorted Array: " << end1;
    for (int i = 0; i < N; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}
