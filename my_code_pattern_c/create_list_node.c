// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};


// 创立一个单向链表并遍历
int main(void)
{
    struct ListNode head, p2, p3, p4, p5;
    head.val = 1;
    head.next = &p2;
    p2.val = 2;
    p2.next = &p3;
    p3.val = 3;
    p3.next = &p4;
    p4.val = 2;
    p4.next = &p5;
    p5.val = 1;
    p5.next = NULL;

//     初始化后遍历显示
    struct ListNode *cur, *pre, *nxt;
    cur = &head;
    while (cur != NULL) {
        printf("%d ",cur->val);
        cur = cur->next;
    }
    printf("\n");

    return 0;
}