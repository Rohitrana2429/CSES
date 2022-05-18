#include<bits/stdc++.h>
using namespace std;
#define n NULL
class Node{
  public:
	int data;
	Node* next;

};
void add(Node** head_ref,int new_data)
{
	Node* new_node= new Node();
	new_node->data = new_data;
	new_node->next=(*head_ref);
	(*head_ref)= new_node;
}
void print(Node* head)
{
	while(head!=n)
		{
			cout<<head->data<<" ";
			head=head->next;
		}
}
int main()
{
	Node* head=n;
   /*Node* head = n;
   Node* one = n;
   Node* two =  n;

    head =  new Node();
    one = new Node();
    two = new Node();

    head->data=434;
    head->next=one;
    one->data=34;
    one->next=two;
    two->data=3434;
    two->next= n;
    print(head);*/
    add(&head,43);
    add(&head,34);
    print(head);
}