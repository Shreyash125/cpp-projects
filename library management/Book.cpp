#include "Book.hpp"
#include <iostream>

Book::Book(int id, std::string title, std::string author) : bookID(id), title(title), author(author), isBorrowed(false) {}

int Book::getBookID() {
    return bookID;
}

std::string Book::getTitle() {
    return title;
}

std::string Book::getAuthor() {
    return author;
}

bool Book::getBorrowedStatus() {
    return isBorrowed;
}

void Book::borrowBook() {
    if (!isBorrowed) {
        isBorrowed = true;
        std::cout << "Book borrowed successfully.\n";
    } else {
        std::cout << "Book is already borrowed.\n";
    }
}

void Book::returnBook() {
    if (isBorrowed) {
        isBorrowed = false;
        std::cout << "Book returned successfully.\n";
    } else {
        std::cout << "Book was not borrowed.\n";
    }
}

void Book::displayBookDetails() {
    std::cout << "Book ID: " << bookID << std::endl;
    std::cout << "Title: " << title << std::endl;
    std::cout << "Author: " << author << std::endl;
    std::cout << "Borrowed: " << (isBorrowed ? "Yes" : "No") << std::endl;
}
