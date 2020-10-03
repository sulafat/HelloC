#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void demo1(){
int i;
    printf("Hello world!\n");

    char tracks[][80] = {
 "I left my heart in Harvard Med School",
 "Newark, Newark - a wonderful town",
 "Dancing with a Dork",
 "From here to maternity",
 "The girl from Iwo Jima",
};
for (i=0; i<=4; i++){

    printf(tracks[i]);
    printf("\n");
}
printf(tracks);

}

void demo2(){
char universe[] = "Blah blah food fun is there";
char lookingFor[] = "food";
if(strstr(universe, lookingFor))
    puts("Present");


}

void demo3(){
int x = 4;
printf("x lives at %p\n", &x);

int *ptr = &x;
*ptr = 53;

printf("%i", x);

//printf(&x)

}

void demo4(){
// char *st ={'hello'};
char s0[] = "dysfunctional";
char s1[] = "fun";
//printf("Hello");
printf("%s",s0);
printf(s0);

if (strstr(s0, s1)){
    printf("Found %s in %s", s1, s0);
}


}

int main()


{   demo4();

    //demo3();
    //demo2();
    //demo1();
    return 0;
}
