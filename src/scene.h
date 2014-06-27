#include "raytracer.h"
#include <string>
#include <vector>

class Scene {
  public:
    unsigned char* pixels;
    int pixels_width, pixels_height;
    std::vector<double> img_dims;
    std::vector<Surface*> scene_objects;
    Raytracer* raytracer;
    Camera* camera;
    std::vector<Light> lights;

    Scene(int pixels_width, int pixels_height, std::vector<double> img_dims,
        Camera* camera, std::vector<Light> lights, std::vector<Surface*>
        scene_objects, Raytracer* raytracer);
    ~Scene();
    void export_scene(const char* filename);
    Scene* import_scene(std::string filename);
    static Scene* gen_sample_scene(int width, int height);
    void trace_scene();
};
