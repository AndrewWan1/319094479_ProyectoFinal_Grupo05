#pragma once
#include<stdio.h>
#include<glew.h>
#include<glfw3.h>
#include "CommonValues.h"
class Window
{
public:
	Window();
	Window(GLint windowWidth, GLint windowHeight);
	int Initialise();
	GLfloat getBufferWidth() { return bufferWidth; }
	GLfloat getBufferHeight() { return bufferHeight; }
	GLfloat getXChange();
	GLfloat getYChange();
	GLfloat getmuevex() { return muevex; }
	bool getShouldClose() {
		return  glfwWindowShouldClose(mainWindow);}
	bool* getsKeys() { return keys; }
	void swapBuffers() { return glfwSwapBuffers(mainWindow); }
	
	GLfloat getAvanzarCarro() { return avanzarCarro; }
	GLfloat getRetrocederCarro() { return retrocederCarro; }
	GLfloat getCofre() { return cofre; }

	GLfloat getAvanzarHeli() { return avanzarHeli; }
	GLfloat getRetrocederHeli() { return retrocederHeli; }

	GLfloat getLuminaria() { return luminaria; }
	GLfloat getLucesCarro() { return lucesCarro; }
	int getCamaraActiva() { return camaraActiva; }	 //0 = a�rea, 1 = tercera persona, 2 = puestos
	bool* getLucesSpot() { return lucesSpot; }




	~Window();
private: 
	GLFWwindow *mainWindow;
	GLint width, height;
	bool keys[1024];
	GLint bufferWidth, bufferHeight;
	void createCallbacks();
	GLfloat lastX;
	GLfloat lastY;
	GLfloat xChange;
	GLfloat yChange;
	GLfloat muevex;

	GLfloat avanzarCarro, retrocederCarro, cofre, bandera1;

	GLfloat avanzarHeli, retrocederHeli;

	GLfloat luminaria, lucesCarro;

	int camaraActiva;
	
	int puestoActual = 0; // Para saber en qu� puesto est�s
	bool lucesSpot[MAX_SPOT_LIGHTS] = { false };


	bool mouseFirstMoved;
	static void ManejaTeclado(GLFWwindow* window, int key, int code, int action, int mode);
	static void ManejaMouse(GLFWwindow* window, double xPos, double yPos);

};

