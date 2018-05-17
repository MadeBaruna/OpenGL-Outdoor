#pragma once
#include "../Mesh.h"

static Mesh* AtapRumah() {
	Vertex bodyVertices[] = {
		// front 
		Vertex(glm::vec3(-0.5, 0.5,  -0.5), glm::vec2(0.0, 0.0)),																														Vertex(glm::vec3(-0.5, -0.5, 0.5), glm::vec2(0.0, 0.0)),	// 8
		Vertex(glm::vec3(-0.5, 0.5,  0.5), glm::vec2(0.0, 0.0)),																														Vertex(glm::vec3(-0.5, -0.5, 0.5), glm::vec2(0.0, 0.0)),	// 8
		Vertex(glm::vec3(-0.25, 1,  -0.5), glm::vec2(0.0, 0.0)),																														Vertex(glm::vec3(-0.5, -0.5, 0.5), glm::vec2(0.0, 0.0)),	// 8
		Vertex(glm::vec3(-0.25, 1,  0.5), glm::vec2(0.0, 0.0)),																														Vertex(glm::vec3(-0.5, -0.5, 0.5), glm::vec2(0.0, 0.0)),	// 8
	};

	unsigned int bodyIndices[] = {
		0, 1, 2, 0, 2, 3,
	};

	return new Mesh(bodyVertices, sizeof(bodyVertices) / sizeof(bodyVertices[0]), bodyIndices, sizeof(bodyIndices) / sizeof(bodyIndices[0]));
}

static Mesh* TembokRumah() {
	Vertex bodyVertices[] = {
		// front 
		Vertex(glm::vec3(-0.5,  -0.5, 0.5), glm::vec2(0.0, 0.0)),	// 0 bottom left
		Vertex(glm::vec3(0.5, -0.5, 0.5), glm::vec2(1.0, 0.0)),		// 1 bottom right
		Vertex(glm::vec3(0.5, 0.5, 0.5), glm::vec2(1.0, 1.0)),		// 2 top right
		Vertex(glm::vec3(-0.5, 0.5, 0.5), glm::vec2(0.0, 1.0)),		// 3 top left

																	// right
																	Vertex(glm::vec3(0.5, -0.5, 0.5), glm::vec2(0.0, 0.0)),		// 4
																	Vertex(glm::vec3(0.5, -0.5, -0.5), glm::vec2(1.0, 0.0)),	// 5
																	Vertex(glm::vec3(0.5, 0.5, -0.5), glm::vec2(1.0, 1.0)),		// 6
																	Vertex(glm::vec3(0.5, 0.5, 0.5), glm::vec2(0.0, 1.0)),		// 

																																// left
																																Vertex(glm::vec3(-0.5, -0.5, 0.5), glm::vec2(0.0, 0.0)),	// 8
																																Vertex(glm::vec3(-0.5, -0.5, -0.5), glm::vec2(1.0, 0.0)),	// 9
																																Vertex(glm::vec3(-0.5, 0.5, -0.5), glm::vec2(1.0, 1.0)),	// 10
																																Vertex(glm::vec3(-0.5, 0.5, 0.5), glm::vec2(0.0, 1.0)),		// 11

																																															// top
																																															Vertex(glm::vec3(-0.5, 0.5, -0.5), glm::vec2(0.0, 0.0)),	// 12
																																															Vertex(glm::vec3(0.5, 0.5, -0.5), glm::vec2(1.0, 0.0)),		// 13
																																															Vertex(glm::vec3(0.5, 0.5, 0.5), glm::vec2(1.0, 1.0)),		// 14
																																															Vertex(glm::vec3(-0.5, 0.5, 0.5), glm::vec2(0.0, 1.0)),		// 15

																																																														// bottom
																																																														Vertex(glm::vec3(-0.5, -0.5, -0.5), glm::vec2(0.0, 0.0)),	// 16
																																																														Vertex(glm::vec3(0.5, -0.5, -0.5), glm::vec2(1.0, 0.0)),	// 17
																																																														Vertex(glm::vec3(0.5, -0.5, 0.5), glm::vec2(1.0, 1.0)),		// 18
																																																														Vertex(glm::vec3(-0.5, -0.5, 0.5), glm::vec2(0.0, 1.0)),	// 19

																																																																													// back
																																																																													Vertex(glm::vec3(-0.5,  -0.5, -0.5), glm::vec2(0.0, 0.0)),	// 20
																																																																													Vertex(glm::vec3(0.5, -0.5, -0.5), glm::vec2(1.0, 0.0)),	// 21
																																																																													Vertex(glm::vec3(0.5, 0.5, -0.5), glm::vec2(1.0, 1.0)),		// 22
																																																																													Vertex(glm::vec3(-0.5, 0.5, -0.5), glm::vec2(0.0, 1.0)),	// 23
	};

	unsigned int bodyIndices[] = {
		0, 1, 2, 0, 2, 3,
		4, 5, 6, 4, 6, 7,
		8, 10, 9, 8, 11, 10,
		12, 14, 13, 12, 15, 14,
		16, 17, 18, 16, 18, 19,
		20, 22, 21, 20, 23, 22
	};

	return new Mesh(bodyVertices, sizeof(bodyVertices) / sizeof(bodyVertices[0]), bodyIndices, sizeof(bodyIndices) / sizeof(bodyIndices[0]));
}