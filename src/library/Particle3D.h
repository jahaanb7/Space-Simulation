#include <glm/glm.hpp>

class Particle3D{
  public:
    glm::vec3 position;
    glm::vec2 veclocity;

    // additional vars
    float mass;
    float radius;

    float damping = 0.995f;
}