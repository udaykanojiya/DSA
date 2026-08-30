#include <iostream>

// Definition for a singly-linked list node
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to detect a cycle
bool hasCycle(ListNode *head) {
    if (head == nullptr || head->next == nullptr) {
        return false;
    }
    
    ListNode *slow = head;
    ListNode *fast = head;
    
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        
        if (slow == fast) {
            return true; // Cycle detected
        }
    }
    
    return false; // No cycle
}

int main() {
    // 1. Create nodes: 1 -> 2 -> 3 -> 4
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    
    // 2. Intentionally create a cycle: link node 4 back to node 2
    head->next->next->next->next = head->next; 
    
    // 3. Test the function
    if (hasCycle(head)) {
        std::cout << "Result: Linked list has a cycle." << std::endl;
    } else {
        std::cout << "Result: No cycle found." << std::endl;
    }
    
    // Note: Since there is a cycle, standard manual memory cleanup 
    // requires breaking the cycle first to prevent infinite loops.
    head->next->next->next->next = nullptr;
    delete head->next->next->next;
    delete head->next->next;
    delete head->next;
    delete head;

    return 0;
}
