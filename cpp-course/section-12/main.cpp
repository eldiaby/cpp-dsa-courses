#include <iostream>

int *apply_all(const int *first_array, const size_t first_array_size,
               const int *second_array, const size_t second_array_size);

void print(const int *array_address, size_t array_size);

int main()
{

    const size_t array1_size{5};
    const size_t array2_size{3};

    int array1[]{1, 2, 3, 4, 5};
    int array2[]{10, 20, 30};

    std::cout << "Array 1: ";
    print(array1, array1_size);

    std::cout << "Array 2: ";
    print(array2, array2_size);

    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size{array1_size * array2_size};

    std::cout << "Result: ";
    print(results, results_size);

    std::cout << std::endl;

    delete[] results;
    results = nullptr;

    return 0;
}

int *apply_all(const int *first_array, const size_t first_array_size,
               const int *second_array, const size_t second_array_size)
{
    int *result = new int[first_array_size * second_array_size]{};

    size_t position = 0;
    for (size_t i = 0; i < second_array_size; i++)
    {
        for (size_t j = 0; j < first_array_size; j++)
        {
            result[position++] = second_array[i] * first_array[j];
        }
    }

    return result;
}

void print(const int *array_address, size_t array_size)
{
    std::cout << "[ ";

    for (size_t i{0}; i < array_size; i++)
    {
        std::cout << array_address[i];
        if (i + 1 < array_size)
            std::cout << ", ";
    }

    std::cout << " ]" << std::endl;
}