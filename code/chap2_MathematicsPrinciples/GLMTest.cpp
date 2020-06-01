#include <cstdio>
#include "glm/glm.hpp"

int main() {
	glm::vec4 vec(1.0f, 0.0f, 0.0f, 1.0f);
	glm::vec4 vec2(0.0f, 1.0f, 0.0f, 1.0f);

	vec += vec2;

	std::printf("{%f, %f, %f, %f}", vec.x, vec.y, vec.z, vec.w);
}