#include <stdio.h>
#include <stdlib.h>

typedef struct island{
char * name;
char * opens;
char * closes;
struct island * next;
} island;



void display(island *start){

island *i = start;
for(; i != NULL; i = i->next){
    printf("%s %s %s \n", i->name, i->opens, i->closes);

}

}

int main()
{
    printf("Hello world!\n");
    island amity = {"Amity", "09:00", "17:00", NULL};
    island nebula = {"Nebula", "09:10", "17:10", NULL};
    island centura = {"Centura", "09:20", "17:20", NULL};
    island scalar = {"Scalar", "09:30", "18:00", NULL};
    amity.next = &nebula;
    nebula.next = &centura;

    display(&amity);
    printf("\n***********New addition*************\n");

    nebula.next = &scalar;
    scalar.next = &centura;
    display(&amity);
    return 0;
}
