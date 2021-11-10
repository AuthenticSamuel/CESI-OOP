#pragma once
#ifndef DEF_POINTS
#define DEF_POINTS
#include <string>

class Point2D
{
public:
	Point2D();
	Point2D(int x, int y);
	~Point2D();
	int getX();
	int getY();
	std::string toString();

private:
	int m_x;
	int m_y;

};

class Point3D
{
public:
	Point3D();
	Point3D(int x, int y, int z);
	~Point3D();
	int getX();
	int getY();
	int getZ();
	std::string toString();

private:
	int m_x;
	int m_y;
	int m_z;

};

#endif