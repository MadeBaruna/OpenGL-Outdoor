#pragma once
#include "../Mesh.h"

static Mesh* BatangKincir() {
	Vertex vertices[] = {
		Vertex(glm::vec3(-1.05, -0.05, 0), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3(1.05, -0.05, 0), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(-1.05,  0.05, 0), glm::vec2(1.0, 1.0)),
		Vertex(glm::vec3(1.05,  0.05, 0), glm::vec2(1.0, 0.0)),

		Vertex(glm::vec3(-0.05, -1.05, 0.01), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3( 0.05, -1.05, 0.01), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(-0.05,  1.05, 0.01), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3( 0.05,  1.05, 0.01), glm::vec2(1.0, 1.0)),
	};

	unsigned int indices[] = {
		0, 1, 2, 1, 3, 2,
		4, 5, 6, 5, 7, 6,
	};

	return new Mesh(vertices, sizeof(vertices) / sizeof(vertices[0]), indices, sizeof(indices) / sizeof(indices[0]));
}

static Mesh* Kincir() {
	Vertex vertices[] = {
		Vertex(glm::vec3(-1.05,  0.05, 0), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(-0.25,  0.05, 0), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(-1.05,  0.35, 0), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3(-0.25,  0.35, 0), glm::vec2(1.0, 1.0)),

		Vertex(glm::vec3( 0.05,  0.25, 0), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3( 0.35,  0.25, 0), glm::vec2(1.0, 1.0)),
		Vertex(glm::vec3( 0.05,  1.05, 0), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3( 0.35,  1.05, 0), glm::vec2(0.0, 1.0)),

		Vertex(glm::vec3( 0.25, -0.35, 0), glm::vec2(1.0, 1.0)),
		Vertex(glm::vec3( 1.05, -0.35, 0), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3( 0.25, -0.05, 0), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3( 1.05, -0.05, 0), glm::vec2(0.0, 0.0)),

		Vertex(glm::vec3(-0.35, -1.05, 0), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3(-0.05, -1.05, 0), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(-0.35, -0.25, 0), glm::vec2(1.0, 1.0)),
		Vertex(glm::vec3(-0.05, -0.25, 0), glm::vec2(1.0, 0.0)),
	};

	unsigned int indices[] = {
		0, 1, 2, 1, 3, 2,
		4, 5, 6, 5, 7, 6,
		8, 9, 10, 9, 11, 10,
		12, 13, 14, 13, 15, 14,
	};

	return new Mesh(vertices, sizeof(vertices) / sizeof(vertices[0]), indices, sizeof(indices) / sizeof(indices[0]));
}
