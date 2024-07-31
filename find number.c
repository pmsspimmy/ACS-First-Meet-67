#include <stdio.h>

int main() {
    int arr[10] = {50, 30, 80, 10, 40, 90, 20, 70, 60, 100};
    int  a, i, index, flag=0; 
    scanf("%d", &a);
    for (i = 0; i < 10; i++)
    {
        if (a== arr[i])
        {
            flag=1;
            index = i;
        }
        
    }
    if (flag==0)
    {
       printf("Value %d not found in the array", a);
    }
    if (flag==1)
    {
        printf("Value %d found at index %d", a, index);
    }
    
}