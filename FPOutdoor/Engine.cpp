#pragma once
#include "Engine.h"
#include "Shader.h"
#include "Texture.h"
#include "Transform.h"
#include "Camera.h"
#include "Object\Plane.h"
#include "Object\Tree.h"
#include "Object\Kincir.h"
#include "Object\Tower.h"
#include "Object\Car.h"
#include "Object\Rumah.h"
#include "Object\Box.h"

#define _USE_MATH_DEFINES
#include <math.h>
#include <vector>

Camera* camera;

Mesh* plane;
Shader* planeShader;
Texture* planeTexture;
Transform* planeTransform;

Mesh* road;
Shader* roadShader;
Texture* roadTexture;
Transform* roadTransform;

Mesh* leaf;
Shader* leafShader;
Texture* leafTexture;
Transform* leafTransform;

Mesh* wood;
Shader* woodShader;
Texture* woodTexture;
Transform* woodTransform;

Mesh* leaf2;
Shader* leaf2Shader;
Texture* leaf2Texture;
Transform* leaf2Transform;

Mesh* wood2;
Shader* wood2Shader;
Texture* wood2Texture;
Transform* wood2Transform;

Mesh* leaf3;
Shader* leaf3Shader;
Texture* leaf3Texture;
Transform* leaf3Transform;

Mesh* wood3;
Shader* wood3Shader;
Texture* wood3Texture;
Transform* wood3Transform;

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

Mesh* towerTengah;
Shader* towerTengahShader;
Texture* towerTengahTexture;
Transform* towerTengahTransform;

Mesh* towerAtas;
Shader* towerAtasShader;
Texture* towerAtasTexture;
Transform* towerAtasTransform;

Mesh* car;
Shader* carShader;
Texture* carTexture;
Transform* carTransform;

Mesh* carWindow;
Shader* carWindowShader;
Texture* carWindowTexture;
Transform* carWindowTransform;

Shader* carWheelShader;
Texture* carWheelTexture;
std::vector<Mesh*> carWheels;
std::vector<Transform*> carWheelTransforms;

Mesh* tembok;
Shader* tembokShader;
Texture* tembokTexture;
Transform* tembokTransform;

Mesh* atap;
Shader* atapShader;
Texture* atapTexture;
Transform* atapTransform;

Mesh* door;
Shader* doorShader;
Texture* doorTexture;
Transform* doorTransform;

Mesh* skybox;
Shader* skyboxShader;
Texture* skyboxTexture;
Transform* skyboxTransform;

