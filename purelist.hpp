#include <iostream>

class List {
public:
  // Dumb Node implementation
  struct Node {
    /* Member variables */
    int data;
    Node* next;

    /* Constructors */
    Node() { next = nullptr; }
  };

  /* Member variables */
  Node* head;
  Node* tail;
  

  /* Constructors */
  List() { head = nullptr; tail = nullptr; }

  /* Destructor */
  //~List() { clear(); }

  /* Member functions */
  virtual void decapitate() = 0;
  virtual void decaudate() = 0;
  virtual void append( int value ) = 0;
  virtual void prepend( int value ) = 0;
  virtual unsigned int length() = 0;
  virtual int itemAtHead() = 0;
  virtual int itemAtTail() = 0;
  virtual int itemAt( const unsigned int position ) = 0;
  virtual void clear() = 0;
  virtual void printContents() = 0;
};

class LinkedList : public List {
public:
  /* Member functions */
  int itemAtHead();
  int itemAtTail();
  void prepend( int value );
  void append( int value );
  void decapitate();
  void decaudate();
  unsigned int length();
  int itemAt( const unsigned int position );
  void printContents();
  void clear();
};
