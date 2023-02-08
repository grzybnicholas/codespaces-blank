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
    title_ = title_;
    author_= author;
    page_count = pageCount;
    
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
  