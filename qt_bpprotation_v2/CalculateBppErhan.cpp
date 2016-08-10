#include "CalculateBppErhan.h"

int binpacking(int total_box_to_pack,
	int bin_w, int bin_h, int bin_d,
	int *box_w, int *box_h, int *box_d,
	int *_box_x, int *_box_y, int *_box_z,
	int *_orien_x, int *_orien_y, int *_orien_z,
	int *_bin_no, int *_item_no);

CalculateBppErhan::CalculateBppErhan()
{
}


CalculateBppErhan::~CalculateBppErhan()
{
}

void CalculateBppErhan::CalculateBinpack(
	int total_box_to_pack,
	int bin_w, int bin_h, int bin_d,
	int *box_w, int *box_h, int *box_d,
	int *box_x, int *box_y, int *box_z,
	int *orien_x, int *orien_y, int *orien_z,
	int *bin_no, int *item_no)
{
	binpacking(total_box_to_pack,
		bin_w, bin_h, bin_d,
		box_w, box_h, box_d,
		box_x, box_y, box_z,
		orien_x, orien_y, orien_z,
		bin_no, item_no);
}