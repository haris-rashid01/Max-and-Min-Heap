#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int MaxHeap[SIZE];
int left = 2 * index + 1;
int right = 2 * index + 2;
int root = 0, temp;

void swap(int a, int b){
    temp = 0;
    temp = a;
    a = b;
    b = temp;
}
void insert(int x){
    MaxHeap[root] = x;
    root++;
    printf("Value %d is inserted\n", x);
}
void delete(int x){
    if (SIZE == 0)
    {
        printf("Heap is empty\n");
    }
    for (int i = 0; i < SIZE - 1; i++)
    {
        if (MaxHeap[i] == x)
        {
            if (MaxHeap[left] == 0 || MaxHeap[right] == 0)
            {
                swap(x, MaxHeap[SIZE - 1]);
                

            }
            temp = MaxHeap[SIZE - 1];
            root--;
        }
        
    }
    

}
void maxHeap(int Heap[], int index){
    int left = 2 * index + 1;
    int right = 2 * index + 2;
    int root = 0;
for (int  i = 0; i < SIZE - 1; i++)
{
    if (MaxHeap[root] > MaxHeap[left] && MaxHeap[root] > MaxHeap[right] )
    {
        root++;
    }
    else if (MaxHeap[root] < MaxHeap[left])
    {
        swap(MaxHeap[left], MaxHeap[root]);
    }
     else if (MaxHeap[root] < MaxHeap[right])
    {
        swap(MaxHeap[right], MaxHeap[root]);
    }
    root++;
    
}



}
int main(){
    int x, opt;
do
{
    printf("Enter 1 to insert\n2 to delete\n3 to display\n");
    scanf("%d", &opt);
    switch (opt)
    {
    case 1:
    printf("Enter value to insert in Heap\n");
    scanf("%d", &x);
        insert(x);
        break;
    
    default:
        break;
    }
    
} while (opt != -1);








}