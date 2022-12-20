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
        temp->next = NULL;
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
        while (ptr != NULL)
        {
            printf("---->%d ", ptr->info);
            ptr = ptr->next;
        }
    }
}
void insert_beg()
{
    ptr = start;
    temp = malloc(sizeof(node));

    if (temp == NULL)
    {
        printf("Out of memory \n");
        return;
    }
    printf("Enter data \n");
    scanf("%d", &temp->info);
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        temp->next = start;
        start = temp;
    }
}
void insert_end()
{
    ptr = start;
    temp = malloc(sizeof(node));

    if (temp == NULL)
    {
        printf("Out of memory \n");
        return;
    }
    printf("Enter data \n");
    scanf("%d", &temp->info);
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
        temp->next = NULL;
    }
}
void insert_pos()
{
    ptr = start;
    int pos;
    temp = malloc(sizeof(node));

    if (temp == NULL)
    {
        printf("Out of memory \n");
        return;
    }
    printf("Enter data \n");
    scanf("%d", &temp->info);
    temp->next = NULL;
    printf("Enter the position where you want to insert \n");
    scanf("%d", &pos);
    if (pos == 0)
    {
        temp->next = start;
        start = temp;
    }
    else
    {
        for (int i = 1; i < pos - 1; i++)
        {
            ptr = ptr->next;
            if (ptr == NULL)
            {
                printf("Position not found \n");
                return;
            }
        }
        temp->next = ptr->next;
        ptr->next = temp;
    }
}
void delete_beg()
{
    ptr = start;
    if (start == NULL)
    {
        printf("Underflow \n");
        return;
    }
    if (start->next == NULL)
    {
        start = NULL;
        free(ptr);
    }
    else
    {
        start = start->next;
        printf("The deleted element is %d ", ptr->info);
        free(ptr);
    }
}
void delete_end()
{
    node *prev;
    ptr = start;
    if (start == NULL)
    {
        printf("Underflow \n");
        return;
    }
    if (start->next == NULL)
    {
        start = NULL;
        free(ptr);
    }
    else
    {
        while (ptr->next != NULL)
        {
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = NULL;
        printf("The deleted element is %d ", ptr->info);
        free(ptr);
    }
}

void delete_pos()
{
    node *prev;
    int pos, i;

    if (start == NULL)
    {
        printf("Underflow \n");
        return;
    }
    printf("Enter the position where you want to delete \n");
    scanf("%d", &pos);
    if (pos == 1)
    {
        start->next = start;
        ptr->next = NULL;
        free(ptr);
    }
    else
    {
        while (i < pos)
        {
            prev = ptr;
            ptr = ptr->next;
            i++;
            // if (ptr == NULL)
            // {
            //     printf("Position not found \n");
            //     return;
            // }
        }
        prev->next = ptr->next;
        printf("The deleted element is %d ", ptr->info);
        ptr->next = NULL;
        free(ptr);
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
        case 3:
            insert_beg();
            break;
        case 4:
            insert_end();
            break;
        case 5:
            insert_pos();
            break;
        case 6:
            delete_beg();
            break;
        case 7:
            delete_end();
            break;
        case 8:
            delete_pos();
            break;

        default:
            printf("Incorrect Choice\n");
        }
    }
    return 0;
}