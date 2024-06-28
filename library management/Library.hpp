#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include "Book.hpp"
#include <vector>

class Library {
private:
    std::vector<Book> books;

public:
    bool bookExists(int id);
    void addBook();
    void viewBook(int id);
    void borrowBook(int id);
    void returnBook(int id);
    void displayAllBooks();
};

#endif // LIBRARY_HPP
