#include <iostream>

using namespace std;
class Node {
public:
    char charact;
    Node*next;
    };

void printlist(Node*n){
    while (n != NULL){
        cout << n->charact<< endl;
        n = n->next;
    }
}
void frontInsertion(Node**head, char newCharact){
    Node* newNode = new Node();
    newNode ->charact = newCharact;

    newNode ->next = *head;
    *head = newNode;
}
void endInsertion(Node**head, char newCharact){
    Node* newNode = new Node();
    newNode ->charact = newCharact;
    newNode ->next = NULL;

    if(*head == NULL){
        *head = newNode;
        return;
    }
    Node* last = *head;
    while(last->next!=NULL){
        last=last->next;
    }
    last -> next = newNode;

}
void afterInsertion(Node* previous, char newCharact){
    if(previous == NULL){
        cout << "Previous cannot be null";
        return;
    }
    Node* newNode = new Node();
    newNode->charact = newCharact;

    newNode->next = previous->next;
    previous->next =  newNode;
}
int main()
{
   Node* head = new Node();
   Node* second = new Node();
   Node* third = new Node();
   Node* fourth = new Node();
   Node* fiveth = new Node();
   Node* sixth = new Node();
   Node* seventh = new Node();
   Node* eighth = new Node();
   Node* nineth = new Node();

   head->charact = 'A';
   head-> next = second;
   second->charact = 'B';
   second-> next = third;
   third->charact = 'A';
   third-> next = fourth;
   fourth->charact = 'T';
   fourth->next = fiveth;
   fiveth->charact = 'S';
   fiveth->next = sixth;
   sixth->charact = 'H';
   sixth->next = seventh;
   seventh->charact = 'A';
   seventh->next = eighth;
   eighth->charact = 'N';
   eighth->next = nineth;
   nineth->charact = 'A';
   nineth->next = NULL;
//frontInsertion(&head, 'Z');
endInsertion(&head, 'G');
//afterInsertion(head, 'S');
printlist(head);


    return 0;
}
