#ifndef BOOK_HPP_
#define BOOK_HPP_

#include <iostream>
#include <string>
using namespace std;

class Book 
{
private:
  string title_;
  string author_;
  int page_count;
  bool digital_;
public:
  Book();
  Book(const string& title,const string& author,const int& pageCount,const bool& digital = false);
  void setTitle(const string& title);
  string getTitle() const;
  void setAuthor(const string& author);
  string getAuthor() const;
  void setPageCount(const int& pageCount);
  int getPageCount() const;
  void setDigital();
  bool isDigital() const; 

};

#endif