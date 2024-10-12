#include <stdio.h>

int main()
{
    int i, arr_1[5] = {1, 2, 3, 4, 5}, max, second_max;

    max = arr_1[0];
    second_max = arr_1[0];

    for(i = 1; i < 5; i++){
        if(arr_1[i] > max){
            second_max = max;
            max = arr_1[i];
        } else if(arr_1[i] > second_max && arr_1[i] != max){
            second_max = arr_1[i];
        }
    }
    
    printf("The second largest number is %d.", second_max);
    return 0;
}
