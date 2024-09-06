#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "UKR");
    /*    //1.	Ввести массив из 5 чисел, а затем вывести его в обратном порядке.
    int arr [5] = {1, 2, 3, 4, 5};
    for (int i = 4; i >= 0; i--)
    {
        cout << arr[i] <<", ";
    }*/

    /* //2.	Создать массив из 20 случайных чисел.Вывести все элементы массива с чётными индексами.
    const int SIZE = 20;
    int arr[SIZE] = {};
    srand(time(0));
    rand();
    for (int i = 0; i < SIZE;i++)
    {
        arr[i] = rand();
    }
    for (int i = 0; i < SIZE; i++)
    {
        cout << "element #"<< i <<" = " << arr[i] << ", ";
    }
    cout << "\n\n";
    for (int i = 2; i < SIZE; i += 2)
    {
        cout << "element #" << i << " = " << arr[i] << ", ";
    } */
    /*//3.	Создать массив из 10 случайных чисел в диапазоне от - 20 до 20. Определить количество, сумму  и среднее арифметическое положительных элементов массива.
    int const SIZE = 10;
    srand(time(0));
    rand();
    int min = -20;
    int max = 20;
    int k = max - min + 1;
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % k + min;
    }
    int plus = 0;
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << ", ";
        if (arr[i] > 0)
        {
            plus++;
            sum += arr[i];
        }
    }
    int avg = sum/plus;
    cout << "\n" << "количество положительных элементов массива: " << plus <<"\n";
    cout << "суммa положительных элементов массива: " << sum <<"\n";
    cout << "среднее арифметическое положительных элементов массива: " << avg <<"\n";
    */

    /*//5.	Написать программу, которая предлагает пользователю ввести число, и затем подсчитывает, сколько раз это число встречается в массиве на 100 случайных элементов.
    int const SIZE = 100;
    srand(time(0));
    rand();
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 100;
    }
    int x;
    cout << "Введите искомое число: ";
    cin >> x;
    int n = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] == x)
        {
            n++;
        }
    }
    cout << "число встречается в массиве " << n << " раз(a)";
    */

    /*  
    //6.	Создать массив из 20 случайных чисел в диапазоне от - 10 до 30. Написать программу, определяющую сумму элементов массива, находящихся в массиве после первого отрицательного элемента.

    int const SIZE = 20;
    srand(time(0));
    rand();
    int min = -10;
    int max = 30;
    int k = max - min + 1;
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % k + min;
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << ", ";
    }

    int x;

    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i]< 0)
        {
            x = i;
            break;
        }
    }
    cout << "\n\n";
    int sum = 0;
    for (int i = x+1; i < SIZE; i++)
    {
        sum += arr[i];
    }
    cout << "суммa элементов массива, находящихся в массиве после первого отрицательного элемента = " << sum;
    */
/*//7.	Создать массив из 20 случайных чисел в диапазоне от - 30 до 10. Написать программу, определяющую сумму элементов массива, находящихся в массиве до первого положительного элемента.

int const SIZE = 20;
srand(time(0));
rand();
int min = -30;
int max = 10;
int k = max - min + 1;
int arr[SIZE];
for (int i = 0; i < SIZE; i++)
{
    arr[i] = rand() % k + min;
}

for (int i = 0; i < SIZE; i++)
{
    cout << arr[i] << ", ";
}

int x;

for (int i = 0; i < SIZE; i++)
{
    if (arr[i] > 0)
    {
        x = i;
        break;
    }
}
cout << "\n\n";
int sum = 0;
for (int i = 0; i < x; i++)
{
    sum += arr[i];
}
cout << "суммa элементов массива, находящихся в массиве до первого положительного элемента = " << sum;
*/

/*
//4.	Создать символьный массив из 100 случайных элементов.Определить, сколько в нём цифр, букв и знаков пунктуации.

int const SIZE = 100;

srand(time(0));

char arr[SIZE];
int digit = 0;
int character = 0;
int punct = 0;

for (int i = 0; i < SIZE; i++)
{
    arr[i] = ' '+ rand() % 126;
}

for (int i = 0; i < SIZE; i++)
{
    cout << arr[i] << ", ";
}

for (int i = 0; i < SIZE; i++)
{
    if (isdigit(arr[i]))
    {
        digit++;
    }
    if (isalpha(arr[i]))
    {
        character++;
    }
    if (ispunct(arr[i]))
    {
        punct++;
    }
}
cout << "\n" << "В массиве " << digit <<" цифр";
cout << "\n" << "В массиве " << character << " букв";
cout << "\n" << "В массиве " << punct << " знаков пунктуации";
*/

//14.	Даны 2 массива размерности M и N соответственно.Необходимо переписать в третий массив общие элементы первых двух массивов, без повторений.


int const M = 5;
int const N = 5;

int arr_1[N] = {1, 2, 3, 4, 5};
int arr_2[M] = {4, 1, 9, 3, 6};

int SIZE_count=0;



for (int i = 0; i < N; i++)
{
    for (int j = 0; j < M; j++)
    {
        if (arr_1[i] == arr_2[j])
            SIZE_count ++;
    }
}

cout << "\n";

int const SIZE = N < M ? N : M;
int index_count = 0;
int arr_3 [SIZE];

for (int i = 0; i < N; i++)
{
    for (int j = 0; j < M; j++)
    {
        if (arr_1[i] == arr_2[j])
        {
            arr_3 [index_count] = arr_1[i];
            index_count++;
        }

    }
}
for (int i = 0; i < SIZE_count; i++)
{
    cout << arr_3[i] << ", ";
}


}
