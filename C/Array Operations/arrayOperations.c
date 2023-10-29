#include <stdio.h>
#include <stdlib.h>

int array[100], i, n;

void insert()
{
    printf("Enter the number of elements in th array : ");
    scanf("%d", &n);
    printf("Enter the %d elements ", n);
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d", &array[i]);
    }
}

void display()
{
    printf("The elements of the array are \n");
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d is present at index %d\n", array[i], i);
    }
}

void insert_pos()
{
    int position, element;
    printf("Enter the position where you wish to insert :");
    scanf("%d", &position);
    if (position > n)
    {
        printf("Array out of bound");
    }
    else
    {
        printf("Enter the element to be inserted : ");
        scanf("%d", &element);
        for (i = n - 1; i >= position - 1; i--)
            array[i + 1] = array[i];
        array[position - 1] = element;
        n += 1;
    }
}

void delete_pos()
{
    int position, element;
    printf("Enter the position where you wish to delete element :");
    scanf("%d", &position);
    if (position > n)
    {
        printf("Position out of bound");
    }
    else
    {
        for (i = position - 1; i <= n - 1; i++)
        {
            array[i] = array[i + 1];
        }
    }
    n -= 1;
}

void main()
{
    int choice;
    printf("Enter\n1 to create an array\n2 to display the contents of the array\n3 to insert at perticular position\n4 to delete an element from a perticular position\n0 to exit\n\n");
    while (1)
    {
        printf("\nEnter your choice :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            insert_pos();
            break;
        case 4:
            delete_pos();
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("Invalid Choice");
        }
    }
}
