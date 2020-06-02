#include "glm/glm.hpp"

int main() {
    glm::vec4 vecX(3, -3, 1);
    glm::vec4 vecY(4, 9, 2);
    
    glm::vec4 vecZ = glm::cross(vecX, vecY);
}