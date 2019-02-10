#pragma once

template <class T>
struct TLink
{
	T val;
	TLink* pNext;
};
struct TManom
{
	double coeff;
	int PowX, PowY, PowZ;
};
bool operator ==(TManom m1, TManom m2)
{
	if (m1.PowX == m2.PowX&&m1.PowY == m2.PowY&&m1.PowZ == m2.PowZ)
		return true;
	else
		return false;
}
bool operator !=(TManom m1, TManom m2)
{
	if (m1.PowX != m2.PowX)
		return true;
	else
		return false;
}
bool operator <(TManom m1, TManom m2)
{
	if (m1.PowX < m2.PowX)
		return true;
	else
		return false;
}