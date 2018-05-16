#pragma once
#include "Engine.h"
#include "Shader.h"
#include "Texture.h"
#include "Transform.h"
#include "Camera.h"
#include "Object\Plane.cpp"
#include "Object\Tree.cpp"
#include "Object\Kincir.cpp"
#include "Object\Tower.cpp"

#define _USE_MATH_DEFINES
#include <math.h>
#include <vector>

Camera* camera;

Mesh* plane;
Shader* planeShader;
Texture* planeTexture;
Transform* planeTransform;

Mesh* leaf;
Shader* leafShader;
Texture* leafTexture;
Transform* leafTransform;

Mesh* wood;
Shader* woodShader;
Texture* woodTexture;
Transform* woodTransform;

Mesh* batangKincir;
Shader* batangKincirShader;
Texture* batangKincirTexture;
Transform* batangKincirTransform;

Mesh* kincir;
Shader* kincirShader;
Texture* kincirTexture;
Transform* kincirTransform;

Mesh* towerBawah;
Shader* towerBawahShader;
Texture* towerBawahTexture;
Transform* towerBawahTransform;

float posCamX = 0;
float posCamY = 2;
float posCamZ = 5;

float viewCamX = 0.0f, viewCamY = 0.0f, viewCamZ = 1.0f;
float speed = 0.02f;

Engine::Engine(int width, int height, const char* title, bool vsync, bool fullscreen) {
	Start(width, height, title, vsync, fullscreen);
}

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
	if (key == GLFW_KEY_ENTER && action == GLFW_PRESS) {
	}
}

