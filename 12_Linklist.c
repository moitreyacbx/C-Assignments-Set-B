#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int value;
    struct Node *next;
};
struct Node *head = NULL;
void insert(int temp)
{

    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    if (new != NULL)
    {
        new->value = temp;
        new->next = NULL;
        if (head == NULL)
        {
            head = new;
            printf("Value Inserted %d\n", new->value);
        }
        else
        {
            new->next = head;
            head = new;
            printf("Value Inserted %d\n", new->value);
        }
    }
    else
        printf("Error");
}
void display()
{
    struct Node *temp1 = head;
    if (head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        while (temp1 != NULL)
        {
            printf("%d\n", temp1->value);
            temp1 = temp1->next;
        }
    }
}
void delete (int temp)
{
    struct Node *temp1 = head;
    struct Node *temp2 = head;
    if (head == NULL)
    {
        printf("List is empty");
    }
    else if (head->next == NULL && temp1->value == temp)
    {
        head = NULL;
        printf("%d is deleted\n", temp);
        free(temp1);
    }
    else if (head->value == temp)
    {
        head = head->next;
        temp1->next = NULL;
        free(temp1);
        printf("%d is deleted\n", temp);
    }
    else
    {
        while (temp1->value != temp && temp1->next != NULL)
        {
            temp2 = temp1;
            temp1 = temp1->next;
        }
        if (temp1->value == temp)
        {
            temp2->next = temp1->next;

            temp1->next = NULL;
            free(temp1);
            printf("%d is deleted\n", temp);
        }
        else
        {
            printf("%d is not present\n", temp);
        }
    }
}
int search(int temp)
{
    struct Node *temp1 = head;
    if (head == NULL)
    {
        printf("List is empty");
        return 0;
    }
    while (temp1->value != temp && temp1->next != NULL)
    {
        temp1 = temp1->next;
    }
    if (temp1->value == temp)
    {
        printf("%d is present\n", temp);
        return 1;
    }
    else
    {
        printf("%d is not present\n", temp);
        return 0;
    }
}
int main()
{
    int ch, value;
    while (1)
    {
        printf("\n**************\n");
        printf("1. Insert\n");
        printf("2. Display\n");
        printf("3. Delete\n");
        printf("4. Search\n");
        printf("5. Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter value to be Entered:\n");
            scanf("%d", &value);
            insert(value);
            break;
        case 2:
            display();
            break;
        case 3:
            printf("Enter value to be deleted:\n");
            scanf("%d", &value);
            delete (value);
            break;
            delete (value);
            break;
        case 4:
            printf("Enter value to be searched:\n");
            scanf("%d", &value);
            search(value);
            break;
        default:
            printf("Wrong choice\n");
            break;
        }
    }
    return 0;
}