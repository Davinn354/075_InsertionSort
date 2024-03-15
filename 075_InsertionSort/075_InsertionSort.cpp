#include <iostream>
using namespace std;

void insertionSort() {

    int i, n, temp, j;
    int arr[12];

    for (i = 1; i <= n - 1; i++) {//step 1
        temp = arr[i];//ste 2
        j = i - 1;//step 3
        while (j >= 0 && arr[j] > temp) //step 4
        {
            arr[j + 1] = arr[j]; //step 4a
            j = j - 1; // step 4b
        }
        arr[j + 1] = temp; // step 5

        
    }
    
}

int main()
{
    system("pause");
    return 0;
}