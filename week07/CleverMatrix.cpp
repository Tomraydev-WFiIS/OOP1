#include "CleverMatrix.h"
#include "MatrixException.h"
#include "IllegalOperation.h"
#include "AssumptionError.h"
// proszę uzupełnić o odpowiednie include'y i metody; można komentować
		


CleverMatrix CleverMatrix::operator*(const CleverMatrix& c)const{
	if( m_size != c.m_size ){
		std::string tmp_str = "Sizes are different " + std::to_string(m_size) + ", " + std::to_string(c.m_size);
		throw MatrixException(tmp_str);	
	}  
	CleverMatrix tmp(m_size);
	for (int i = 0; i < m_size; ++i){
		for (int j = 0; j < m_size; ++j){
			for (int k = 0; k < m_size; ++k){
				tmp(i,j) += m_data[ mapIdx(i,k) ]*c.m_data[ mapIdx(k,j) ];
			}
		}
	}
	return tmp;
}

int CleverMatrix::mapIdx(int row, int col)const{
	return row*m_size+col;
}

void CleverMatrix::print() const{

	for (int i = 0; i < m_size; ++i){
		for (int j = 0; j < m_size; ++j){
			std::cout << m_data[ mapIdx(i,j) ] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

int& CleverMatrix::operator()(int i, int j){
	if (mapIdx(i,j) > (m_size*m_size - 1)){
		std::string tmp_str = "Indices (" + std::to_string(i) + ", " + std::to_string(j) + ") out of bounds";
		throw IllegalOperation(tmp_str);
	}
	return m_data[mapIdx(i,j)];
}

CleverMatrix::CleverMatrix(int n){
	m_size = n;
	for(int i = 0; i < n*n; i++){
		m_data.push_back(0);
	}
	return;
}

CleverMatrix::CleverMatrix(int* matrixData, int n){
	m_size = n;
	for(int i = 0; i < n*n; i++){
		m_data.push_back(matrixData[i]);
	}
	return;
}

CleverMatrix::CleverMatrix(int* matrixData, int n, std::string type){
	m_size = n;
	if(type == "nonsymmetric"){
		CleverMatrix(matrixData, n);
	}
	if(type == "symmetric"){
		for(int i = 0; i < m_size; i++){
			for(int j = 0; j < m_size; j++){
				if (matrixData[mapIdx(i,j)] != matrixData[mapIdx(j,i)] ){
					throw AssumptionError("Matrix is not symmetric");
				}
			}
		}
	}
	return;
}
