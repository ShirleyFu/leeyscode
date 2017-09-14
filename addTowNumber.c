#include <stdio.h>
#include <stdlib.h>
int single(int  a, int  b);
struct ListNode {
      int val;
      struct ListNode *next;
};
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* resultH = malloc(sizeof(struct ListNode));
    struct ListNode* temp = malloc(sizeof(struct ListNode));
    resultH->val = single(l1->val,l2->val);;
    resultH->next = temp;
    while(l1->next  && l2->next){
        l1 = l1->next;
        l2 = l2->next;
        struct ListNode* temp1 = malloc(sizeof(struct ListNode));
        temp->next=temp1;
        temp->val = single(l1->val,l2->val);
        temp = temp->next;
    }
    return 0;
}

int single(int  a, int  b){
    if(a+b > 9)
        return (a+b)/10;
    return a+b;
}

int main() {
        struct ListNode* l1 = malloc(sizeof(struct ListNode));
        struct ListNode* l2 = malloc(sizeof(struct ListNode));
	l1->val = 3;
	l2->val = 4;
	addTwoNumbers(l1,l2);
	return 0;

}
