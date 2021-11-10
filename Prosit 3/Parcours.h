#pragma once
#ifndef DEF_PARCOURS
#define DEF_PARCOURS
#include <vector>
#include "Points.h"

class Parcours2D
{
public:
	Parcours2D();
	~Parcours2D();
	void add(Point2D point);
	double distance();

private:
	std::vector<Point2D> m_points;

};

class Parcours3D
{
public:
	Parcours3D();
	~Parcours3D();
	void add(Point3D point);
	double distance();

private:
	std::vector<Point3D> m_points;

};

#endif