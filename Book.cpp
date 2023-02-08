#include "Book.hpp"
#include <iostream>
#include <string>
using namespace std;
/** Default constructor
 Initialize all of the private member data types in the book class
*/
Book::Book(){
  title_= "";
  author_= "";
  page_count=0;
  digital_=false;
}

/** Parameterized constructor
param : title of the book that the user wants (a string)
param : the author of said book(a string)
param : the amount of pages that the book has (a not negative integer)
param : checks if the book has a digital form, but in this case it just sets it to its default value, which is false
post : the private data members of the book class are set the values of the parameters
*/
  Book::Book(const string& title,const string& author,const int& pageCount,const bool& digital){
    title_ = title;
    author_= author;
    page_count = pageCount;
    digital_ = digital;
  }
/**
@param : a copy of the book title
post: the book tilte becomes the value of the parameter
*/
  void Book::setTitle(const string& title){
    title_ = title;
  }
/**
 return :the title of the book
*/
  string Book::getTitle() const{
    return title_;
  }
/**
param : a copy of the book's author
post : sets the value of author to the value of the parameter
*/
  void Book::setAuthor(const string& author){
    author_ = author;
  }
/**
return : the author of the book
*/
  string Book::getAuthor() const{
    return author_;
  }
/**
param : a positive integer
pre : the value of pageCount can not be negative, as a book's page count can't be negative
post : sets pageCount to the value of the parameter, if its a positive integer
*/
  void Book::setPageCount(const int& pageCount){
   if(pageCount >0){
    page_count = pageCount;
     }
  }
/**
return : the value of pageCount
*/
  int Book::getPageCount() const{
    return page_count;
  }
/**
post : sets the value of digitial to be true
*/
  void Book::setDigital(){
    digital_ = true;
  }
/**
 return: true if the book has a digital form, false otherwise
 */
  bool Book::isDigital() const{
    if(digital_ == true){
      return true;
    } else {
      return false;
      }
    }
int main() {
    std::cout << "TEST 1: TEST DEFAULT CONSTRUCTOR & ACCESSORS" << std::endl;

    // Test default constructor
    Book my_book;

    // Test accessor functions
    std::cout << my_book.getTitle() << std::endl;
    std::cout << my_book.getAuthor() << std::endl;
    std::cout << my_book.getPageCount() << std::endl;
    std::cout << my_book.isDigital() << std::endl;


    std::cout << "\nTEST 2: TEST PARAMETERIZED CONSTRUCTOR & ACCESSORS" << std::endl;

    // Test parameterized constructor
    Book my_book1("Harry Potter and the Chamber of Secrets", "J.K Rowling", 253, 1);
    Book my_book2("Moby Dick", "Herman Melville", 378);
    
    // Test accessor functions
    std::cout << my_book1.getTitle() << " By " << my_book1.getAuthor() 
        << " with page count " << my_book1.getPageCount() << std::endl;
    std::cout << "Digital: " << my_book1.isDigital() << std::endl;

    std::cout << my_book2.getTitle() << " By " << my_book2.getAuthor() 
        << " with page count " << my_book2.getPageCount() << std::endl;
    std::cout << "Digital: " << my_book2.isDigital() << std::endl;

    
    std::cout << "\nTEST 3: TEST MUTATOR FUNCTIONS" << std::endl;

    // Test mutator functions
    Book my_book3("Moby Dick", "Herman Melville", 378);
    my_book3.setTitle("50 shades of gray");
    my_book3.setAuthor("E. L. James");
    my_book3.setPageCount(514);
    my_book3.setPageCount(-10);
    my_book3.setDigital();

    // Test accessor functions
    std::cout << my_book3.getTitle() << " By " << my_book3.getAuthor() 
        << " with page count " << my_book3.getPageCount() << std::endl;
    std::cout << "Digital: " << my_book3.isDigital() << std::endl;
}