Light* light;

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

	light = new Light();
	light->x = 0.5f;
	light->y = -0.6f;
	light->z = -0.2f;
	
	planeShader = new Shader("res/Triangle");
	planeTexture = new Texture("res/grass.png", GL_LINEAR_MIPMAP_NEAREST);
	planeTransform = new Transform();
	plane = Plane();

	roadShader = new Shader("res/Texture");
	roadTexture = new Texture("res/dirtroad.png", GL_LINEAR_MIPMAP_NEAREST);
	roadTransform = new Transform();
	road = Road();

	leafShader = new Shader("res/Texture");
	leafTexture = new Texture("res/leaf.png");
	leafTransform = new Transform();
	leafTransform->pos.z = 3.0f;
	leaf = Leaf();

	woodShader = new Shader("res/Triangle");
	woodTexture = new Texture("res/wood.jpg", GL_LINEAR_MIPMAP_NEAREST);
	woodTransform = new Transform();
	wood = Wood();

	leaf2Shader = new Shader("res/Texture");
	leaf2Texture = new Texture("res/leaf.png");
	leaf2Transform = new Transform();
	leaf2Transform->pos.z = 3.5f;
	leaf2Transform->pos.x = 0.5f;
	leaf2 = Leaf();

	wood2Shader = new Shader("res/Triangle");
	wood2Texture = new Texture("res/wood.jpg", GL_LINEAR_MIPMAP_NEAREST);
	wood2Transform = new Transform();
	wood2 = Wood();

	leaf3Shader = new Shader("res/Texture");
	leaf3Texture = new Texture("res/leaf.png");
	leaf3Transform = new Transform();
	leaf3Transform->pos.z = -1.0f;
	leaf3Transform->pos.x = 0.5f;
	leaf3 = Leaf();

	wood3Shader = new Shader("res/Triangle");
	wood3Texture = new Texture("res/wood.jpg", GL_LINEAR_MIPMAP_NEAREST);
	wood3Transform = new Transform();
	wood3 = Wood();

	batangKincirShader = new Shader("res/Triangle");
	batangKincirTexture = new Texture("res/batang.png");
	batangKincirTransform = new Transform();
	batangKincirTransform->pos.z = 0.9f;
	batangKincirTransform->pos.y = 1.85f;
	batangKincirTransform->pos.x = 0.5f;
	batangKincir = BatangKincir();

	kincirShader = new Shader("res/Triangle");
	kincirTexture = new Texture("res/kincir.png");
	kincirTransform = new Transform();
	kincirTransform->pos.z = 0.9f;
	kincirTransform->pos.y = 1.85f;
	kincirTransform->pos.x = 0.5f;
	kincir = Kincir();

	towerBawahShader = new Shader("res/Triangle");
	towerBawahTexture = new Texture("res/cement.png");
	towerBawahTransform = new Transform();
	towerBawah = TowerBawah();

	towerTengahShader = new Shader("res/Triangle");
	towerTengahTexture = new Texture("res/brick.png");
	towerTengahTransform = new Transform();
	towerTengah = TowerTengah();

	towerAtasShader = new Shader("res/Triangle");
	towerAtasTexture = new Texture("res/wood2.png");
	towerAtasTransform = new Transform();
	towerAtas = TowerAtas();

	carShader = new Shader("res/Texture");
	carTexture = new Texture("res/metal.jpg");
	carTransform = new Transform();
	carTransform->rotation.y = (float)glm::radians(-90.0f);
	carTransform->pos.z = 2.0f;
	carTransform->pos.x = -1.5f;
	carTransform->pos.y = 0.2f;
	car = CarBody();

	carWindowShader = new Shader("res/PlainTriangle");
	carWindow = CarWindow();

	carWheelShader = new Shader("res/PlainTriangle");
	carWheels.push_back(Wheel());
	carWheels.push_back(Wheel());
	carWheels.push_back(Wheel());
	carWheels.push_back(Wheel());
	carWheelTransforms.push_back(new Transform());
	carWheelTransforms.push_back(new Transform());
	carWheelTransforms.push_back(new Transform());
	carWheelTransforms.push_back(new Transform());

	for (int i = 0; i < carWheelTransforms.size(); i++) {
		carWheelTransforms[i]->scale = glm::vec3(0.2f, 0.2f, 0.2f);
		carWheelTransforms[i]->rotation.y = (float)glm::radians(-90.0f);
		carWheelTransforms[i]->pos.z = 3.51f;
		carWheelTransforms[i]->pos.x = -1.49f;
		carWheelTransforms[i]->pos.y = 0.2f;
	}

	carWheelTransforms[1]->pos.z = 2.49f;
	carWheelTransforms[1]->pos.x = -1.49f;

	carWheelTransforms[2]->pos.z = 3.51f;
	carWheelTransforms[2]->pos.x = -2.51f;

	carWheelTransforms[3]->pos.z = 2.49f;
	carWheelTransforms[3]->pos.x = -2.51f;

	tembokShader = new Shader("res/Triangle");
	tembokTexture = new Texture("res/brick.png");
	tembokTransform = new Transform();
	tembokTransform->pos.x = 3.0f;
	tembokTransform->pos.z = 0.5f;
	tembokTransform->pos.y = 0.5f;
	tembokTransform->scale = glm::vec3(0.5, 0.5, 0.5);
	tembok = TembokRumah();

	atapShader = new Shader("res/Triangle");
	atapTexture = new Texture("res/roof.jpg");
	atapTransform = new Transform();
	atapTransform->pos.x = 3.0f;
	atapTransform->pos.z = 0.5f;
	atapTransform->pos.y = 1.7f;
	atapTransform->scale = glm::vec3(0.7, 0.7, 0.7);
	atap = AtapRumah();

	doorShader = new Shader("res/Triangle");
	doorTexture = new Texture("res/door.png");
	doorTransform = new Transform();
	doorTransform->pos.x = 3.0f;
	doorTransform->pos.z = 0.51f;
	doorTransform->pos.y = 0.5f;
	doorTransform->scale = glm::vec3(0.5, 0.5, 0.5);
	door = Pintu();

	skyboxShader = new Shader("res/Texture");
	skyboxTexture = new Texture("res/skybox.png");
	skyboxTransform = new Transform();
	skyboxTransform->scale = glm::vec3(50, 50, 50);
	skyboxTransform->pos.y = -5.0f;
	skybox = Box();
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

	if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS) {
		MoveCameraXZ(speed);
	}

	if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS) {
		MoveCameraXZ(-speed);
	}

	if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS) {
		StrafeCamera(-speed);
	}

	if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS) {
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
	batangKincirTransform->rotation.z += (float)glm::radians(-0.5f) * deltaTime;
	kincirTransform->rotation.z += (float)glm::radians(-0.5f) * deltaTime;

	if (carTransform->pos.z < -20) {
		carTransform->pos.z = 20.0f;
		carWheelTransforms[0]->pos.z = 21.51f;
		carWheelTransforms[1]->pos.z = 20.49f;
		carWheelTransforms[2]->pos.z = 21.51f;
		carWheelTransforms[3]->pos.z = 20.49f;
	}

	carTransform->pos.z += -0.05f;
	for (int i = 0; i < carWheelTransforms.size(); i++) {
		carWheelTransforms[i]->pos.z += -0.05f;
	}
}

