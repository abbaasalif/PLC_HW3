#include <iostream>
using namespace std;

const int ARRAY_SIZE = 50000;

void arrayStatic();
void arrayStackDyanmic();
void arrayHeapDyanmic();

int main(){
clock_t start = clock();
arrayStatic();
start = clock() - start;
cout<<"Static array: "<<double(start / double(CLOCKS_PER_SEC))<< " seconds"<<endl;
clock_t start1 = clock();
 arrayStackDyanmic();
start1 = clock() - start1;
cout<<"Stack Dynamic: "<<double(start1 / double(CLOCKS_PER_SEC))<< " seconds"<<endl;
clock_t start2 = clock();
arrayHeapDyanmic();
start2 = clock() - start2;
cout<<"Heap Dynamic: "<<double(start2 / double(CLOCKS_PER_SEC))<< " seconds"<<endl;
}

void arrayStatic(){
  static int arr[ARRAY_SIZE];
  for(int i=0;i<ARRAY_SIZE;i++){
    arr[i]=i;
  }
}

void arrayStackDyanmic(){
  int arr[ARRAY_SIZE];
  for(int i=0;i<ARRAY_SIZE;i++){
    arr[i]=i;
  }
}

void arrayHeapDyanmic(){
  int* arr = new int[ARRAY_SIZE];
  for(int i=0;i<ARRAY_SIZE;i++){
    arr[i]=i;
  }
}
