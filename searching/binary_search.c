#include<stdio.h>
int binary_search(int list[], int size, int key)
{   
   int start = 0, end = size-1, middle;
    while (start <= end)
    {
       middle = (start + end) /2;
       if (list[middle] == key)
       {
           return middle;
       }
       else if(list[middle] > key)
       {
           end = middle - 1; 
       }
       else
       {
           start = middle + 1;
       }
    }

    return 0;

}
int main(int argc, char const *argv[])
{
    int size, key, index, i;
    printf("Enter the list size\n");
    scanf("%d",&size);
    int list[size];
    printf("Enter the list elements\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d",&list[i]);
    }
    printf("Enter the key for finding in list\n");
    scanf("%d",&key);
    index = binary_search(list, size, key);
    if(index){
        printf("The %d found at the index %d \n",key,index);
    }
    else{
        printf("The key %d in not found in list\n",key);
    }
    return 0;
}
