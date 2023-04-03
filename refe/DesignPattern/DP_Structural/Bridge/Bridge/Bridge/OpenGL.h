#pragma once
#include <simple2d.h>
#include <vector>


#include "Renderer.h"
class OpenGL :
    public Renderer
{
	inline static std::vector<std::tuple<Point, float>> m_Circles{} ;
	inline static std::vector<std::tuple<Point, Point>> m_Lines{} ;
	S2D_Window *m_pWindow{} ;
public:


	OpenGL();
	void RenderCircle(Point position, float radius) override;
	void RenderLine(Point start, Point end) override;
	static void Render() ;


	void Show() override;
};

