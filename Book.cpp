//
// Created by alex on 7. 08. 20.
//

#include "Book.h"
#include <sstream>
#include <random>

int Book::id_counter = 10000;

Book::Book() : title(""), publisher(""), pages(), price(0) {
    id = id_counter++;
}

Book::Book(const string& title1, const string& publisher1, const int& pages1, const double& price1) : title(title1), publisher(publisher1), pages(pages1), price(price1) {
    id = id_counter++;
}

Book::Book(const Book& b) : title(b.title), publisher(b.publisher), pages(b.pages), price(b.price) {
    id_counter++;
}

Book::~Book() {
}


void Book::set_title(const string &title) {
    this->title = title;
}

void Book::set_publisher(const string& publisher) {
    this->publisher = publisher;
}

void Book::set_pages(const int& pages) {
    this->pages = pages;
}

void Book::set_price(const double& price) {
    this->price = price;
}


const string Book::get_title() {
    return title;
}

const string Book::get_publisher() {
    return publisher;
}

const int Book::get_pages() {
    return pages;
}

const double Book::get_price() {
    return price;
}

const int Book::get_id() {
    return id;
}

const void Book::print() const {
    cout << "=== Book info ===";
    cout << "\nTitle: " << title;
    cout << "\nPublisher: " << publisher;
    cout << "\nPages: " << pages;
    cout << "\nPrice: " << price;
    cout << "\nID: " << id;
}

const string Book::to_string() {
    stringstream ss;

    ss << "=== Book info ===";
    ss << "\nTitle: " << title;
    ss << "\nPublisher: " << publisher;
    ss << "\nPages: " << pages;
    ss << "\nPrice: " << price;
    ss << "\nID: " << id;

    return ss.str();
}

int Book::get_id_counter() {
    return id_counter;
}

Book Book::create_demo_book() {
    random_device rd;
    uniform_int_distribution<int> strings(0, 3);
    uniform_int_distribution<int> pages(20, 400);
    uniform_real_distribution<double> prices(2.50, 39.99);

    string title[4] = {"Janko in Metka", "Košarkar naj bo", "Nogometaš", "Pod Soncem"};
    string publisher[4] = {"Zalozba 1", "Zalozba 2", "Zalozba 3", "Zalozba 4"};

    return (Book(title[strings(rd)], publisher[strings(rd)], pages(rd), prices(rd)));
}