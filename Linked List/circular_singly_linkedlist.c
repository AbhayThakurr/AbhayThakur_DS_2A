#include <stdio.h>
#include <stdlib.h>

typedef struct nodetype
{
    int info;
    struct nodetype *next;
} node;
node *start;
node *temp;
node *ptr;

void create()
{
    int ch;
    printf("Enter value of ch \n");
    scanf("%d", &ch);
    while (ch != 1)
    {
        temp = malloc(sizeof(node));
        if (temp == NULL)
        {
            printf("Overflow \n");
            exit(0);
        }
        printf("Enter the info \n");
        scanf("%d", &temp->info);
        temp->next = start;
        if (start == NULL)
        {
            start = temp;
            ptr = temp;
        }
        else
        {
            ptr->next = temp;
            ptr = temp;
        }
        printf("Enter two to continue \n");
        scanf("%d", &ch);
    }
}

void display()
{
    ptr = start;
    if (start == NULL)
    {
        printf("Nothing to diaplay \n");
        return;
    }
    else
    {
        while (ptr->next != start)
        {
            printf("---->%d ", ptr->info);
            ptr = ptr->next;
        }
        printf("---->%d ", ptr->info);
    }
}

int main()
{
    int choice;
    while (1)
    {

        printf("\n\t1  To create list\n");
        printf("\t2  To see list\n");
        printf("\t3  For insertion at"
               " starting\n");
        printf("\t4  For insertion at"
               " end\n");
        printf("\t5  For insertion at "
               "any position\n");
        printf("\t6  For deletion of "
               "first element\n");
        printf("\t7  For deletion of "
               "last element\n");
        printf("\t8  For deletion at "
               "any position\n");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
            // case 3:
            //     insert_beg();
            //     break;
            // case 4:
            //     insert_end();
            //     break;
            // case 5:
            //     insert_pos();
            //     break;
            // case 6:
            //     delete_beg();
            //     break;
            // case 7:
            //     delete_end();
            //     break;
            // case 8:
            //     delete_pos();
            //     break;

        default:
            printf("Incorrect Choice\n");
        }
    }
    return 0;
}