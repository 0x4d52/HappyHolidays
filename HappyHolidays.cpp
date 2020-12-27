#include <string>
#include <iostream>

using C = decltype (std::cout)&;
using M = std::string;
using B = bool;

static int r1 = 0;
static int r2 = 0;
B b2 = false;
B b3 = false;

struct O
{
    
    O()
    : b1 (true)
    {
        ++r1;
    }
    
    ~O()
    {
        if (b1)
        {
            if (--r1 == 0)
            {
                b2 = false;
                b3 = false;
            }
            
            r2 = 0;
        }
    }
    
    O operator() (const O& oo) const
    {
        if (r1 == 3 && b1 && ! b2)
        {
            _ << "\n\n";
            _ << "              {\n";
            _ << "           O _,o ;\n\n";
            _ << "            _.o\n";
            _ << "              >>\n";
            _ << "              *\n";
            _ << "              (\n";
            b2 = true;
            b3 = true;
        }
        
        ++r2;
        
        O ooo;
        ooo.t = t + ")\n  ";
        
        for (int i = 0; i < (5 - r2); ++i)
            ooo.t += "  ";
        
        ooo.t += "(" + oo.t;
        
        return ooo;
    }
    
    O operator+ (const O& oo) const
    {
        O ooo;
        ooo.t = t + "+" + oo.t;
        return ooo;
    }
    
    O operator- (const O& oo) const
    {
        O ooo;
        ooo.t = t + "-" + oo.t;
        return ooo;
    }

    M operator*() const
    {
        const B b4 = r1 == 21 && b1 && ! b2;

        if (b4)
        {
            _ << "\n\n";
            _ << "              {\n";
            _ << "            O o ;\n\n";
            _ << "              o._\n";
            _ << "             <<\n";
            _ << "              *\n";
            _ << "              (\n";
            b2 = true;
        }

        _ << "            (" << t << ")\n";
        
        if (b4 || b3)
        {
            _ << "              )\n";
            _ << "              ;\n";
            _ << "              }\n";
        }
        
        return m;
    }
    
    void operator>> (M t) const
    {
        _ << t;
    }
    
    O& o = *this;
    M m = "         Happy Holidays\n\n";
    C _ = std::cout;
    M t = "(o)";
    B b1 = false;
};

static void west()

              {
            O o ;
    
              o._
             <<
              *
              (
            ((o))
          ((o)+(o))
        ((o)-(o)-(o))
      ((o)-(o)+(o)-(o))
    ((o)-(o)+(o)+(o)-(o))
  ((o)+(o)-(o)+(o)-(o)+(o))
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
            ((o))
          ((o)+(o))
        ((o)-(o)-(o))
      ((o)-(o)+(o)-(o))
    ((o)-(o)+(o)+(o)-(o))
  ((o)+(o)-(o)+(o)-(o)+(o))
              )
              ;
              }

int main (int argc, char* argv[])
{
    west();
    east();
    return 0;
}
