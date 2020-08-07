//
// Created by alex on 7. 08. 20.
//

#ifndef TASK0301_BOOK_H
#define TASK0301_BOOK_H

#include <iostream>

using namespace std;


class Book {
private:
    string title;
    string publisher;
    int pages;
    double price;
    int id;
    static int id_counter;

public:
    Book();
    Book(const string& title1, const string& publisher1, const int& pages1, const double& price1);
    Book(const Book& t);
    ~Book();

    // Set
    void set_title(const string& title);
    void set_publisher(const string& publisher);
    void set_pages(const int& pages);
    void set_price(const double& price);

    // Get
    const string get_title();
    const string get_publisher();
    const int get_pages();
    const double get_price();
    const int get_id();
    static int get_id_counter();

    const void print() const;
    const string to_string();

    static Book create_demo_book();
};


#endif //TASK0301_BOOK_H
