#include "vec.h"

class Surface {
  public:
    virtual bool hit(vec e, vec d) = 0;
    virtual float get_discriminant(vec e, vec d) = 0;
    virtual vec get_intersection(vec e, vec d) = 0;
    virtual vec get_surface_normal(vec ip) = 0;
};

class Sphere: public Surface {
  public:
    vec c; // center
    float r; // radius

    bool hit(vec e, vec d);
    float get_discriminant(vec e, vec d);
    vec get_intersection(vec e, vec d);
    vec get_surface_normal(vec ip);

    Sphere(vec c, float r) : c(c), r(r) { };
};
