#include <stdio.h>
#include <stdlib.h>

struct Node {
    int coeff;
    int exp;
    struct Node* next;
};

struct Node* createNode(int coeff, int exp) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coeff = coeff;
    newNode->exp = exp;
    newNode->next = NULL;
    return newNode;
}

struct Node* insertInOrder(struct Node* head, int coeff, int exp) {
    struct Node* newNode = createNode(coeff, exp);
    
    if (head == NULL || exp < head->exp) {
        newNode->next = head;
        return newNode;
    }

    struct Node* current = head;
    struct Node* previous = NULL;
    
    while (current != NULL && current->exp < exp) {
        previous = current;
        current = current->next;
    }
    
    if (current != NULL && current->exp == exp) {
        current->coeff += coeff;
        free(newNode);
        return head;
    }

    newNode->next = current;
    if (previous != NULL) {
        previous->next = newNode;
    }
    
    return head;
}

void printPoly(struct Node* poly) {
    while (poly != NULL) {
        printf("%d*x^%d", poly->coeff, poly->exp);
        if (poly->next != NULL) {
            printf(" + ");
        }
        poly = poly->next;
    }
    printf("\n");
}

struct Node* addPolynomials(struct Node* poly1, struct Node* poly2) {
    struct Node* result = NULL;

    while (poly1 != NULL || poly2 != NULL) {
        int coeff = 0;
        int exp = 0;

        if (poly1 != NULL && (poly2 == NULL || poly1->exp > poly2->exp)) {
            coeff = poly1->coeff;
            exp = poly1->exp;
            poly1 = poly1->next;
        } else if (poly2 != NULL && (poly1 == NULL || poly2->exp > poly1->exp)) {
            coeff = poly2->coeff;
            exp = poly2->exp;
            poly2 = poly2->next;
        } else { 
            coeff = poly1->coeff + poly2->coeff;
            exp = poly1->exp;
            poly1 = poly1->next;
            poly2 = poly2->next;
        }

        result = insertInOrder(result, coeff, exp);
    }

    return result;
}

int main() {
    struct Node* poly1 = NULL;
    struct Node* poly2 = NULL;
    int n1, n2, coeff, exp;

    printf("Enter the number of terms in the first polynomial: ");
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++) {
        printf("Enter coefficient and exponent for term %d: ", i + 1);
        scanf("%d %d", &coeff, &exp);
        poly1 = insertInOrder(poly1, coeff, exp);
    }

    printf("Enter the number of terms in the second polynomial: ");
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++) {
        printf("Enter coefficient and exponent for term %d: ", i + 1);
        scanf("%d %d", &coeff, &exp);
        poly2 = insertInOrder(poly2, coeff, exp); 
    }

    printf("First polynomial: ");
    printPoly(poly1);

    printf("Second polynomial: ");
    printPoly(poly2);

    struct Node* result = addPolynomials(poly1, poly2);

    printf("Resultant polynomial: ");
    printPoly(result);

    return 0;
}

