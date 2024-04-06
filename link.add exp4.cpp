#include<iostream>
using namespace std;
class Node
{    public:
	int data;
	Node*next;
    Node(int value){
		data=value;
		next=NULL;
	}
};
class list{
	public:
		Node*head;
		list(){
			head=NULL;
		}
		void addNode(int value){
			Node*newNode=new Node(value);
			if(head==NULL)
			{
			
			head=newNode;}

   
		else
		{
			Node*temp=head;
			while(temp->next!=NULL)
			{
			temp=temp->next;}
			temp->next=newNode;
	}
	
 
}
		void display()
		{
			Node*temp=head;
			while(temp!=NULL)
			{
				cout<<temp->data<<"\n";
				temp=temp->next;
			}
			cout<<endl;
			
		}
};
int main()
{
	list l1;
	
	l1.addNode(3);
	l1.addNode(4);
    l1.addNode(7);
    l1.addNode(9);
    l1.addNode(8);
    l1.addNode(6);
    
    l1.display();
  return 0;
}
