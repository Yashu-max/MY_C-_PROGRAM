#include<stdio.h>
enum week{
    monday,
    tuesday,
    ,
    thursday,
    friday,
    saturaday,
    sunday
};
int main(){
   enum week today;
  today= tuesday;
  printf("%d",today);
}
