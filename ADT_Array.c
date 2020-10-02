#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray  *a, int tsize, int usize)
{
    // (*a).total_size=tsize;
    // (*a).used_size=usize;
    // (*a).ptr = (int *)malloc(tsize*sizeof(int));
    // ^ the upper code is as same as \/ **We can use anyof them--> (*a).oparetor // a->oparator
    a->total_size=tsize;
    a->used_size=usize;
    a->ptr = (int *)malloc(tsize*sizeof(int));
}


void set_val(struct myArray *a){
    int n;
    for (int i = 0; i < (a->used_size); i++)
    {
        printf("Enter the %dth value : ",i+1);
        scanf("%d",&n);
        (a->ptr)[i]=n;
    }
    
}
void get_val(struct myArray *a){
int n;
    for (int i = 0; i < (a->used_size); i++)
    {
        n=(a->ptr)[i];
        printf("The %dth value of your dynamic array is : %d \n",i+1,n);

    }
    
}

int main()
{
    struct myArray marks;
    createArray(&marks, 5, 4);
    set_val(&marks);
    get_val(&marks);
    return 0;
}