void Engine::Init() {
	glViewport(0, 0, this->screenWidth, this->screenHeight);
	glfwSetInputMode(this->window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
	glfwSetKeyCallback(window, key_callback);

	camera = new Camera(glm::vec3(posCamX, 0, posCamZ), 70.0f, (GLfloat)this->screenWidth / (GLfloat)this->screenHeight, 0.1f, 100.0f);
	
	planeShader = new Shader("res/PlainTriangle");
	planeTransform = new Transform();
	plane = Plane();

	leafShader = new Shader("res/Triangle");
	leafTexture = new Texture("res/leaf.png");
	leafTransform = new Transform();
	leafTransform->pos.z = 3.0f;
	leaf = Leaf();

	woodShader = new Shader("res/Triangle");
	woodTexture = new Texture("res/wood.jpg");
	woodTransform = new Transform();
	wood = Wood();

	batangKincirShader = new Shader("res/Triangle");
	batangKincirTexture = new Texture("res/batang.png");
	batangKincirTransform = new Transform();
	batangKincirTransform->pos.y = 3.5f;
	batangKincirTransform->pos.x = 3.5f;
	batangKincir = BatangKincir();

	kincirShader = new Shader("res/Triangle");
	kincirTexture = new Texture("res/kincir.png");
	kincirTransform = new Transform();
	kincirTransform->pos.y = 3.5f;
	kincirTransform->pos.x = 3.5f;
	kincir = Kincir();

	towerBawahShader = new Shader("res/Triangle");
	towerBawahTexture = new Texture("res/cement.png");
	towerBawahTransform = new Transform();
	towerBawah = TowerBawah();
}

void Engine::DeInit() {
	camera->~Camera();
	planeShader->~Shader();
	plane->~Mesh();
}

void MoveCameraY(float speed)
{
	speed *= 2;
	float y = std::abs(viewCamY - posCamY);
	// forward positive cameraspeed and backward negative -cameraspeed.
	posCamY = posCamY + speed;
	viewCamY = viewCamY + speed;
}

void MoveCameraXZ(float speed)
{
	float x = viewCamX - posCamX;
	float z = viewCamZ - posCamZ;
	// forward positive cameraspeed and backward negative -cameraspeed.
	posCamX = posCamX + x * speed;
	posCamZ = posCamZ + z * speed;
	viewCamX = viewCamX + x * speed;
	viewCamZ = viewCamZ + z * speed;
}

void StrafeCamera(float speed)
{
	float x = viewCamX - posCamX;
	float z = viewCamZ - posCamZ;
	float orthoX = -z;
	float orthoZ = x;

	// left positive cameraspeed and right negative -cameraspeed.
	posCamX = posCamX + orthoX * speed;
	posCamZ = posCamZ + orthoZ * speed;
	viewCamX = viewCamX + orthoX * speed;
	viewCamZ = viewCamZ + orthoZ * speed;
}

void RotateCamera(float speed)
{
	float x = viewCamX - posCamX;
	float z = viewCamZ - posCamZ;
	viewCamZ = (float)(posCamZ + glm::sin(speed) * x + glm::cos(speed) * z);
	viewCamX = (float)(posCamX + glm::cos(speed) * x - glm::sin(speed) * z);
}

void Engine::ProcessInput(GLFWwindow* window) {

	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
		glfwSetWindowShouldClose(window, true);

	if (glfwGetKey(window, GLFW_KEY_SPACE) == GLFW_PRESS) {
		MoveCameraY(speed);
	}

	if (glfwGetKey(window, GLFW_KEY_LEFT_CONTROL) == GLFW_PRESS) {
		MoveCameraY(-speed);
	}

	if (glfwGetKey(window, GLFW_KEY_UP) == GLFW_PRESS) {
		MoveCameraXZ(speed);
	}

	if (glfwGetKey(window, GLFW_KEY_DOWN) == GLFW_PRESS) {
		MoveCameraXZ(-speed);
	}

	if (glfwGetKey(window, GLFW_KEY_LEFT) == GLFW_PRESS) {
		StrafeCamera(-speed);
	}

	if (glfwGetKey(window, GLFW_KEY_RIGHT) == GLFW_PRESS) {
		StrafeCamera(speed);
	}

	double mouseX, mouseY;
	double midX = screenWidth / 2;
	double midY = screenHeight / 2;
	float angleY = 0.0f;
	float angleZ = 0.0f;

	glfwGetCursorPos(window, &mouseX, &mouseY);
	if ((mouseX != midX) && (mouseY != midY)) {
		// Set mouse position
		glfwSetCursorPos(window, midX, midY);

		// Get the direction from the mouse cursor, set a resonable maneuvering speed
		angleY = (float)((midX - mouseX)) / 1000;
		angleZ = (float)((midY - mouseY)) / 1000;

		// The higher the value is the faster the camera looks around.
		viewCamY += angleZ * 2;

		// limit the rotation around the y-axis
		if ((viewCamY - posCamY) > 8) {
			viewCamY = posCamY + 8;
		}
		if ((viewCamY - posCamY) < -8) {
			viewCamY = posCamY - 8;
		}

		float x = viewCamX - posCamX;
		float z = viewCamZ - posCamZ;
		viewCamZ = (float)(posCamZ + glm::sin(-angleY) * x + glm::cos(-angleY) * z);
		viewCamX = (float)(posCamX + glm::cos(-angleY) * x - glm::sin(-angleY) * z);
	}
}

void Engine::Update(double deltaTime) {
	batangKincirTransform->rotation.z += (float)glm::radians(-1.0f);
	kincirTransform->rotation.z += (float)glm::radians(-1.0f);
}

void Engine::Render() {
	Clear(0.0f, 0.0f, 0.0f, 0.0f);

	camera->position.x = posCamX;
	camera->position.y = posCamY;
	camera->position.z = posCamZ;

	camera->forward.x = viewCamX;
	camera->forward.y = viewCamY;
	camera->forward.z = viewCamZ;

	planeShader->Bind();
	planeShader->Update(*planeTransform, *camera, glm::vec4(0.5f, 0.5f, 0.5f, 1.0f));
	plane->Draw();

	leafShader->Bind();
	leafShader->Update(*leafTransform, *camera);
	leafTexture->Bind();
	leaf->Draw();

	woodShader->Bind();
	woodShader->Update(*leafTransform, *camera);
	woodTexture->Bind();
	wood->Draw();

	batangKincirShader->Bind();
	batangKincirShader->Update(*batangKincirTransform, *camera);
	batangKincirTexture->Bind();
	batangKincir->Draw();

	kincirShader->Bind();
	kincirShader->Update(*kincirTransform, *camera);
	kincirTexture->Bind();
	kincir->Draw();

	towerBawahShader->Bind();
	towerBawahShader->Update(*towerBawahTransform, *camera);
	towerBawahTexture->Bind();
	towerBawah->Draw();
}