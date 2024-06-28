#include "Library.hpp"
#include <iostream>

bool Library::bookExists(int id) {
    for (auto &book : books) {
        if (book.getBookID() == id) {
            return true;
        }
    }
    return false;
}

void Library::addBook() {
    int id;
    std::string title;
    std::string author;

    std::cout << "Enter Book ID: ";
    std::cin >> id;
    if (bookExists(id)) {
        std::cout << "Book ID already exists.\n";
        return;
    }
    std::cout << "Enter Book Title: ";
    std::cin.ignore();
    std::getline(std::cin, title);
    std::cout << "Enter Book Author: ";
    std::getline(std::cin, author);

    Book newBook(id, title, author);
    books.push_back(newBook);
    std::cout << "Book added successfully.\n";
}

void Library::viewBook(int id) {
    for (auto &book : books) {
        if (book.getBookID() == id) {
            book.displayBookDetails();
            return;
        }
    }
    std::cout << "Book not found.\n";
}

void Library::borrowBook(int id) {
    for (auto &book : books) {
        if (book.getBookID() == id) {
            book.borrowBook();
            return;
        }
    }
    std::cout << "Book not found.\n";
}

void Library::returnBook(int id) {
    for (auto &book : books) {
        if (book.getBookID() == id) {
            book.returnBook();
            return;
        }
    }
    std::cout << "Book not found.\n";
}

void Library::displayAllBooks() {
    for (auto &book : books) {
        book.displayBookDetails();
        std::cout << "------------------------\n";
    }
}
