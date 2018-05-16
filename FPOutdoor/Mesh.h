#pragma once
#include <GLAD/glad.h>
#include "glm/glm.hpp"

struct Vertex
{
public:
	Vertex(const glm::vec3& pos, const glm::vec2& texCoord = glm::vec2(0, 0))
	{
		this->pos = pos;
		this->texCoord = texCoord;
	}

	glm::vec3 pos;
	glm::vec2 texCoord;
};

enum MeshBufferPositions
{
	POSITION_VB,
	TEXCOORD_VB,
	INDEX_VB,

	NUM_BUFFERS
};

class Mesh
{
public:
	Mesh(Vertex* vertices, unsigned int numVertices, unsigned int* indices, unsigned int numIndices);
	~Mesh();
	void Draw();

private:
	GLuint VAO;
	GLuint VBO[NUM_BUFFERS];
	unsigned int drawCount;
};

