#include <stdio.h>
#include <string.h>

struct Books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

void printBook(struct Books book);

int main(){
    struct Books Book1;
    struct Books Book2;

    // Book1 Specs
    strcpy(Book1.title,"C Programming");
    strcpy(Book1.author, "Richard Dennis");
    strcpy(Book1.subject,"C Programming Tutorial");
    Book1.book_id = 131414;

    // Book2 Specs
    strcpy(Book2.title,"Telecom Billing");
    strcpy(Book2.author, "Dhanasekar");
    strcpy(Book2.subject,"Telecom Billing Tutorial");
    Book2.book_id = 93194;

    // Printing Book1 Info
    printBook(Book1);

    // Printing Book2 Info
    printBook(Book2);

    return 0;
}

void printBook(struct Books book){
    printf("Book title : %s\n",book.title);
    printf("Book author : %s\n",book.author);
    printf("Book subject : %s\n",book.subject);
    printf("Book ID : %d\n",book.book_id);
    printf("\n");
}