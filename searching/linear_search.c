#include<stdio.h>
int linear_search(int list[],int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (list[i] == key)
        {
            return i;
        }
        
    }
    return 0;
    
}
int main(int argc, char const *argv[])
{
    int size, key, index;
    printf("Enter the size of list\n");
    scanf("%d",&size);
    int list[size];
    printf("Enter the list Elements\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&list[i]);
    }
    printf("Enter the Key for find in list\n");
    scanf("%d",&key);
    index = linear_search(list, size, key);
    if(index){
        printf("The %d found at the index %d \n",key,index);
    }
    else{
        printf("The key %d in not found in list\n",key);
    }
    return 0;
}
