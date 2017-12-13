#pragma once

#include <iostream>
#include "Object3D.h"
#include "glm/mat4x4.hpp"
#include "glm/gtc/matrix_transform.hpp"
#include "glm/gtc/type_ptr.hpp"
#include "glm/vec4.hpp"
#include "glm/vec3.hpp"
#include "Plane.h"
#include "GLFW\glfw3.h"

class Application {
public:
	Application();
	~Application();

	GLFWwindow* window;

	void update();
	void setup();
	void display();
	void displayCubo();
	void displayPlane();
	void reshape(int w, int h);
	void keyboard(int key, int scancode, int action, int mods);
	void mouse(double xpos, double ypos);

private:
	Object3D triangle;
	glm::mat4 transformCube;
	Plane oPlane;
	float time;
	glm::mat4 transform, rotateY, rotateX;
	glm::mat4 scaleCube;
	glm::mat4 moveCube;
	glm::mat4 rotateCube;
	glm::vec3 eye;
	glm::vec3 angles;
	glm::vec3 target;
	glm::vec3 up;
	glm::vec3 myLightPosition;
	glm::mat4 lookAt;
	glm::mat4 perspective;
	glm::mat4 newPosis;

	GLuint mTransformID,
		cameraID,
		perspectiveID,
		eyeID,
		myLightPositionID,
		fTimeID,
		idTransformCube;
};