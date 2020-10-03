#include <stdio.h>
#include <stdlib.h>

typedef enum {
COUNT, POUNDS, PINTS
} unit_of_measure;

typedef union {
short count;
float weight;
float volume;
} quantity;

typedef struct{
const char *name;
const char *country;
quantity amount;
unit_of_measure units;

} fruit_order;

void display(fruit_order order){
printf("This order contains");
if(order.units==PINTS)
    printf("%2.2f pints of %s \n", order.amount.volume, order.name);

}

typedef struct{
unsigned int flow:1;
unsigned int blah : 1;
} flag;
void main(){
    flag f = {1,0};
printf("%i %i", f.flow, f.blah);
//fruit_order oj = {"orange juice", "U.S.A.", .amount.volume=10.5,PINTS };
 //display(oj);

return 0;

}
