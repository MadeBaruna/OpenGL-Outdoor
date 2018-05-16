#pragma once
#include "../Mesh.h"

static Mesh* Leaf() {
	Vertex leafVertices[] = {
		Vertex(glm::vec3(-0.5, 0.5, 0), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3( 0.5, 0.5, 0), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(-0.5, 1.5, 0), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3( 0.5, 1.5, 0), glm::vec2(1.0, 1.0)),

		Vertex(glm::vec3(0, 0.5, -0.5), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(0, 0.5,  0.5), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(0, 1.5, -0.5), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3(0, 1.5,  0.5), glm::vec2(1.0, 1.0)),
	};

	unsigned int leafIndices[] = {
		0, 1, 2,
		1, 3, 2,

		4, 5, 6,
		5, 7, 6,
	};

	return new Mesh(leafVertices, sizeof(leafVertices) / sizeof(leafVertices[0]), leafIndices, sizeof(leafIndices) / sizeof(leafIndices[0]));
}

static Mesh* Wood() {
	Vertex vertices[] = {
		Vertex(glm::vec3(-0.03, 0,     0.03), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3( 0.03, 0,     0.03), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(-0.03, 0.55,  0.03), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3( 0.03, 0.55,  0.03), glm::vec2(1.0, 1.0)),

		Vertex(glm::vec3(-0.03, 0,    -0.03), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(-0.03, 0,     0.03), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(-0.03, 0.55, -0.03), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3(-0.03, 0.55,  0.03), glm::vec2(1.0, 1.0)),

		Vertex(glm::vec3(-0.03, 0,    -0.03), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3( 0.03, 0,    -0.03), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3(-0.03, 0.7,  -0.03), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3( 0.03, 0.7,  -0.03), glm::vec2(1.0, 1.0)),

		Vertex(glm::vec3( 0.03, 0,    -0.03), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3( 0.03, 0,     0.03), glm::vec2(1.0, 0.0)),
		Vertex(glm::vec3( 0.03, 0.55, -0.03), glm::vec2(0.0, 1.0)),
		Vertex(glm::vec3( 0.03, 0.55,  0.03), glm::vec2(1.0, 1.0)),
	};

	unsigned int indices[] = {
		0, 1, 2,
		1, 3, 2,

		4, 5, 6,
		5, 7, 6,

		8, 9, 10,
		9, 11, 10,

		12, 13, 14,
		13, 15, 14,
	};

	return new Mesh(vertices, sizeof(vertices) / sizeof(vertices[0]), indices, sizeof(indices) / sizeof(indices[0]));
}