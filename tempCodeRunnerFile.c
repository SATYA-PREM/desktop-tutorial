#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list
struct ListNode {
    int val;
    struct ListNode *next;
};

// Function to create a new node
struct ListNode* createNode(int val) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

// Function to add two numbers represented as linked lists
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* dummy = createNode(0);
    struct ListNode* current = dummy;
    int carry = 0;

    while (l1 || l2 || carry) {
        int val1 = (l1) ? l1->val : 0;
        int val2 = (l2) ? l2->val : 0;
        int sum = val1 + val2 + carry;

        carry = sum / 10;
        current->next = createNode(sum % 10);
        current = current->next;

        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
    }

    return dummy->next;
}

// Function to create a linked list from an array
struct ListNode* createLinkedList(int arr[], int size) {
    if (size == 0) return NULL;
    struct ListNode* head = createNode(arr[0]);
    struct ListNode* current = head;
    for (int i = 1; i < size; i++) {
        current->next = createNode(arr[i]);
        current = current->next;
    }
    return head;
}

// Function to print the linked list
void printLinkedList(struct ListNode* head) {
    while (head) {
        printf("%d ", head->val);
        head = head->next;
    }
    printf("\n");
}

// Main function to test the implementation
int main() {
    int arr1[] = {2, 4, 3};
    int arr2[] = {5, 6, 4};
    
    struct ListNode* l1 = createLinkedList(arr1, 3);
    struct ListNode* l2 = createLinkedList(arr2, 3);

    struct ListNode* result = addTwoNumbers(l1, l2);
    printLinkedList(result); // Output: 7 0 8

    return 0;
}
