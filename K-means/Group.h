#pragma once
#include <vector>
#include <math.h>


class Sample {
private:
	float x;
	float y;

public:
	Sample(float lhs = 0, float rhs = 0) :x(lhs), y(rhs) {}

	Sample operator+(const Sample& para) {
		Sample temp;
		temp.x = this->x + para.x;
		temp.y = this->y + para.y;
		return temp;
	}

	Sample& operator+=(const Sample& para) {
		(*this) = (*this) + para;
		return (*this);
	}

	Sample operator-(const Sample& para) {
		Sample temp;
		temp.x = this->x - para.x;
		temp.y = this->y - para.y;
		return temp;
	}

	Sample operator/(const int& para) {
		Sample temp;
		temp.x = this->x / para;
		temp.y = this->y / para;
		return temp;
	}

	Sample& operator/=(const int& para) {
		(*this) = (*this) / para;
		return (*this);
	}

	float calcDistance(Sample& lhs, Sample& rhs) {
		float a = pow(lhs.x - rhs.x, 2);
		float b = pow(lhs.y - rhs.y, 2);

		return sqrt(a + b);
	}

	float getX() { return this->x; }

	float getY() { return this->y; }
};


class Group {
private:
	std::vector<Sample&> samples;
	Sample centre;

public:
	Group() {}

	

	void calcCentre() {
		if (samples.empty()) {
			return;
		}

		Sample Sum(0, 0);
		
		for (std::vector<Sample&>::iterator itr = samples.begin();
			itr != samples.end();
			itr++) {
			Sum += *itr;
		}

		centre = Sum / samples.size();
	}

	Sample getCentre() { return centre; }
};