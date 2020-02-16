#include<stdio.h>
#include<math.h>

int jump_search(int list[], int size, int key)
{   
    int start = 0, end = sqrt(size);
    while (list[end] < key && end < size)
    {
        start = end, end += sqrt(size);
    }

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
    index = jump_search(list, size, key);
    if(index){
        printf("The %d found at the index %d \n",key,index);
    }
    else{
        printf("The key %d in not found in list\n",key);
    }
    return 0;
}

