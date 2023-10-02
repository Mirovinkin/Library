// Library.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iostream>
#include <iostream>
#include <string>
#include <math.h>
#include <windows.h>
#include <locale.h>
#include <string.h>
#include <typeinfo>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
//#include <cstdlib>
#include <ctype.h>
#include <time.h>
#include <map>

using namespace std;

class Author
{
private:
    string _name;
    string _surname;
public:
    Author() {};
    Author(const string& Name, const string& Surname) : _name(Name), _surname(Surname) {};

    void SetName(const string& Name) {
        _name = Name;
    }

    const string GetName() {
        return _name;
    }
    void SetSurname(const string& Surname) {
        _surname = Surname;
    }

    const string GetSurname() {
        return _surname;
    }
};
class Book
{
private:
    string _publisher;
    string _title;
    int _pageNumber;
    int _publishedYear;

public:
    Book() {};
    Book(const string& Publisher, const string& Title, const int& PageNumber) :
        _publisher(Publisher),
        _title(Title),
        _pageNumber(PageNumber) {};

    void SetPublisher(const string& Publisher) {
        _publisher = Publisher;
    }
    const string GetPublisher() {
        return _publisher;
    }

    void SetTitle(const string& Title) {
        _title = Title;
    }
    const string GetTitle() {
        return _title;
    }

    void SetPage(const int& PageNumber) {
        _pageNumber = PageNumber;
    }

    const int GetPage() {
        return _pageNumber;
    }

    void SetPublishedYear(const int& PublishedYear) {
        _publishedYear = PublishedYear;
    }

    const int GetPublishedYear() {
        return _publishedYear;
    }


};

class Library
{
private:
    map<Author, Book> _books;
    Author author;
    Book book;

public:
    Library(const Author& author, const Book& book)
    {
        _books[author] = book;
    };

    void GetNumberOfBooksByAuthor(const string& Author) {
        cout << "Имя автора:" << Author << endl << "Список книг:\n";

        for (auto iter{ _books.begin() }; iter != _books.end(); iter++)
        {
            this->author = iter->first;
            if (author.GetName() == Author) {
                cout << iter->second.GetTitle() << endl;
            }
        }
    }

    void GetNumberOfBooksByPublisher(const string& Publisher) {
        cout << "Издательство: " << Publisher << "\n" << "Список книг:\n";

        for (auto iter{ _books.begin() }; iter != _books.end(); iter++)
        {
            this->book = iter->second;

            if (book.GetPublisher() == Publisher) {
                cout << book.GetTitle() << "\n";
            }

        }
    }
    void GetNumberOfBooksByPublishedYear(const int& PublishedYear) {
        cout << "Книги, выпущенные после " << book.GetPublishedYear() << " года\n";

        for (auto iter{ _books.begin() }; iter != _books.end(); iter++)
        {
            this->book = iter->second;
            if (book.GetPublishedYear() > PublishedYear) {
                cout << book.GetTitle() << endl;
            }
        }
    }


};
int main()
{
    setlocale(LC_ALL, "RUS");
}
