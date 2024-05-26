// typedef int num;

#include <stdio.h>
int main(){
    typedef struct book{
        int pages;
        int price;
    } book;

    book a;
    book b;
    book c;

    a.pages = 100;
    a.price = 80;

    b.pages = 400;
    return 0;
}
