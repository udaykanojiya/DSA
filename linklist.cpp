#include<bits/stdc++.h>
using namespace std;    

class LL{
    int val;
    LL* next;
public:
    
    LL * crateFirstNode(int value){
        LL * newNode = new LL();
        newNode->val = value;
        newNode->next = nullptr;
        return newNode;
    }

    LL * addNode(LL * head, int value){
        LL * newNode = new LL();
        newNode->val = value;
        newNode->next = nullptr;

        if(head == nullptr){
            return newNode;
        }

        LL * temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newNode;
        delc
        return head;
    }

    void 
}