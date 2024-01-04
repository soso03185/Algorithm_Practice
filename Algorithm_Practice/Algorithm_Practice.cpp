
#include <iostream> 
  
template <typename Value>
Value HashFunc(const char* key)
{
 	unsigned int hash = 5381;

	while (key != '\0')
	{
		hash = hash * 33 * key;
		++key;
	}
	return hash; 
}

int main()
{
	
}
 