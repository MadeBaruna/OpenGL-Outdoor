#pragma once
#include "../Mesh.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include <vector>

static Mesh* Wheel() {
	std::vector<Vertex> vertices;

	for (int i = 0; i < 18; ++i) {
		vertices.push_back(Vertex(glm::vec3(sin(i / 18.0 * 2 * M_PI), cos(i / 18.0 * 2 * M_PI), 0), glm::vec2(0, 0)));
	}

	std::vector<unsigned int> indices;
	for (int n = 2; n < 18; ++n) {
		indices.push_back(0);
		indices.push_back(n-1);
		indices.push_back(n);
	}

	return new Mesh(vertices.data(), (int) vertices.size(), indices.data(), (int) indices.size());
}

static Mesh* CarWindow() {
	Vertex vertices[] = {
		Vertex(glm::vec3(0.10, 0.55, -0.01), glm::vec2()),
		Vertex(glm::vec3(1.95, 0.55, -0.01), glm::vec2()),
		Vertex(glm::vec3(0.55, 0.95, -0.01), glm::vec2()),
		Vertex(glm::vec3(1.95, 0.95, -0.01), glm::vec2()),

		Vertex(glm::vec3(0.10, 0.55, 1.01),  glm::vec2()),
		Vertex(glm::vec3(1.95, 0.55, 1.01),  glm::vec2()),
		Vertex(glm::vec3(0.55, 0.95, 1.01),  glm::vec2()),
		Vertex(glm::vec3(1.95, 0.95, 1.01),  glm::vec2()),
											 
		Vertex(glm::vec3(0.045, 0.55, 0.95),  glm::vec2()),
		Vertex(glm::vec3(0.045, 0.55, 0.05),  glm::vec2()),
		Vertex(glm::vec3(0.45, 0.95, 0.95),  glm::vec2()),
		Vertex(glm::vec3(0.45, 0.95, 0.05),  glm::vec2()),
	};

	unsigned int indices[] = {
		0, 1, 2, 1, 3, 2,
		4, 5, 6, 5, 7, 6,
		8, 9, 10, 9, 11, 10,
	};

	return new Mesh(vertices, sizeof(vertices) / sizeof(vertices[0]), indices, sizeof(indices) / sizeof(indices[0]));
}

static Mesh* CarBody() {
	Vertex vertices[] = {
		Vertex(glm::vec3(0.0, 0.0, 0.0), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(2.0, 0.0, 0.0), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(0.0, 0.5, 0.0), glm::vec2(0.0, 0.5)),
		Vertex(glm::vec3(2.0, 0.5, 0.0), glm::vec2(1.0, 0.5)),

		Vertex(glm::vec3(0.0, 0.5, 0.0), glm::vec2(0.0, 0.5)),
		Vertex(glm::vec3(2.0, 0.5, 0.0), glm::vec2(1.0, 0.5)),
		Vertex(glm::vec3(0.5, 1.0, 0.0), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3(2.0, 1.0, 0.0), glm::vec2(1.0, 1.0)),

		Vertex(glm::vec3(0.0, 0.0, 1.0), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(2.0, 0.0, 1.0), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(0.0, 0.5, 1.0), glm::vec2(0.0, 0.5)),
		Vertex(glm::vec3(2.0, 0.5, 1.0), glm::vec2(1.0, 0.5)),

		Vertex(glm::vec3(0.0, 0.5, 1.0), glm::vec2(0.0, 0.5)),
		Vertex(glm::vec3(2.0, 0.5, 1.0), glm::vec2(1.0, 0.5)),
		Vertex(glm::vec3(0.5, 1.0, 1.0), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3(2.0, 1.0, 1.0), glm::vec2(1.0, 1.0)),

		Vertex(glm::vec3(2.0, 0.0, 0.0), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(2.0, 0.0, 1.0), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(2.0, 1.0, 0.0), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3(2.0, 1.0, 1.0), glm::vec2(1.0, 1.0)),

		Vertex(glm::vec3(0.5, 1.0, 0.0), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(2.0, 1.0, 0.0), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(0.5, 1.0, 1.0), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3(2.0, 1.0, 1.0), glm::vec2(1.0, 1.0)),

		Vertex(glm::vec3(0.0, 0.5, 1.0), glm::vec2(0.0, 0.5)),
		Vertex(glm::vec3(0.0, 0.5, 0.0), glm::vec2(1.0, 0.5)),
		Vertex(glm::vec3(0.5, 1.0, 1.0), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3(0.5, 1.0, 0.0), glm::vec2(1.0, 1.0)),

		Vertex(glm::vec3(0.0, 0.0, 1.0), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(0.0, 0.0, 0.0), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(0.0, 0.5, 1.0), glm::vec2(0.0, 0.5)),
		Vertex(glm::vec3(0.0, 0.5, 0.0), glm::vec2(1.0, 0.5)),
	};

	unsigned int indices[] = {
		0, 1, 2, 1, 3, 2,
		4, 5, 6, 5, 7, 6,
		8, 9, 10, 9, 11, 10,
		12, 13, 14, 13, 15, 14,
		16, 17, 18, 17, 19, 18,
		20, 21, 22, 21, 23, 22,
		24, 25, 26, 25, 27, 26,
		28, 29, 30, 29, 31, 30,
	};

	return new Mesh(vertices, sizeof(vertices) / sizeof(vertices[0]), indices, sizeof(indices) / sizeof(indices[0]));
}