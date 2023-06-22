#include <iostream>
using namespace std;

typedef struct node Node;

struct node {
    int data;
    Node *next;
};

//MARK:- Create node in LinkedList
Node *create_node(int item, Node *next) {

    Node *new_node = (Node *) malloc(sizeof(Node));

    if (new_node == NULL) {
        cout<<"Error! Could Not Create A New Node"<<endl;
        exit(1);
    }

    new_node->data = item;
    new_node->next = next;

    return new_node;
}

//MARK:- Remove node from LinkedList
Node *remove_node(Node *head, Node *node) {

    //if removing first node
    if (node == head) {
        head = node->next;
        free(node);
        return head;
    }

    //find the node by looping
    Node *current_node = head;
    while(current_node != NULL) {
        if(current_node->next == node) {
            break;
        }

        current_node = current_node->next;
    }

    //if node doesn't exist
    if(current_node == NULL) {
        return head;
    }

    //if node found then change the address
    current_node->next = node->next;
    free(node);
    return head;
}

//MARK:- Insert node at the beggining of LinkedList
// call above as -> head = prepend(head, item);
Node *prepend(Node *head, int item) {

    Node *new_node = create_node(item, head);
    return new_node;
}

//MARK:- Insert node at the end of LinkedList
Node *append(Node *head, int item) {

    Node *new_node = create_node(item, NULL);

    if (head == NULL) {
        return new_node;
    }

    Node *current_node = head;

    while(current_node->next != NULL) {
        current_node = current_node->next;
    }

    current_node->next = new_node;
    return head;
}

//MARK:- Insert middle of the LinkedList
void insert(Node *node, int item) {

    Node *new_node = create_node(item, node->next);
    node->next = new_node;
}

//MARK:- Traverse a LinkedList
void print_linked_list(Node *head) {

    Node *current_node = head;
    while (current_node != NULL) {
        printf("Value: %d, Address: %d: ", current_node->data, current_node->next);
        cout<<endl;
        current_node = current_node->next;
    }

    cout<<endl;
}

int main() {
    Node *head1;
    head1 = create_node(1, NULL);
    insert(head1, 2);
    append(head1, 3);
    head1 = prepend(head1, 4);
    print_linked_list(head1);

    Node *head2;
    head2 = create_node(10, NULL);
    insert(head2, 11);
    append(head2, 12);
    head2 = prepend(head2, 13);
    print_linked_list(head2);

    return 0;
}
