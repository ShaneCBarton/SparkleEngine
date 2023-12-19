#ifndef _ENGINE_H_
#define _ENGINE_H_

const int FPS = 60;
const int MILLISECONDS_PER_FRAME = 1000 / FPS;

class Engine
{
public:
	Engine();
	~Engine();
	void Initialize();
	void Run();
	void Setup();
	void ProcessInput();
	void Update();
	void Render();
	void Destroy();

	int windowHeight;
	int windowWidth;

private:
	struct SDL_Window* m_window;
	struct SDL_Renderer* m_renderer;

	bool m_isRunning;
};

#endif
