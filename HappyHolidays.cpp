#include <string>
#include <iostream>

struct O
{
    O operator() (O O) const { return *this; }
    O operator| (O O) const { return *this; }
    O operator^ (O O) const { return *this; }
    std::string operator*() const { return m; }
    std::string m = "Happy Holidays\n";
    decltype (std::cout)& _ = std::cout;
};

int main (int argc, char* argv[])
{
           O o ;
    
             o._
            <<
             *
             (
            (o)
          (o)|(o)
        (o)^(o)^(o)
      (o)^(o)|(o)^(o)
    (o)^(o)|(o)|(o)^(o)
  (o)|(o)^(o)|(o)^(o)|(o)
             )
             ;

    return 0;
}
