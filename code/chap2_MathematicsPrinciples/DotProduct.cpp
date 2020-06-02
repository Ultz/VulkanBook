#include <cmath>
#include "glm/glm.hpp"

int main() {
    glm::vec4 vec1(1.0f, 2.5f, 1.7f);
    glm::vec4 vec2(2.0f, 0.6f, 9.0f);
    
    vec1 = glm::normalize(vec1);
    vec2 = glm::normalize(vec2);
    
    double dotproduct = glm::dot(vec1, vec2);
    
    double angle = std::acos(dotproduct);
}