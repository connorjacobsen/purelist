#include "purelist.hpp"

int main() {
  List* ll = new LinkedList();
  ll->head = nullptr;
  ;
  ll->prepend( 5 );
  ll->prepend( 7 );
  ll->prepend( 11 );
  ll->append( 3 );
  
  std::cout << "Print list: " << std::endl;
  ll->printContents();
  
  std::cout << "Item at 0: " << ll->itemAt( 0 ) << std::endl;
  std::cout << "Item at 1: " << ll->itemAt( 1 ) << std::endl;
  std::cout << "Item at 2: " << ll->itemAt( 2 ) << std::endl;
  std::cout << "Item at 3: " << ll->itemAt( 3 ) << std::endl;

  std::cout << "Item at Head: " << ll->itemAtHead() << std::endl;
  std::cout << "Item at Tail: " << ll->itemAtTail() << std::endl;
  std::cout << "Length: " << ll->length() << std::endl;

  ll->decapitate();
  std::cout << "Item at Head: " << ll->itemAtHead() << std::endl;
  std::cout << "Item at Tail: " <<  ll->itemAtTail() << std::endl;
  std::cout << "Length: " << ll->length() << std::endl;

  ll->decaudate();
  std::cout << "Item at Head: " << ll->itemAtHead() << std::endl;
  std::cout << "Item at Tail: " << ll->itemAtTail() << std::endl;
  std::cout << "Length: " << ll->length() << std::endl;

  ll->clear();
  ll->printContents();
  
  return 0;
}
