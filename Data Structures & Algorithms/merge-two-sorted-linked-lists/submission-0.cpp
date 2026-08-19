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
         vector<int> arr1;
       
         ListNode*temp1=list1;
         while(temp1!=NULL){
            arr1.push_back(temp1->val);
            temp1=temp1->next;
         }
         ListNode*temp2=list2;
         while(temp2!=NULL){
            arr1.push_back(temp2->val);
            temp2=temp2->next;
         }
 
         sort(arr1.begin(),arr1.end());
         if(arr1.empty())
    return NULL;
        ListNode* head = new ListNode(arr1[0]);
ListNode* temp = head;

for(int i = 1; i < arr1.size(); i++) {
    temp->next = new ListNode(arr1[i]);
    temp = temp->next;
}

return head;


    }
};
