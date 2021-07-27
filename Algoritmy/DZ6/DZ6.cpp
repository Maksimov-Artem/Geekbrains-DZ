#include <iostream>
#include <ctime>
#include <cstdlib>
#include<math.h>


using namespace std;
const int ROW = 5;       
const int COL = 5;      
int arr[ROW][COL];

void Fill_Array(int (*arr)[COL],int ROW)
{

   for (int i = 0; i < ROW; i++)
   {
    for (int j = 0; j < COL; j++)
	{
		if(rand() % 2 )
		{
        arr[i][j] = rand() % 20;
		}		
      else
	  {
	  arr[i][j] = rand() % 20 * -1; 
	  }
    }
   }
}

void Print_Array(int (*arr)[COL],int ROW)
{
	   for (int i = 0; i < ROW; i++)
	{
		   for (int j = 0; j < COL; j++)
		   {
        std::cout.width(5);
        std::cout << arr[i][j];
		   }
        std::cout << '\n';
   }
}

void Bubble_Sort(int (*arr)[COL],int ROW)
{

	for (int a = 0; a < (COL * ROW); a++) 
	{  
        for (int i = 0; i < ROW ; i++)
		{
            for (int j = 0; j < COL; j++)
			{
                  if (arr[i][j] > arr[i][j+1])
				{ 
                   int  temp = arr[i][j];       
                   arr[i][j] = arr[i][j+1];
                   arr[i][j+1] = temp;
                }
           }
        }
	}
	
	
}

double f(double x)
{
	return sqrt(fabs(x)) + 5 * pow(x , 3);
}



int main () {

	Fill_Array(arr,ROW);
	std::cout << "before sorting:\n";
	Print_Array(arr,ROW);
	std::cout << "\nafter sorting:\n";
	Bubble_Sort(arr,ROW);
	Print_Array(arr,ROW);
	std::cout<<"\n";
	double a[11]{0}, y;
	for (int i = 0; i < 11; i++)
	{
		cin >> a[i];
	}
	for (int i = 10; i >= 0; i--)
	{
		y = f(a[i]);
		if(y > 400)
		{
			std::cout.width(2);
			std::cout<< i <<" TOO LARGE\n";
		}
		else
		{
			std::cout.width(2);
			std::cout<< i <<" "<< y <<"\n";
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");

}
		
	
	
	
	
	
	
	
	
	
	
