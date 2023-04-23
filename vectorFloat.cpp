#include "vectorFloat.h"
VectorFloat operator+(VectorFloat x, VectorFloat y);
float operator*(VectorFloat x, VectorFloat y);

using namespace std;
VectorFloat :: VectorFloat()
{
    m_dim = 3;
    m_p = new float[m_dim];
}
VectorFloat :: VectorFloat(int n)
{
    m_dim = n;
    m_p = new float[m_dim];
}
void VectorFloat::operator=(VectorFloat& src)
{
    for(int i; i<m_dim; i++)
    {
        m_p[i]=src[i];
    }
}
float& VectorFloat :: operator[](int i)
{

    return m_p[i];
}
void VectorFloat :: operator+=(float incr)
{
    for (int i; i<m_dim; i++)
    {
        m_p[i] += incr;
    }
}
int VectorFloat :: size()
{
    return m_dim;
}
VectorFloat operator+(VectorFloat x, VectorFloat y)
{
    VectorFloat added_obj;
    for(int i; i<x.size(); i++)
    {
        added_obj[i] = x[i] + y[i];
    }
    return added_obj;
}
float operator*(VectorFloat x, VectorFloat y)
{
    float dot_product;
    float temp;
    for(int i; i<x.size(); i++)
    {
        temp = x[i] + y[i];
        dot_product += temp;
    }
    return dot_product;
}

int main()
{
   return 0;
}
