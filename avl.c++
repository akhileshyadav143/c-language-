#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    int height;
    node *left;
    node *right;
};

/* Utility Functions */
int height(node *n) {
    if (n == NULL)
        return 0;
    return n->height;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

/* Create Node */
node* newNode(int data) {
    node* n = new node;
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    n->height = 1;
    return n;
}

/* Right Rotation */
node* rightRotate(node* y) {
    node* x = y->left;
    node* T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    return x;
}

/* Left Rotation */
node* leftRotate(node* x) {
    node* y = x->right;
    node* T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    return y;
}

/* Balance Factor */
int getBalance(node* n) {
    if (n == NULL)
        return 0;
    return height(n->left) - height(n->right);
}

/* Insert into AVL Tree */
node* insert(node* root, int data) {
    if (root == NULL)
        return newNode(data);

    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);
    else
        return root;

    root->height = 1 + max(height(root->left), height(root->right));

    int balance = getBalance(root);

    // LL
    if (balance > 1 && data < root->left->data)
        return rightRotate(root);

    // RR
    if (balance < -1 && data > root->right->data)
        return leftRotate(root);

    // LR
    if (balance > 1 && data > root->left->data) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    // RL
    if (balance < -1 && data < root->right->data) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

/* Draw Tree */
void drawTree(node* root, int x, int y, int gap) {
    if (root == NULL)
        return;

    char str[10];
    sprintf(str, "%d", root->data);

    circle(x, y, 20);
    outtextxy(x - 10, y - 5, str);

    if (root->left) {
        line(x, y + 20, x - gap, y + 70);
        drawTree(root->left, x - gap, y + 70, gap / 2);
    }

    if (root->right) {
        line(x, y + 20, x + gap, y + 70);
        drawTree(root->right, x + gap, y + 70, gap / 2);
    }
}

/* Main */
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    node* root = NULL;
    int n, i, val;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter value: ");
        scanf("%d", &val);
        root = insert(root, val);
        cleardevice();
        drawTree(root, getmaxx() / 2, 50, 120);
        delay(800);
    }

    getch();
    closegraph();
    return 0;
}
