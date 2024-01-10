#include <stdio.h>
#include <stdbool.h>

int main()
{
    int i, array[8], occ, min; bool found = false;
    
    //filling the array
    printf("Enter eight values to the array : \n");
    for (i = 0; i < 8; i++)
    {
        scanf("%d", &array[i]);
    }
    i = 0;

    //checking the existence of odd numbers
    while (i < 8 && found == false)
    {
        if(array[i] % 2 == 1)
        {
            found = true;
            printf("Odd number found\n");
        }
        i = i + 1;
    }
    
    //Displaying the odd numbers and their total number
    occ = 0;
    if (found == false)
    {
        printf("There are no odd numbers\n");
    }
    else 
    {
        printf("The odd numbers are : \n");
        for (i = 0; i < 8; i++)
        {
            if (array[i] % 2 == 1)
            {
                printf("%d\n", array[i]);
                occ++;
            }
        }
    }
    printf("Their total number is : %d\n", occ);
    
    //Finding the minimum of odd numbers
    if (found == false)
    {
        return 0;
    }
    else
    {
        min = array[0];
        for (i = 0; i < 8; i++)
        {
            if (min > array[i])
            {
                min = array[i];
            }
        }
        printf("The minimum is %d", min);
    }    
              
    return 0;
}
