#include <stdio.h>

typedef struct{
    int day;
    int month;
    int year;
} Date;

void dateFormat1(Date d, char s[]);
void scanDate(Date *d);

int main(){
    Date d;
    char msg[80];
    



    scanDate(&d);
    dateFormat1(d, msg);

}
void dateFormat1(Date d, char s[]){
    sprintf(s, "%02d/%04d/%06d", d.day, d.month, d.year);


}
void scanDate(Date *d){
    scanf("%d %d %d", &d->day, &d->month, &d->year);
}