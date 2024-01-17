#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *next;
};

struct node *head = NULL;

int addatbegin(int data)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->num = data;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        return 1; // Operation successful
    }
    else
    {
        temp->next = head;
        head = temp;
        return 1; // Operation successful
    }
    return 0; // Operation failed
}

int addatend(int data)
{
    struct node *temp, *current;
    current = head;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->num = data;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        return 1; // Operation successful
    }
    else
    {
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = temp;
        return 1; // Operation successful
    }
    return 0; // Operation failed
}

int addatmid(int data, int pos)
{
    struct node *temp, *current;
    int i;
    current = head;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->num = data;
    temp->next = NULL;
    for (i = 1; i < pos - 1; i++)
    {
        if (current == NULL)
        {
            printf("invalid position");
            return 0; // Operation failed
        }
        else
        {
            current = current->next;
        }
    }
    temp->next = current->next;
    current->next = temp;
    return 1; // Operation successful
}

int delatbegin()
{
    struct node *temp;
    temp = head;
    if (temp == NULL)
    {
        printf("list is empty\n");
        return 0; // Operation failed
    }
    else
    {
        head = temp->next;
        free(temp);
        return 1; // Operation successful
    }
}

int delatend()
{
    struct node *current, *previous;
    if (head == NULL)
        {
        puts("no list exists");
        return 0; // Operation failed
    }
    else
    {
        current = head;
        while (current->next != NULL)
        {
            previous = current;
            current = current->next;
        }
        previous->next = NULL;
        free(current);
        return 1; // Operation successful
    }
}

int delatmid(int pos){
    struct node *current, *previous;
    int i;
    current = head;
    if (head == NULL){
        printf("list is empty\n");
        return 0; // Operation failed
    }
    else{
        for (i = 1; i < pos; i++){
            if (current == NULL){
                return 0;  //^ printf("invalid position\n");
            }
            else{
                previous = current;
                current = current->next;
            }
        }
        previous->next = current->next;
        free(current);
        return 1; // Operation successful
    }
}

void traversal(){
    struct node *current;
    current = head;
    if (head == NULL)
        printf("list is empty\n");
    else{
        while (current){
            printf(" %d ", current->num);
            current = current->next;
        }
    }
}
int search(int data){
    struct node *current;
    current = head;
    int flag = 0;
    while (current){
        if (current->num == data){
            flag++;
        }
        current = current->next;
    }
    if (flag == 0)
        return 0; // Not found
    else
        return 1; // Found
}
int main(){
    int choice, data, pos;
    while (1){
        printf("\n");
        printf("1 add at begin\n");
        printf("2 add at end\n");
        printf("3 add at mid\n");
        printf("4 delete at begin\n");
        printf("5 delete at end\n");
        printf("6 delete at mid\n");
        printf("7 traversal\n");
        printf("8 search\n");
        printf("9 exit\n");
        printf("\nenter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("enter the data\n");
            scanf("%d", &data);
            if (addatbegin(data))
            {
                printf("Added at the beginning successfully\n");
            }
            else
            {
                printf("Failed to add at the beginning\n");
            }
            break;
        case 2:
            printf("enter the data\n");
            scanf("%d", &data);
            if (addatend(data))
            {
                printf("Added at the end successfully\n");
            }
            else
            {
                printf("Failed to add at the end\n");
            }
            break;
        case 3:
            printf("enter the data\n");
            scanf("%d", &data);
            printf("enter the position");
            scanf("%d", &pos);
            if (addatmid(data, pos))
            {
                printf("Added at position %d successfully\n", pos);
            }
            else
            {
                printf("Failed to add at position %d\n", pos);
            }
            break;
        case 4:
            if (delatbegin())
            {
                printf("Deleted at the beginning successfully\n");
            }
            else
            {
                printf("Failed to delete at the beginning\n");
            }
            break;
        case 5:
            if (delatend())
            {
                printf("Deleted at the end successfully\n");
            }
            else
            {
                printf("Failed to delete at the end\n");
            }
            break;
        case 6:
            printf("enter the position\n");
            scanf("%d", &pos);
            if (delatmid(pos))
            {
                printf("Deleted at position %d successfully\n", pos);
            }
            else
            {
                printf("Failed to delete at position %d\n", pos);
            }
            break;
        case 7:
            traversal();
            break;
        case 8:
            printf("enter the data\n");
            scanf("%d", &data);
            if (search(data))
            {
                printf("Found\n");
            }
            else
            {
                printf("Not found\n");
            }
            break;
        case 9:
            exit(0);
        default:
            printf("enter correct choice\n");
        }
    }
}