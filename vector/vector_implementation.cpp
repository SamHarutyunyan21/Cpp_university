#include <iostream>

template <typename T>
class Vector
{
	private:
		T *data;
		size_t size;
		size_t cap;

	public:
		Vector()
		{
				size=0;
				cap=1;
				data = new T[cap];
		}

		~Vector()
		{
			delete[] data;
			data=nullptr;
		}

		void push_back(T val)
		{
			if(size==cap)
			{
				size_t new_cap = cap * 2;
				T *new_data = new T[new_cap];
				
				for(size_t i = 0; i < size; i++){
						new_data[i] = data[i];
				}

				delete data;
				data = new_data;
				cap = new_cap;
			}
			
			data[size++] = val;
		}

		void pop_back()
		{
			if(size > 0) size--;
			else
				std::cout <<"The vector is empty";
		}


		int& operator[](size_t index)
		{
				if(index >= size) std::cout <<"Index must be smaller than size.";
				return data[index];
		}

		Vector operator+(const Vector& other) const 
		{
			Vector res;
			if(this -> size != other.size)
			{
				std::cout<<"Vectors must have the same size!!!\n";
				return res;
			}

			for(size_t i = 0; i < this -> size; i++)
			{
				res.push_back(this->data[i]+other.data[i]);
			}

			return res;
		}


		Vector operator-(const Vector& other) const 
		{
			Vector res;
			if(this -> size != other.size)
			{
				std::cout<<"Vectors must have the same size!!!\n";
				return res;
			}

			for(size_t i = 0; i < size; i++)
			{
				res.push_back(this->data[i]-other.data[i]);
			}

			return res;
		}


		Vector operator*(const Vector& other) const 
		{
			Vector res;
			if(this -> size != other.size)
			{
				std::cout<<"Vectors must have the same size!!!\n";
				return res;
			}

			for(size_t i = 0; i < size; i++)
			{
				res.push_back(this->data[i] * other.data[i]);
			}

			return res;
		}

		Vector operator/(const Vector& other) const 
		{
			Vector res;
			if(this -> size != other.size)
			{
				std::cout<<"Vectors must have the same size!!!\n";
				return res;
			}

			for(size_t i = 0; i < size; i++)
			{
				if(other.data[i]!=0)
					res.push_back(this->data[i]/other.data[i]);
				else 
					std::cout<<"The index where element is 0, is " << i << " \n";
			}

			return res;
		}

		const Vector& operator=(const Vector& other)
		{
				if(this == &other) return *this;

				size = other.size;
				cap  = other.cap;
				delete data;

				data = new T[cap];
				for(size_t i = 0; i < size; i++)
				{
					data[i] = other.data[i];
				}

				return *this;
		}

		size_t size_of_vector() const
		{
			return size;
		}

		size_t cap_of_vector() const
		{
			return cap;
		}

};

int main(){
	Vector<int> v1;
	v1.push_back(5);
	v1.push_back(23);
	v1.push_back(45);

	Vector<int> v2;	
	v2.push_back(3);
	v2.push_back(27);
	v2.push_back(0);

	Vector<int> v3 = v1 + v2;
	Vector<int> v4 = v1 - v2;
	Vector<int> v5 = v1 * v2;	
	Vector<int> v6 = v1 / v2;
	

	std::cout<< "All vectors elements\n";
	for(size_t i = 0; i < v4.size_of_vector(); i++) std::cout<<v4[i] <<" ";
	std::cout<<"\n";
	
	for(size_t i = 0; i < v5.size_of_vector(); i++) std::cout<<v5[i] <<" ";
	std::cout<<"\n";
	
	for(size_t i = 0; i < v6.size_of_vector(); i++) std::cout<<v6[i] <<" ";
	std::cout<<"\n";
	
	
	for(size_t i = 0; i < v7.size_of_vector(); i++) std::cout<<v7[i] <<" ";
	std::cout<<"\n";
	
	std::cout<< "Vector of sum before popping:";
	for(size_t i = 0; i < v3.size_of_vector(); i++) std::cout<<v3[i] <<" ";
	std::cout<<"\n";

    	v3.pop_back();

    	std::cout<< "Vector of sum after popping:";
	for(size_t i = 0; i < v3.size_of_vector(); i++) std::cout<<v3[i] <<" ";
	std::cout<<"\n";    
	
	
	Vector<int> v7;
	v7 = v1;
	v1[0] = 567;
	std::cout<<v7[0]<<" V7 first element wasn't changed!!!\n";
	return 0;


}
