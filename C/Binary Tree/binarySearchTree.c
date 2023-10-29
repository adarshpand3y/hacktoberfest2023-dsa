#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *llink, *rlink;
};
typedef struct node *NODE;

// function to create a new node and return its address to the calling function.
NODE getnode()
{
    NODE x = (NODE)malloc(sizeof(struct node));
    return x;
}

// Inserting a NOde to the tree.
NODE insert_node(NODE root, int item)
{
    NODE temp, cur, prev;
    temp = getnode();
    temp->info = item;
    temp->llink = temp->rlink = NULL;

    if (root == NULL)
    {
        return temp;
    }
    else
    {
        prev = NULL;
        cur = root;
        while (cur != NULL)
        {
            prev = cur;
            cur = (temp->info < cur->info) ? cur->llink : cur->rlink;
        }
        if (temp->info < prev->info)
            prev->llink = temp;
        else
            prev->rlink = temp;
        return root;
    }
}

// function to traverse the binary search tree in pre order fashion.
void pre(NODE PRE)
{
    if (PRE != NULL)
    {
        printf("%d\t", PRE->info);
        pre(PRE->llink);
        pre(PRE->rlink);
    }
}

// function to traverse the binary search tree in in order fashion.
void in(NODE IN)
{
    if (IN != NULL)
    {
        in(IN->llink);
        printf("%d\t", IN->info);
        in(IN->rlink);
    }
}

// function to traverse the binary search tree in post order fashion.
void post(NODE POST)
{
    if (POST != NULL)
    {
        post(POST->llink);
        post(POST->rlink);
        printf("%d\t", POST->info);
    }
}

// function to call pre, in and post order traversal function.
void Traversal(NODE root)
{
    NODE PRE = root, POST = root, IN = root;
    if (root == NULL)
    {
        printf("Tree is Empty");
        return;
    }
    printf("\nPre Order Traversal\n");
    pre(PRE);
    printf("\nIn Order Traversal\n");
    in(IN);
    printf("\nPost Order Traversal\n");
    post(POST);
}

// function to search a given node in the tree.
NODE Search(NODE root)
{
    int flag = 0, item;
    NODE cur = root;
    printf("Enter the Element to be searched");
    scanf("%d", &item);

    if (root == NULL)
    {
        printf("\nRoot is Empty\n");
        return root;
    }

    while (cur != NULL)
    {
        if (item == cur->info)
        {
            printf("%d Found in the tree", cur->info);
            flag++;
            break;
        }
        else if (cur->info > item)
        {
            cur = cur->llink;
        }
        else
        {
            cur = cur->rlink;
        }
    }
    if (flag == 0)
    {
        printf("Element not found");
        return root;
    }
}

// main function
void main()
{
    int choice, n, item;
    NODE root = NULL;
    while (1)
    {
        printf("\n----------MENU----------\n");
        printf("\n1. Create BST of N integers\n");
        printf("\n2. Traversal\n");
        printf("\n3. Search\n");
        printf("\n4. Exit\n");
        printf("Enter your Choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("Enter the number of elments : ");
            scanf("%d", &n);
            for (int i = 0; i < n; i++)
            {
                printf("Enter the Element to be indered ");
                scanf("%d", &item);
                root = insert_node(root, item);
            }
        }
        break;
        case 2:
        {
            Traversal(root);
        }
        break;
        case 3:
        {
            Search(root);
        }
        break;

        default:
            printf("\nInvalid Choice\n");
        }
    }
}
