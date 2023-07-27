#include <stdio.h>
#include <stdlib.h>

typedef enum TypeTag {
    ADD,
    MUL,
    SUB,
    DIV,
    FIBO,
} TypeTag;

typedef struct Node {
    TypeTag type;
    int value;
} Node;

// Function pointer type for arithmetic operations
typedef Node *(*ArithmeticFunc)(int, int);

Node *add(int a, int b) {
    Node *result = (Node *)malloc(sizeof(Node));
    result->type = ADD;
    result->value = a + b;
    return result;
}

Node *mul(int a, int b) {
    Node *result = (Node *)malloc(sizeof(Node));
    result->type = MUL;
    result->value = a * b;
    return result;
}

Node *sub(int a, int b) {
    Node *result = (Node *)malloc(sizeof(Node));
    result->type = SUB;
    result->value = b - a;
    return result;
}

Node *division(int a, int b) {
    Node *result = (Node *)malloc(sizeof(Node));
    result->type = DIV;

    if (a == 0) {
        printf("Error: Division by zero is not allowed.\n");
        result->value = 0; 
    } else {
        result->value = b / a;
    }

    return result;
}

Node *fibo(int n) {
    Node *result = (Node *)malloc(sizeof(Node));
    result->type = FIBO;

    if (n <= 0) {
        result->value = 0;
    } else if (n == 1) {
        result->value = 1;
    } else {
        int prev = 0, curr = 1;
        for (int i = 2; i <= n; i++) {
            int next = prev + curr;
            prev = curr;
            curr = next;
        }
        result->value = curr;
    }

    return result;
}

void calc(Node *node) {
    switch (node->type) {
        case ADD:
            printf("add : %d\n", node->value);
            break;
        case MUL:
            printf("mul : %d\n", node->value);
            break;
        case SUB:
            printf("sub : %d\n", node->value);
            break;
        case DIV:
            printf("div : %d\n", node->value);
            break;
        case FIBO:
            printf("fibo : %d\n", node->value);
            break;
        default:
            printf("Invalid operation\n");
    }
}

int main() {
    ArithmeticFunc makeFunc[5] = {(ArithmeticFunc)add, (ArithmeticFunc)mul, (ArithmeticFunc)sub, (ArithmeticFunc)division, (ArithmeticFunc)fibo};
    Node *add = makeFunc[ADD](10, 6);
    Node *mul = makeFunc[MUL](5, 4);
    Node *sub = makeFunc[SUB](mul->value, add->value);
    Node *div = makeFunc[DIV](2, 10);

    // we send the second parameter with any integer (0) as ArithmeticFunc take 2 ingeters but we consider about the first one only
    Node *fibo = makeFunc[FIBO](sub->value,0);  

    calc(add);
    calc(mul);
    calc(sub);
    calc(div);
    calc(fibo);

    // Free the allocated memory
    free(add);
    free(mul);
    free(sub);
    free(div);
    free(fibo);

    return 0;
}
