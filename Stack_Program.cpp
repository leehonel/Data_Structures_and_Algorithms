#include<iostream>
//#include<conio.h>
#include<stdlib.h>
using namespace std;
class stack
{
             int stk[5];
             int top;
      public:
             stack()
              {
                top=-1;
               }
             void push(int x)
              {
                 if(top >  4)
                       {
 cout <<"stack over flow";
                           return;
                       }
                 stk[++top]=x;
                 cout <<"inserted" <<x;
               }
             void pop()
               {
                  if(top <0)
                   {
                cout <<"stack under flow";
                         return;
                    }
          cout <<"deleted" <<stk[top--];
                }
             void display()
               {
                   if(top<0)
                    {
                     cout <<" stack empty";
                            return;
                    }
                    for(int i=top;i>=0;i--)
                    cout <<stk[i] <<" ";
                }
};
int main()
{
     int ch;
     stack st;
     while(1)
        {
             cout <<"\n1.push  2.pop  3.display  4.exit\nEnter ur choice";
             cin >> ch;
             switch(ch)
              {
               case 1:  cout <<"enter the element";
                        cin >> ch;
                        st.push(ch);
                        break;
               case 2:  st.pop();  break;
                              case 3:  st.display();break;
               case 4:  exit(0);
               }
         }
return (0);
}



/*
  Alternative Program
  *******************


  #include <iostream>
using namespace std; 
int stack[100], n=100, top=-1;
void push(int val) {
   if(top>=n-1)
      cout<<"Stack Overflow"<<endl; 
   else {
      top++;
      stack[top]=val;
   }
}
void pop() {
   if(top<=-1)
      cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}
void display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
         cout<<stack[i]<<" ";
         cout<<endl;
   } else
      cout<<"Stack is empty";
}
int main() {
   int ch, val; 
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {   
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4); 
      return 0;
}
  
*/