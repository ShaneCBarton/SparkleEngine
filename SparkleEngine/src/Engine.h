#ifndef _ENGINE_H_
#define _ENGINE_H_

class Engine
{
public:
	Engine();
	~Engine();
	void Initialize();
	void Run();
	void ProcessInput();
	void Update();
	void Render();
	void Destroy();

private:

};

#endif
