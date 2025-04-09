/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
             //recursive method
        if(list1==NULL|| list2==NULL){
            return list1==NULL ? list2:list1;
        }
        //case1
        if(list1->val <=list2->val){
            list1->next=mergeTwoLists(list1->next,list2);
            return list1;
        }else{
            list2->next=mergeTwoLists(list1,list2->next);
            return list2;
        }

        // ListNode* newList=new ListNode(0);//dummy node
        // ListNode* curr=newList;

        // while(list1 != NULL && list2 != NULL){
        //     if(list1->val < list2->val){
        //          curr->next=list1;
        //          list1=list1->next;
        //     }else{//equal aur greater vala case
        //         curr->next=list2;
        //         list2=list2->next;
        //     }
        //     curr=curr->next;

        // }
        // //attach remaining nodes
        // if(list1 != NULL) curr->next=list1;
        // if(list2 != NULL) curr->next=list2;

        // return newList->next; // Return merged list without dummy node

    }
};