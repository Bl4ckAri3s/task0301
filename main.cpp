#include <iostream>
#include <vector>
#include "Book.h"



double get_book_total(const std::vector<Book*>& books) {
    double sum = 0;

    for (const auto &book : books)
        sum += book->get_price();

    return sum;
}


int main() {
    std::vector<Book*> books;

    Book a = Book::create_demo_book();

    books.push_back(new Book("XX", "Zalozba 2", 150, 19.99));
    books.push_back(new Book("X2", "Zalozba 1", 15, 9.99));
    books.push_back(new Book("X3", "Zalozba 3", 250, 29.99));

    a.print();

    cout << endl << endl <<
        "Book total is: " << get_book_total(books)
    << endl << endl;

    for (const auto& book : books) {
        book->print();
        cout << endl << endl;
    }



    return 0;
}
