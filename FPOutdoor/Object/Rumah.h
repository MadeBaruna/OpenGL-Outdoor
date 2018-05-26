#pragma once
#include "../Mesh.h"
#include <iostream>

static Mesh* Pintu() {
	Vertex vertices[] =
	{
		Vertex(glm::vec3(-0.5, -1, 1), glm::vec2(0, 0)),
		Vertex(glm::vec3(-0.5, 0.5, 1),  glm::vec2(0, 1)),
		Vertex(glm::vec3(0.5, 0.5, 1),   glm::vec2(1, 1)),
		Vertex(glm::vec3(0.5, -1, 1),  glm::vec2(1, 0)),
	};

	unsigned int indices[] = {
		2, 1, 0,
		3, 2, 0,
	};

	return new Mesh(vertices, sizeof(vertices) / sizeof(vertices[0]), indices, sizeof(indices) / sizeof(indices[0]));
}

static Mesh* AtapRumah() {
	Vertex vertices[] = {
		// bottom 
		Vertex(glm::vec3(-1, -1, -1), glm::vec2(0, 1)),
		Vertex(glm::vec3(-1, -1, 1), glm::vec2(1, 1)),
		Vertex(glm::vec3(1, -1, 1), glm::vec2(1, 0)),
		Vertex(glm::vec3(1, -1, -1), glm::vec2(0, 0)),

		// left
		Vertex(glm::vec3(-1, -1, -1), glm::vec2(0, 0)),
		Vertex(glm::vec3(-1, -1, 1), glm::vec2(1, 0)),
		Vertex(glm::vec3(0, 0.1, 0), glm::vec2(0.5, 1)),

		// front
		Vertex(glm::vec3(-1, -1, 1), glm::vec2(0, 0)),
		Vertex(glm::vec3(1, -1, 1), glm::vec2(1, 0)),
		Vertex(glm::vec3(0, 0.1, 0), glm::vec2(0.5, 1)),

		// right
		Vertex(glm::vec3(1, -1, 1), glm::vec2(0, 0)),
		Vertex(glm::vec3(1, -1, -1), glm::vec2(1, 0)),
		Vertex(glm::vec3(0, 0.1, 0), glm::vec2(0.5, 1)),

		// back
		Vertex(glm::vec3(1, -1, -1), glm::vec2(0, 0)),
		Vertex(glm::vec3(-1, -1, -1), glm::vec2(1, 0)),
		Vertex(glm::vec3(0, 0.1, 0), glm::vec2(0.5, 1)),
	};

	unsigned int indices[] = {
		2, 1, 0,
		3, 2, 0,
		4, 5, 6,
		7, 8, 9,
		10, 11, 12,
		13, 14, 15,
	};

	return new Mesh(vertices, sizeof(vertices) / sizeof(vertices[0]), indices, sizeof(indices) / sizeof(indices[0]));
}

static Mesh* TembokRumah() {
	Vertex vertices[] =
	{
		Vertex(glm::vec3(-1, -1, -1), glm::vec2(1, 0), glm::vec3(0, 0, -1)),
		Vertex(glm::vec3(-1, 1, -1), glm::vec2(0, 0), glm::vec3(0, 0, -1)),
		Vertex(glm::vec3(1, 1, -1), glm::vec2(0, 1), glm::vec3(0, 0, -1)),
		Vertex(glm::vec3(1, -1, -1), glm::vec2(1, 1), glm::vec3(0, 0, -1)),

		Vertex(glm::vec3(-1, -1, 1), glm::vec2(1, 0), glm::vec3(0, 0, 1)),
		Vertex(glm::vec3(-1, 1, 1), glm::vec2(0, 0), glm::vec3(0, 0, 1)),
		Vertex(glm::vec3(1, 1, 1), glm::vec2(0, 1), glm::vec3(0, 0, 1)),
		Vertex(glm::vec3(1, -1, 1), glm::vec2(1, 1), glm::vec3(0, 0, 1)),

		Vertex(glm::vec3(-1, -1, -1), glm::vec2(0, 1), glm::vec3(0, -1, 0)),
		Vertex(glm::vec3(-1, -1, 1), glm::vec2(1, 1), glm::vec3(0, -1, 0)),
		Vertex(glm::vec3(1, -1, 1), glm::vec2(1, 0), glm::vec3(0, -1, 0)),
		Vertex(glm::vec3(1, -1, -1), glm::vec2(0, 0), glm::vec3(0, -1, 0)),

		Vertex(glm::vec3(-1, 1, -1), glm::vec2(0, 1), glm::vec3(0, 1, 0)),
		Vertex(glm::vec3(-1, 1, 1), glm::vec2(1, 1), glm::vec3(0, 1, 0)),
		Vertex(glm::vec3(1, 1, 1), glm::vec2(1, 0), glm::vec3(0, 1, 0)),
		Vertex(glm::vec3(1, 1, -1), glm::vec2(0, 0), glm::vec3(0, 1, 0)),

		Vertex(glm::vec3(-1, -1, -1), glm::vec2(1, 1), glm::vec3(-1, 0, 0)),
		Vertex(glm::vec3(-1, -1, 1), glm::vec2(1, 0), glm::vec3(-1, 0, 0)),
		Vertex(glm::vec3(-1, 1, 1), glm::vec2(0, 0), glm::vec3(-1, 0, 0)),
		Vertex(glm::vec3(-1, 1, -1), glm::vec2(0, 1), glm::vec3(-1, 0, 0)),

		Vertex(glm::vec3(1, -1, -1), glm::vec2(1, 1), glm::vec3(1, 0, 0)),
		Vertex(glm::vec3(1, -1, 1), glm::vec2(1, 0), glm::vec3(1, 0, 0)),
		Vertex(glm::vec3(1, 1, 1), glm::vec2(0, 0), glm::vec3(1, 0, 0)),
		Vertex(glm::vec3(1, 1, -1), glm::vec2(0, 1), glm::vec3(1, 0, 0)),
	};

	unsigned int indices[] = {
		0, 1, 2,
		0, 2, 3,

		6, 5, 4,
		7, 6, 4,

		10, 9, 8,
		11, 10, 8,

		12, 13, 14,
		12, 14, 15,

		16, 17, 18,
		16, 18, 19,

		22, 21, 20,
		23, 22, 20
	};

	return new Mesh(vertices, sizeof(vertices) / sizeof(vertices[0]), indices, sizeof(indices) / sizeof(indices[0]));
}