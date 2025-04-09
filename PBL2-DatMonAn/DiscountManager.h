#pragma once
ref class DiscountManager
{
private:
	static double discountPercent = 0.0;
public:
	static property double DiscountPercent
	{
		double get()
		{
			return discountPercent;
		}
		void set(double value)
		{
			discountPercent = value;
		}
	}

	static void ResetDiscount()
	{
		discountPercent = 0.0;
	}
};

