#pragma once
class VectorFloat
{
public:
    VectorFloat();
    VectorFloat(int n);
    VectorFloat(const VectorFloat& src);
    ~VectorFloat(void);
    int size();
    void operator=(VectorFloat& src);
    float& operator[](int i);
    void operator+=(float incr);

private:
    float* m_p;
    int m_dim;

};

VectorFloat operator+(VectorFloat x, VectorFloat y);
float operator*(VectorFloat x, VectorFloat y);

