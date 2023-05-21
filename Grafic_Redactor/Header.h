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

bool finished = false;
bool line_or_duga = false;
bool start = false;
unsigned char finished_dyga = 0;
unsigned char finished_dyga1 = 0;
dot_struct temporary_dot;
line_struct temporary_line;
std::vector<dot_struct> dot;
std::vector<line_struct> line;