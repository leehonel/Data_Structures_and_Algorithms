#include<iostream>
//#include<conio.h>
#include<stdlib.h>
using namespace std;
 
class queue
{
              int queue1[5];
              int rear,front;
      public:
              queue()
                {
                     rear=-1;
                     front=-1;
                }
              void insert(int x)
               {
                   if(rear >  4)
                    {
                       cout <<"queue over flow";
                       front=rear=-1;
                       return;
                    }
                    queue1[++rear]=x;
                    cout <<"inserted" <<x;
               }
              void delet()
               {
                   if(front==rear)
                     {
                         cout <<"queue under flow";
                         return;
                     }
                     cout <<"deleted" <<queue1[++front];
                }
              void display()
               {
                   if(rear==front)
                     {
                          cout <<" queue empty";
                          return;
                     }
                   for(int i=front+1;i<=rear;i++)
                   cout <<queue1[i]<<" ";
               }
};
 
main()
{
      int ch;
      queue qu;
      while(1)
        {
              cout <<"\n1.insert  2.delet  3.display  4.exit\nEnter ur choice";
              cin >> ch;
              switch(ch)
                {
                  case 1:    cout <<"enter the element";
                           	 cin >> ch;
                             qu.insert(ch);
                             break;
                  case 2:  qu.delet();  break;
                  case 3:  qu.display();break;
                  case 4: exit(0);
                  }
          }
return (0);
}

/*
  Alternative Program
  *******************
  #include <iostream>
using namespace std;
int queue[100], n = 100, front = - 1, rear = - 1;
void Insert() {
   int val;
   if (rear == n - 1)
      cout<<"Queue Overflow"<<endl;
   else {
      if (front == - 1)
      front = 0;
      cout<<"Insert the element in queue : "<<endl;
      cin>>val;
      rear++;
      queue[rear] = val;
   }
}
void Delete() {
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow ";
   return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;;
   }
}
void Display() {
   if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
         cout<<queue[i]<<" ";
      cout<<endl;
   }
}
int main() {
   int ch;
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
do {
   cout<<"Enter your choice : "<<endl;
   cin<<ch;
   switch (ch) {
      case 1: Insert();
         break;
      case 2: Delete();
         break;
      case 3: Display();
         break;
      case 4: cout<<"Exit"<<endl;
         break;
      default: cout<<"Invalid choice"<<endl;
   }
} while(ch!=4);
   return 0;
}
  
*/