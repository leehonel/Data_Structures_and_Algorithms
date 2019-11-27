#include <iostream>
//#include<conio.h>
#define MAX 10
using namespace std;
class selsort{
    int arr[MAX],n;
    public:
    void getdata();
    void showdata();
    void sortLogic();
};
void selsort :: getdata(){
    cout<<"How many elements you require : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Element in Cell :"<<i;
        cin>>arr[i];
    }
}
void selsort :: showdata(){
    cout<<"\n--Sorted Elements--\n";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"   ";
}
void selsort :: sortLogic(){
    int temp,min;
    for(int i=0;i<n;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min] > arr[j]){
                min=j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
        cout<<"\n arr[min] = "<<arr[min]<<"  arr[i] = "<<arr[i];
    }
}
int main(){
//clrscr();
       cout<<"\n*****Selection Sort*****\n";
    selsort obj;
    obj.getdata();
    obj.sortLogic();
    obj.showdata();
}

/*
    Alternative Program
    *******************


    #include<iostream>
using namespace std;
void swapping(int &a, int &b) {         //swap the content of a and b
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void selectionSort(int *array, int size) {
   int i, j, imin;
   for(i = 0; i<size-1; i++) {
      imin = i;   //get index of minimum data
      for(j = i+1; j<size; j++)
         if(array[j] < array[imin])
            imin = j;
         //placing in correct position
         swap(array[i], array[imin]);
   }
}
int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];           //create an array with given number of elements
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   selectionSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
}
*/