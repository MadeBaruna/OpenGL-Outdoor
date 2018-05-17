#pragma once
#include "../Mesh.h"

static Mesh* Road() {
	Vertex vertices[] = {
		Vertex(glm::vec3(-0.5, 0.01, -50.0), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(-3.5, 0.01, -50.0),  glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(-3.5, 0.01, 50.0),   glm::vec2(1.0, 50.0)),
		Vertex(glm::vec3(-0.5, 0.01, 50.0),  glm::vec2(0.0, 50.0)),
	};

	unsigned int indices[] = {
		0, 2, 1, 0, 3, 2,
	};

	return new Mesh(vertices, sizeof(vertices) / sizeof(vertices[0]), indices, sizeof(indices) / sizeof(indices[0]));
}

static Mesh* Plane() {
	Vertex vertices[] = {
		Vertex(glm::vec3(-50, 0, -50.0), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(50, 0, -50.0),  glm::vec2(50.0, 0.0)),
		Vertex(glm::vec3(50, 0, 50.0),   glm::vec2(50.0, 50.0)),
		Vertex(glm::vec3(-50, 0, 50.0),  glm::vec2(0.0, 50.0)),
	};

	unsigned int indices[] = {
		0, 2, 1, 0, 3, 2,
	};

	return new Mesh(vertices, sizeof(vertices) / sizeof(vertices[0]), indices, sizeof(indices) / sizeof(indices[0]));
}