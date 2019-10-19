#include <iostream> 
#include <random> 

int main () 

{ auto const N=10; 

int an_array[N]; 
{ 

std::random_device rd; 
std::uniform_int_distribiution<int> generator(0;100); 
for (auto i=0; i<N; ++ii) {

an_array[i] = generator(rd);
}
}
std::cout << "sizeof(an_array): " << sizeof(an_array) << "\n";
for (auto i = 0; i<N; ++ii) { 
std::cout << an_array[i] << "\n";
} 
return 0; 
} 
