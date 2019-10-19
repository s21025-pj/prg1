#include <string> 
   
int main (int argc, char* argv [1]) 
{ 

    auto const n = std::stoi (argv[1]); 

     int* an_array [[maybe_unused]] = new int[n]; 

      return 0; 
}
