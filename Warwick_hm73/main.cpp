#include <iostream>

#define ARR_SIZE 8
#define SwapINT(a,b) int temp = a, a = b, b = temp //несмотря на запятые вместо ; все работает

void arrSort(int *arr, int size)
{
    int a, b;
    for (size_t j = 0; j < size; j++)
        for (size_t i = 0; i < size-1; i++)
            if (arr[i] > arr[i+1])
            {
            a = arr[i];
            b = arr[i+1];
            SwapINT(a,b);
            arr[i] = a;
            arr[i+1] = b;
            }
            
}
void printArray(int *arr, int size)
{
    for (size_t i =0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
    

int main()
{
    int myArr[ARR_SIZE] = { };
    for (size_t i = 0; i < ARR_SIZE; i++)
    {
        std::cout << "Введите " << i+1 << " элемент массива: ";
        std::cin >> myArr[i];
    }
    printArray(myArr, ARR_SIZE);
    arrSort(myArr, ARR_SIZE);
    printArray(myArr, ARR_SIZE);
    
    return 0;
}
