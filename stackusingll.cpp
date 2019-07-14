#include <iostream>

using namespace std;

struct node {
  int data;
  node* link;
};

node *top = NULL;

bool isempty()
{
  if (top == NULL)
  return true;
  else
  return false;
}

void push (int value)
{
  node *ptr = new node;
  ptr -> data = value;
  ptr -> link = top;
  top = ptr;
}

void pop (){
 if (isempty())
 cout<<"The stack is empty !";
 else
{ node *ptr = top;
 top = top -> link;
 delete(ptr);
 cout<<"Top value popped !";
}
}

void showtop (){
  if (isempty())
  cout<<"The stack is empty !";
  else
  cout<<"The top of the stack is : "<< top -> data;
}

void showstack () {
  if (isempty())
  cout<<"The stack is empty !";
  else
  {
    node *temp = top;
    cout<<"The current stack looks like : "<<endl;
    while (temp != NULL)
    {
      cout<<temp->data<<" -> ";
      temp = temp -> link;
    }
  }
}

int main ()
{
  int c, flag = 0, value;
  while (flag == 0)
  {
    cout<<"Enter your choice\n  1. Push\n  2. Pop\n  3. Show Top\n  4. Display stack\n  Anything else to exit !\n           : ";
    cin>>c;
    switch(c) {
      case 1 : {
        cout<<"Enter the value to push : ";
        cin>>value;
        push(value);
        cout<<endl<<endl;
        break;
      }
      case 2 : {
        pop();
        cout<<endl<<endl;
        break;
      }
      case 3 : {
        showtop();
        cout<<endl<<endl;
        break;
      }
      case 4 : {
        showstack();
        cout<<endl<<endl;
        break;
      }
      default : {
        cout<<"Clearing memory and ending program ! "<<endl<<endl;
        flag = 1;
        break;
      }
    }
  }
  return 0;
}
