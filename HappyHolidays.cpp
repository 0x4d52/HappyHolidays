#include <string>
#include <iostream>

using C = decltype (std::cout)&;
using M = std::string;
using B = bool;

static int r1 = 0;
static int r2 = 0;
B b2 = false;
B b3 = false;
C _ = std::cout;

static void ___ (int n)
{
    if (n > 0)
        _ << M (n, '\n');
}

static void __ (M m, int n = 1, int w = 0)
{
    _.width (w <= 0 ? 0 : w + m.length());
    _ << m;
    _.width (0);
    ___ (n);
}

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
            ___ (2);
            __ ("{", 1, 14);
            __ ("O _,o ;", 2, 11);
            __ ("_.o", 1, 12);
            __ (">>", 1, 14);
            __ ("*", 1, 14);
            __ ("(", 1, 14);
            b2 = true;
            b3 = true;
        }
        
        ++r2;
        
        O ooo;
        ooo.t = t + ")\n  ";
        ooo.t.append ((5 - r2) * 2, ' ');
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
            ___ (2);
            __ ("{", 1, 14);
            __ ("O o ;", 2, 11);
            __ ("_.o", 1, 14);
            __ ("<<", 1, 13);
            __ ("*", 1, 14);
            __ ("(", 1, 14);
            b2 = true;
        }

        __ ("(" + t + ")", 1, 12);
        
        if (b4 || b3)
        {
            __ (")", 1, 14);
            __ (";", 1, 14);
            __ ("}", 1, 14);
        }
        
        return M (9, ' ') + m + M (2, '\n');
    }
    
    void operator>> (M t) const
    {
        _ << t;
    }
    
    O& o = *this;
    M m = "Happy Holidays";
    M t = "(o)";
    C _ = std::cout;
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
