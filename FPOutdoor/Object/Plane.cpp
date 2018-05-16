#pragma once
#include "../Mesh.h"

static Mesh* Plane() {
	Vertex vertices[] = {
		Vertex(glm::vec3(-50, 0, -50.0), glm::vec2()),
		Vertex(glm::vec3(50, 0, -50.0), glm::vec2()),
		Vertex(glm::vec3(50, 0, 50.0), glm::vec2()),
		Vertex(glm::vec3(-50, 0, 50.0), glm::vec2()),
	};

	unsigned int indices[] = {
		0, 2, 1, 0, 3, 2,
	};

	return new Mesh(vertices, sizeof(vertices) / sizeof(vertices[0]), indices, sizeof(indices) / sizeof(indices[0]));
}