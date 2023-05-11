#pragma once
#include <vector>

struct dot_struct
{
	int x, y;
};

struct line_struct
{
	int x1, y1, x2, y2;
};

struct dyga_struct
{
	int x1, y1, x2, y2, x0, y0;
};

bool finished = false;
unsigned char finished_dyga = 0;
dot_struct temporary_dot;
line_struct temporary_line;
std::vector<dot_struct> dot;
std::vector<line_struct> line;