void Engine::Render() {
	Clear(0.35f, 0.87f, 0.92f, 0.0f);

	camera->position.x = posCamX;
	camera->position.y = posCamY;
	camera->position.z = posCamZ;

	camera->forward.x = viewCamX;
	camera->forward.y = viewCamY;
	camera->forward.z = viewCamZ;

	planeTexture->Bind();
	planeShader->Bind();
	planeShader->Update(*planeTransform, *camera, glm::vec3(light->x, light->y, light->z));
	plane->Draw();

	roadTexture->Bind();
	roadShader->Bind();
	roadShader->Update(*roadTransform, *camera, glm::vec3(light->x, light->y, light->z));
	road->Draw();

	leafShader->Bind();
	leafShader->Update(*leafTransform, *camera, glm::vec3(-0.2f, -1.0f, -0.2f));
	leafTexture->Bind();
	leaf->Draw();

	woodShader->Bind();
	woodShader->Update(*leafTransform, *camera, glm::vec3(light->x, light->y, light->z));
	woodTexture->Bind();
	wood->Draw();

	leaf2Shader->Bind();
	leaf2Shader->Update(*leaf2Transform, *camera, glm::vec3(-0.2f, -1.0f, -0.2f));
	leaf2Texture->Bind();
	leaf2->Draw();
		
	wood2Shader->Bind();
	wood2Shader->Update(*leaf2Transform, *camera, glm::vec3(light->x, light->y, light->z));
	wood2Texture->Bind();
	wood2->Draw();

	leaf3Shader->Bind();
	leaf3Shader->Update(*leaf3Transform, *camera, glm::vec3(-0.2f, -1.0f, -0.2f));
	leaf3Texture->Bind();
	leaf3->Draw();
		
	wood3Shader->Bind();
	wood3Shader->Update(*leaf3Transform, *camera, glm::vec3(light->x, light->y, light->z));
	wood3Texture->Bind();
	wood3->Draw();

	batangKincirShader->Bind();
	batangKincirShader->Update(*batangKincirTransform, *camera, glm::vec3(light->x, light->y, light->z));
	batangKincirTexture->Bind();
	batangKincir->Draw();

	kincirShader->Bind();
	kincirShader->Update(*kincirTransform, *camera, glm::vec3(light->x, light->y, light->z));
	kincirTexture->Bind();
	kincir->Draw();

	towerBawahShader->Bind();
	towerBawahShader->Update(*towerBawahTransform, *camera, glm::vec3(light->x, light->y, light->z));
	towerBawahTexture->Bind();
	towerBawah->Draw();

	towerTengahShader->Bind();
	towerTengahShader->Update(*towerTengahTransform, *camera, glm::vec3(light->x, light->y, light->z));
	towerTengahTexture->Bind();
	towerTengah->Draw();

	towerAtasShader->Bind();
	towerAtasShader->Update(*towerAtasTransform, *camera, glm::vec3(light->x, light->y, light->z));
	towerAtasTexture->Bind();
	towerAtas->Draw();

	carShader->Bind();
	carShader->Update(*carTransform, *camera, glm::vec3(light->x, light->y, light->z));
	carTexture->Bind();
	car->Draw();

	carWindowShader->Bind();
	carWindowShader->Update(*carTransform, *camera, glm::vec3(light->x, light->y, light->z), glm::vec4(0.2f, 0.2f, 0.2f, 1.0f));
	carWindow->Draw();

	carWheelShader->Bind();
	for (int i = 0; i < carWheels.size(); i++) {
		carWheelShader->Update(*carWheelTransforms[i], *camera, glm::vec3(light->x, light->y, light->z), glm::vec4(0.0f, 0.0f, 0.0f, 1.0f));
		carWheels[i]->Draw();
	}

	tembokShader->Bind();
	tembokShader->Update(*tembokTransform, *camera, glm::vec3(light->x, light->y, light->z), glm::vec4(0.0f, 0.0f, 1.0f, 1.0f));
	tembokTexture->Bind();
	tembok->Draw();

	atapShader->Bind();
	atapShader->Update(*atapTransform, *camera, glm::vec3(light->x, light->y, light->z), glm::vec4(0.0f, 0.0f, 1.0f, 1.0f));
	atapTexture->Bind();
	atap->Draw();

	doorShader->Bind();
	doorShader->Update(*doorTransform, *camera, glm::vec3(light->x, light->y, light->z), glm::vec4(0.0f, 0.0f, 1.0f, 1.0f));
	doorTexture->Bind();
	door->Draw();

	skyboxShader->Bind();
	skyboxShader->Update(*skyboxTransform, *camera, glm::vec3(-0.2f, -1.0f, -0.2f));
	skyboxTexture->Bind();
	skybox->Draw();
}
