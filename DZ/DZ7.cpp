#include<iostream>
#define CHECKNUM(x,y) (((x>=0)&&(x<y)) ? (1):(0))
#define COUT(arr,i,j) (*(*(arr+i)+j)) 
#define TOTAL_ELEMENTS(a,b) (sizeof(a)) / sizeof(b)

using namespace std;

int main()
{
	//Задание 1
	setlocale(LC_ALL, "ru");
	std::cout << "Введите число для проверки: ";
	int x, y;
	cin >> x;
	std::cout << "Введите диапазон от 0  до: ";
	cin >> y;
	if (CHECKNUM(x, y))
	{
		std::cout << "Число " << x << " входит в диапазон от 0 до " << y << endl;
	}
	else {
		std::cout << "Число " << x << " не входит в диапазон от 0 до " << y << endl;

	}
	//Задание 2
	int rows;
	int cols;
	std::cout << "Введите размер двумерного массива:" << std::endl;
	cin >> rows;
	cin >> cols;
	int **arr = new int*[rows];

	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];

	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 30;
		}
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cout << COUT(arr, i, j) << "\t";
		}
		std::cout << endl;
	}

	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];

	}

	delete[] arr;
	//Задание 3

	int mass[100]{0};


	std::cout << "Массив содержит " << TOTAL_ELEMENTS(*&mass, int) << " элементов" << std::endl;






}
