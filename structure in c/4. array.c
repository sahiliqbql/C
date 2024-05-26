#include <stdio.h>
int main(){
    typedef struct book {
        int page;
        int price;
    } book;

    book arr[10];

    arr[0].page = 100;
    arr[0].price = 80;

    arr[1].page = 300;
    arr[1].price = 120;
    
    return 0;
}
