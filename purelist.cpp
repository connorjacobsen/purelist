#include "purelist.hpp"

void LinkedList::prepend( int value ) {
  Node* tmp = new Node();
  tmp->data = value;
  if ( head ) {
    tmp->next = head;
    head = tmp;
  } else {                  // empty List
    head = tmp;
    tail = tmp;
    tmp->next = nullptr;
  }
}

void LinkedList::append( int value ) {
  Node* tmp = new Node();
  tmp->data = value;
  if ( tail ) {
    tail->next = tmp;
    tail = tmp;
  } else {              // empty list
    tmp->next = nullptr;
    head = tmp;
    tail = tmp;
  }
}

int LinkedList::itemAtHead() {
  if ( head == nullptr )
    return -1;
  return head->data;
}

int LinkedList::itemAtTail() {
  if ( tail == nullptr )
    return -1;
  return tail->data;
}

void LinkedList::decapitate() {
  Node* tmp = head;
  head = head->next;
  delete tmp;
}

void LinkedList::decaudate() {
  Node* tmp = tail;
  Node* n = head;
  while ( n->next != tail )
    n = n->next;
  n->next = nullptr;
  tail = n;
  delete tmp;
}

unsigned int LinkedList::length() {
  if ( !head )
    return 0;
  else if ( head == tail ) {
    return 1;
  } else {
    unsigned int count = 0;
    Node* tmp = head;
    while ( tmp != tail ) {
      ++count;
      tmp = tmp->next;
    }
    return ++count;
  }
}

int LinkedList::itemAt( const unsigned int position ) {
  if ( !head )
    return -1;
  if ( position == 0 )
    return head->data;
  unsigned int pos = position;
  Node* tmp = head;
  while ( pos > 0 ) {
    if ( tmp != tail ) {
      tmp = tmp->next;
      --pos;
    }
  }
  return tmp->data;
}

void LinkedList::printContents() {
  if ( !head )
    std::cout << "EMPTY!" << std::endl;
  Node* tmp = head;
  while ( tmp != tail ) {
    std::cout << tmp->data << " : ";
    tmp = tmp->next;
  }
  std::cout << tmp->data << std::endl;
}

void LinkedList::clear() {
  if ( !head )
    return;
  if ( head == tail ) {
    delete head;
    head = nullptr;
    tail = nullptr;
    return;
  }
  Node* n = head;
  while ( n != tail ) {
    Node* tmp = n;
    n = n->next;
    delete tmp;
  }
  //delete tail;
  head = nullptr;
  tail = nullptr;
}
