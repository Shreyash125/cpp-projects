#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>

class Book {
private:
    int bookID;
    std::string title;
    std::string author;
    bool isBorrowed;

public:
    Book(int id, std::string title, std::string author);

    int getBookID();
    std::string getTitle();
    std::string getAuthor();
    bool getBorrowedStatus();

    void borrowBook();
    void returnBook();
    void displayBookDetails();
};

#endif // BOOK_HPP
