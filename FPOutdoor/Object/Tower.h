#pragma once
#include "../Mesh.h"
#include <iostream>

static Mesh* TowerAtas() {
	Vertex vertices[] = {
		Vertex(glm::vec3(0.2,  1.7, 0.2), glm::vec2(0.0, 0.0), glm::vec3(0.0, 0.0, -1.0)),
		Vertex(glm::vec3(0.8,  1.7, 0.2), glm::vec2(1.0, 0.0), glm::vec3(0.0, 0.0, -1.0)),
		Vertex(glm::vec3(0.25, 2.0, 0.2), glm::vec2(0.0, 1.0), glm::vec3(0.0, 0.0, -1.0)),
		Vertex(glm::vec3(0.75, 2.0, 0.2), glm::vec2(1.0, 1.0), glm::vec3(0.0, 0.0, -1.0)),

		Vertex(glm::vec3(0.2,  1.7, 0.8), glm::vec2(0.0, 0.0), glm::vec3(0.0, 0.0, 1.0)),
		Vertex(glm::vec3(0.8,  1.7, 0.8), glm::vec2(1.0, 0.0), glm::vec3(0.0, 0.0, 1.0)),
		Vertex(glm::vec3(0.25, 2.0, 0.8), glm::vec2(0.0, 1.0), glm::vec3(0.0, 0.0, 1.0)),
		Vertex(glm::vec3(0.75, 2.0, 0.8), glm::vec2(1.0, 1.0), glm::vec3(0.0, 0.0, 1.0)),

		Vertex(glm::vec3(0.8, 1.7, 0.2),   glm::vec2(0.0, 0.0), glm::vec3(1.0, 0.0, 0.0)),
		Vertex(glm::vec3(0.8, 1.7, 0.8),   glm::vec2(1.0, 0.0), glm::vec3(1.0, 0.0, 0.0)),
		Vertex(glm::vec3(0.75,  2.0, 0.2), glm::vec2(0.0, 1.0), glm::vec3(1.0, 0.0, 0.0)),
		Vertex(glm::vec3(0.75,  2.0, 0.8), glm::vec2(1.0, 1.0), glm::vec3(1.0, 0.0, 0.0)),

		Vertex(glm::vec3(0.2, 1.7, 0.2),   glm::vec2(0.0, 0.0), glm::vec3(-1.0, 0.0, 0.0)),
		Vertex(glm::vec3(0.2, 1.7, 0.8),   glm::vec2(1.0, 0.0), glm::vec3(-1.0, 0.0, 0.0)),
		Vertex(glm::vec3(0.25,  2.0, 0.2), glm::vec2(0.0, 1.0), glm::vec3(-1.0, 0.0, 0.0)),
		Vertex(glm::vec3(0.25,  2.0, 0.8), glm::vec2(1.0, 1.0), glm::vec3(-1.0, 0.0, 0.0)),

		Vertex(glm::vec3(0.75, 2.0, 0.8), glm::vec2(1.0, 1.0), glm::vec3(0.0, 1.0, 0.0)),
		Vertex(glm::vec3(0.75, 2.0, 0.2), glm::vec2(1.0, 0.0), glm::vec3(0.0, 1.0, 0.0)),
		Vertex(glm::vec3(0.25, 2.0, 0.2), glm::vec2(0.0, 0.0), glm::vec3(0.0, 1.0, 0.0)),
		Vertex(glm::vec3(0.25, 2.0, 0.8), glm::vec2(0.0, 1.0), glm::vec3(0.0, 1.0, 0.0)),
	};

	unsigned int indices[] = {
		0, 1, 2, 1, 3, 2,
		4, 5, 6, 5, 7, 6,
		8, 9, 10, 9, 11, 10,
		12, 13, 14, 13, 15, 14,
		16, 17, 18,
		16, 18, 19,
	};

	std::cout << "Tower Atas" << std::endl;
	return new Mesh(vertices, sizeof(vertices) / sizeof(vertices[0]), indices, sizeof(indices) / sizeof(indices[0]));
}

static Mesh* TowerTengah() {
	Vertex vertices[] = {
		Vertex(glm::vec3(0.75, 1.0, 0.25), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(0.25, 1.0, 0.25), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(0.25, 1.7, 0.25), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3(0.75, 1.7, 0.25), glm::vec2(1.0, 1.0)),

		Vertex(glm::vec3(0.75, 1.0, 0.75), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(0.25, 1.0, 0.75), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(0.25, 1.7, 0.75), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3(0.75, 1.7, 0.75), glm::vec2(1.0, 1.0)),

		Vertex(glm::vec3(0.75, 1.7, 0.75), glm::vec2(1.0, 1.0)),
		Vertex(glm::vec3(0.75, 1.0, 0.75), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(0.75, 1.0, 0.25), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(0.75, 1.7, 0.25), glm::vec2(0.0, 1.0)),

		Vertex(glm::vec3(0.25, 1.7, 0.75), glm::vec2(1.0, 1.0)),
		Vertex(glm::vec3(0.25, 1.0, 0.75), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(0.25, 1.0, 0.25), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(0.25, 1.7, 0.25), glm::vec2(0.0, 1.0)),
	};

	unsigned int indices[] = {
		0, 1, 2,
		0, 2, 3,

		6, 5, 4,
		7, 6, 4,

		8, 9, 10,
		8, 10, 11,

		14, 13, 12,
		15, 14, 12
	};


	return new Mesh(vertices, sizeof(vertices) / sizeof(vertices[0]), indices, sizeof(indices) / sizeof(indices[0]));
}

static Mesh* TowerBawah() {
	Vertex vertices[] = {
		//back
		Vertex(glm::vec3(0.0, 0.0, 0.0), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(0.2, 1.0, 0.2), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3(1.0, 0.0, 0.0), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(0.8, 1.0, 0.2), glm::vec2(1.0, 1.0)),

		//front
		Vertex(glm::vec3(1.0, 0.0, 1.0), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(0.0, 0.0, 1.0), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(0.2, 1.0, 0.8), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3(0.8, 1.0, 0.8), glm::vec2(1.0, 1.0)),

		//right
		Vertex(glm::vec3(0.8, 1.0, 0.8), glm::vec2(1.0, 1.0)),
		Vertex(glm::vec3(1.0, 0.0, 1.0), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(1.0, 0.0, 0.0), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(0.8, 1.0, 0.2), glm::vec2(0.0, 1.0)),

		//left
		Vertex(glm::vec3(0.2, 1.0, 0.8), glm::vec2(1.0, 1.0)),
		Vertex(glm::vec3(0.0, 0.0, 1.0), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(0.0, 0.0, 0.0), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(0.2, 1.0, 0.2), glm::vec2(0.0, 1.0)),

		Vertex(glm::vec3(0.8, 1.0, 0.8), glm::vec2(1.0, 1.0)),
		Vertex(glm::vec3(0.8, 1.0, 0.2), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(0.2, 1.0, 0.2), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(0.2, 1.0, 0.8), glm::vec2(0.0, 1.0)),
	};

	unsigned int indices[] = {
		0, 1, 2,
		1, 3, 2,

		6, 5, 4,
		7, 6, 4,

		10, 8, 9,
		10, 11, 8,

		12, 15, 14,
		12, 14, 13,

		16, 17, 18,
		16, 18, 19,
	};

	return new Mesh(vertices, sizeof(vertices) / sizeof(vertices[0]), indices, sizeof(indices) / sizeof(indices[0]));
}