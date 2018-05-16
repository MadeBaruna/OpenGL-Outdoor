#pragma once
#include "../Mesh.h"

static Mesh* TowerAtas() {
	Vertex vertices[] = {
		Vertex(glm::vec3(0.2,  1.7, 0.2), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(0.8,  1.7, 0.2), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(0.25, 2.0, 0.2), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3(0.75, 2.0, 0.2), glm::vec2(1.0, 1.0)),

		Vertex(glm::vec3(0.2,  1.7, 0.8), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(0.8,  1.7, 0.8), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(0.25, 2.0, 0.8), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3(0.75, 2.0, 0.8), glm::vec2(1.0, 1.0)),

		Vertex(glm::vec3(0.8, 1.7, 0.2), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(0.8, 1.7, 0.8), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(0.75,  2.0, 0.2), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3(0.75,  2.0, 0.8), glm::vec2(1.0, 1.0)),

		Vertex(glm::vec3(0.2, 1.7, 0.2), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(0.2, 1.7, 0.8), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(0.25,  2.0, 0.2), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3(0.25,  2.0, 0.8), glm::vec2(1.0, 1.0)),

		Vertex(glm::vec3(0.25, 2.0, 0.2), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(0.75, 2.0, 0.2), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(0.25, 2.0, 0.8), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3(0.75, 2.0, 0.8), glm::vec2(1.0, 1.0)),
	};

	unsigned int indices[] = {
		0, 1, 2, 1, 3, 2,
		4, 5, 6, 5, 7, 6,
		8, 9, 10, 9, 11, 10,
		12, 13, 14, 13, 15, 14,
		16, 17, 18, 17, 19, 18,
	};

	return new Mesh(vertices, sizeof(vertices) / sizeof(vertices[0]), indices, sizeof(indices) / sizeof(indices[0]));
}

static Mesh* TowerTengah() {
	Vertex vertices[] = {
		Vertex(glm::vec3(0.25, 1.0, 0.25), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(0.75, 1.0, 0.25), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(0.25, 1.7, 0.25), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3(0.75, 1.7, 0.25), glm::vec2(1.0, 1.0)),

		Vertex(glm::vec3(0.25, 1.0, 0.75), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(0.75, 1.0, 0.75), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(0.25, 1.7, 0.75), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3(0.75, 1.7, 0.75), glm::vec2(1.0, 1.0)),

		Vertex(glm::vec3(0.75, 1.0, 0.25), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(0.75, 1.0, 0.75), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(0.75, 1.7, 0.25), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3(0.75, 1.7, 0.75), glm::vec2(1.0, 1.0)),

		Vertex(glm::vec3(0.25, 1.0, 0.25), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(0.25, 1.0, 0.75), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(0.25, 1.7, 0.25), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3(0.25, 1.7, 0.75), glm::vec2(1.0, 1.0)),
	};

	unsigned int indices[] = {
		0, 1, 2, 1, 3, 2,
		4, 5, 6, 5, 7, 6,
		8, 9, 10, 9, 11, 10,
		12, 13, 14, 13, 15, 14,
	};

	return new Mesh(vertices, sizeof(vertices) / sizeof(vertices[0]), indices, sizeof(indices) / sizeof(indices[0]));
}

static Mesh* TowerBawah() {
	Vertex vertices[] = {
		Vertex(glm::vec3(0.0, 0.0, 0.0), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(1.0, 0.0, 0.0), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(0.2, 1.0, 0.2), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3(0.8, 1.0, 0.2), glm::vec2(1.0, 1.0)),

		Vertex(glm::vec3(0.0, 0.0, 1.0), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(1.0, 0.0, 1.0), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(0.2, 1.0, 0.8), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3(0.8, 1.0, 0.8), glm::vec2(1.0, 1.0)),

		Vertex(glm::vec3(1.0, 0.0, 0.0), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(1.0, 0.0, 1.0), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(0.8, 1.0, 0.2), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3(0.8, 1.0, 0.8), glm::vec2(1.0, 1.0)),

		Vertex(glm::vec3(0.0, 0.0, 0.0), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(0.0, 0.0, 1.0), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(0.2, 1.0, 0.2), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3(0.2, 1.0, 0.8), glm::vec2(1.0, 1.0)),

		Vertex(glm::vec3(0.2, 1.0, 0.2), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(0.8, 1.0, 0.2), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(0.2, 1.0, 0.8), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3(0.8, 1.0, 0.8), glm::vec2(1.0, 1.0)),
	};

	unsigned int indices[] = {
		0, 1, 2, 1, 3, 2,
		4, 5, 6, 5, 7, 6,
		8, 9, 10, 9, 11, 10,
		12, 13, 14, 13, 15, 14,
		16, 17, 18, 17, 19, 18,
	};

	return new Mesh(vertices, sizeof(vertices) / sizeof(vertices[0]), indices, sizeof(indices) / sizeof(indices[0]));
}