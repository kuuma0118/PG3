#pragma once

template<typename T1, typename T2>

class Comparator
{
private:// メンバ変数
	T1 num1_;
	T2 num2_;

public:// メンバ関数
	Comparator(T1 num1, T2 num2) : num1_(num1), num2_(num2) {}

	template<typename T>
	// 値の小さいほうを返す
	T Min() {
		if (num1_ < num2_) {
			return static_cast<T>(num1_);
		}
		else if (num1_ > num2_) {
			return static_cast<T>(num2_);
		}
		return 0;
	}

};