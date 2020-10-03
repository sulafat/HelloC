#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
char allSongs [][80] = { "I left my heart in Harvard Med School",
 "Newark, Newark - a wonderful town",
 "Dancing with a Dork",
 "From here to maternity",
 "The girl from Iwo Jima",};
*/


void go_south_east(int *lat, int *lng){
*lat -=1;
*lng+=1;

}
void find_track(char search_for[])
{

char allSongs [][80] = { "I left my heart in Harvard Med School",
 "Newark, Newark - a wonderful town",
 "Dancing with a Dork",
 "From here to maternity",
 "The girl from Iwo Jima",};


 int i;
 for (i = 0; i < 5; i++) {
 if (strstr(allSongs[i], search_for))
 printf("Track %i: '%s'\n", i, allSongs[i]);
 }
}

/*
void findSong(char toSearch[]){
int i;
printf("Here");
for(i=0;i<5;i++) {

    if (strstr(allSongs[i], toSearch)){
        printf(i);
    }


}

}
*/
void printMsg(char msg[]){
printf("Message is %s", msg);
}

void session3(){

char searched[80];

printf("Enter song name");
fgets( searched, 80, stdin);
printf(searched);
//findSong(searched);
find_track(searched);
}

void skip(char* msg){
puts(msg+6);
}

void session1(){
char* _message = "Don't call me";
    skip(_message);
    printf("Hello world!\n");
    int latitude = 45;
    int longitude = 56;
    char message[] = "Food food";
    printMsg(message);
    go_south_east(&latitude, &longitude);
    printf("\n Now at [%i, %i]", latitude, longitude);
}

void session2(){
char name[40];

printf("Enter name \n");
scanf("%39s",name);
printf(name);
}
int main()
{   //session1();
    //session2();
    session3();
    return 0;
}
