
#include <stdio.h>
#include <math.h>

int jumpSearch(int arr[], int n, int key)
{

    int start = 0;

    int end = sqrt(n);

    while(arr[end] < key && end < n){
        start = end;
        end = end + sqrt(n);
        if(end > n - 1)
           end = n-1;
    }


	   for(int i = start; i <= end; i++) {
      if(arr[i] == key)
         return i;
    }
    return -1;
}


int main()
{

    int arr[] = { 11, 27, 42, 55, 65, 77, 83, 109, 115} ;


    int key = 109;


    int n = sizeof(arr) / sizeof(arr[0]);


    int result = jumpSearch(arr, n, key);
    if(result == -1){

		printf("FindNunber is not in the array!");
    } else {

		printf("IndexNumber is : %d\nFindNumber is : %d\n",result,key);

    }
    return 0;
}
