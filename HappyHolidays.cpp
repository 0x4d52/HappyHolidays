#include <string>
#include <iostream>

struct O
{
    using C = decltype (std::cout)&;
    using M = std::string;
    O operator() (O) const { return *this; }
    O operator| (O) const { return *this; }
    O operator^ (O) const { return *this; }
    M operator*() const { return m; }
    void operator>> (M t) const { _ << t; }
    O& o = *this;
    M m = "Happy Holidays\n";
    C _ = std::cout;
};

static void west()

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
             }

static void east()

             {
          O _,o ;
    
            _.o
             >>
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
             }

int main (int argc, char* argv[])
{
    west();
    east();
    return 0;
}
