#include <iostream>
#include <array>

void print( const auto & a  ){
   for( const auto & x : a ){
      std::cout << x << "\n";
   }
}

int main(){
   print( 5 );
}

