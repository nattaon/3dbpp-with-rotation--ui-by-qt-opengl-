
class CalculateBppErhan
{
public:
	CalculateBppErhan();
	~CalculateBppErhan();

	void CalculateBinpack(
		int total_box_to_pack,
		int bin_w, int bin_h, int bin_d,
		int *box_w, int *box_h, int *box_d,
		int *box_x, int *box_y, int *box_z,
		int *orien_x, int *orien_y, int *orien_z,
		int *bin_no, int *item_no);
};

