#include <string>
#include <iostream>
#include <vector>

namespace OOO
{
using C = decltype (std::cout)&;
using M = std::string;
using B = bool;

static int r1 = 0;
static int r2 = 0;
B b2 = false;
B b3 = false;
C _ = std::cout;

struct MM { MM (M mm, int nn = 1, int ww = 0) : m (mm), n (nn), w (ww) {} M m; int n; int w; };
using MMM = std::vector<MM>;

static void _0 (int n) { if (n > 0) _ << M (n, '\n'); }
static void _8 (M m, int n = 1, int w = 0) { _.width (w <= 0 ? 0 : w + m.length()); _ << m; _.width (0); _0 (n); }
static void _8_ (MMM mmm) { for (const auto& mm : mmm) _8 (mm.m, mm.n, mm.w); }

struct O
{
    O() : b1 (true) { ++r1; }
    ~O() { if (! b1) return; if (--r1 == 0) b2 = b3 = false; r2 = 0; }
    
    O operator() (const O& oo) const
    {
        if (r1 == 3 && b1 && ! b2)
        {
            _0 (2); _8_ ({{ "{", 1, 14 }, { "O _,o ;", 2, 11 }, { "_.o", 1, 12 }, { ">>", 1, 14 }, { "*", 1, 14 }, { "(", 1, 14 }});
            b2 = b3 = true;
        }
        
        ++r2;
        O ooo; ooo.t = t + ")\n  "; ooo.t.append ((5 - r2) * 2, ' '); ooo.t += "(" + oo.t;
        return ooo;
    }

    O d (M op, M tt) const { O ooo; ooo.t = t + op + tt; return ooo; }
    O operator+ (const O& oo) const { return d ("+", oo.t); }
    O operator- (const O& oo) const { return d ("-", oo.t); }
    void operator>> (M t) const { _ << t; }

    M operator*() const
    {
        const B b4 = r1 == 21 && b1 && ! b2;

        if (b4)
        {
            _0 (2); _8_ ({{ "{", 1, 14 }, { "O o ;", 2, 11 }, { "_.o", 1, 14 }, { "<<", 1, 13 }, { "*", 1, 14 }, { "(", 1, 14 }});
            b2 = true;
        }

        _8 ("(" + t + ")", 1, 12);
        if (b4 || b3) _8_ ({{ ")", 1, 14 }, { ";", 1, 14 }, { "}", 1, 14 }});
        return M (9, ' ') + m + M (2, '\n');
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
}

int main (int argc, char* argv[])
{
    using namespace OOO;
    west();
    east();
    return 0;
}
