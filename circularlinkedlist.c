#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};

void display(struct node *LAST);
struct node *addatbeg(struct node *LAST, int data);
struct node *addatempty(struct node *LAST, int data);
struct node *addatend(struct node *LAST, int data);
struct node *addafter(struct node *LAST, int data, int item);
struct node *del(struct node *LAST, int item); //item means info of that node which has to deleted//
struct node *createlist(struct node *LAST);
void display(struct node *LAST)
{
    if (LAST == NULL)
    {
        printf("LIST IS EMPTY\n");
    }
    else
    {
        struct node *t;
        t = LAST->next;
        do
        {
            printf("DATA = %d\n", t->info);
        } while (t != LAST->next);
    }
}
struct node *addatbeg(struct node *LAST, int data)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->info = data;

    p->next = LAST->next;
    LAST->next = p;

    return (LAST);
}

struct node *addatempty(struct node *LAST, int data)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->info = data;
    p->next = LAST->next;
    LAST = p;
    return (LAST);
}

struct node *addatend(struct node *LAST, int data)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->info = data;
    if (LAST == NULL)
    {
        printf("LIST IS EMPTY\n");
    }

    else
    {
        p->next = LAST->next;
        LAST->next = p;
        LAST = LAST->next;
    }
    return (LAST);
}

struct node *addafter(struct node *LAST, int data, int item) //item = after which new node has to put//
{                                                            //data = data of new node//
    struct node *t;
    t = t->next;
    do
    {
        if (t->info == item)
        {
            struct node *p;
            p = (struct node *)malloc(sizeof(struct node));
            p->info = data;
            p->next = t->next;
            t->next = p;
            if (t == LAST)
                LAST = t;
            return (LAST);
        }

        else
        {
            printf("%d is not in the list", item);
            return (LAST);
        }

        t = t->next;

    } while (t = LAST->next);
}

struct node *del(struct node *LAST, int item)
{
    struct node *t;
    t = LAST->next;
    if (LAST == NULL)
    {
        printf("LIST IS EMPTY\n");
        return (LAST);
    }
    do
    {
        if (t->next->info == item)
        {
            t->next = t->next->next;
            if (t->next == LAST)
            {
                LAST = t;
                if (LAST->next == LAST)
                {
                    LAST = NULL;
                    free(t);
                    return LAST;
                }
                free(t);

                return LAST;
            }
            t = t->next;
            free(t);
            return LAST;
        }

        t = t->next;
    } while (t != LAST->next);
    printf("%d is not in the list\n", item);
    return LAST;
}

struct node *createlist(struct node *LAST)
{
    int n,i, data;
    printf("ENTER THE NO OF DATA'S YOU WANT TO ENTER\n");
    scanf("%d", &n);
    printf("ENTER DATA OF LIST\n");
    scanf("%d", &data);
    addatempty(LAST, data);
    for (int i = 1; i <= n; i++)
    {
        printf("ENTER THE DATA\n");
        scanf("%d", &data);
        addatend(LAST, data);
    }
    return LAST;
}

int main()
{
    int choice,data,item;
    struct node *LAST = NULL;
    while (1)
    {
        system("cls");
        printf("1. CREATE LIST\n");
        printf("2. DISPLAY LIST\n");
        printf("3. ADD AT EMPTY LIST\n");
        printf("4. ADD AT END LIST\n");
        printf("5. ADD AT BEGINNNING OF LIST\n");
        printf("6. ADD AFTER LIST\n");
        printf("7. DELETE LIST\n");
        printf("8. EXIT LIST\n");

        printf("ENTER YOUR CHOICE\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        LAST = createlist(LAST);
        break;
        case 2:
        display(LAST);
        break;
        case 3:
        printf("ENTER THE DATA");
        scanf("%d", &data);
        LAST = addatempty(LAST, data);
        break;
        case 4:
        printf("ENTER THE DATA");
        scanf("%d", &data);
        LAST = addatend(LAST, data);
        break;
        case 5:
        printf("ENTER THE DATA");
        scanf("%d", &data);
        LAST = addatbeg(LAST, data);
        break;
        case 6:
        printf("ENTER THE DATA AFTER WHICH YOU WANT TO ADD ANOTHER DATA\n");
        scanf("%d", &item);
        printf("ENTER THE DATA AFTER WHICH YOU WANT TO ADD ANOTHER DATA\n");
        scanf("%d", &data);
        LAST = addafter(LAST,data,item);
        break;
        case 7:
        printf("ENTER THE DATA WHICH YOU WANT TO DELETE\n");
        scanf("%d",&item);
        LAST = del(LAST,item);
        break ;
        case 8:
        exit(0);
        default :
        printf("INVALID CHOICE");
        }
        
    }
    getch();
}