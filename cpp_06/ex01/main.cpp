#include <iostream>
#include <unistd.h>

typedef	struct	Data
{
	std::string	randStr1;
	int			randInt;
	std::string	randStr2;
}				Data;

Data*	deserialize(void *raw)
{
	Data	*data = new Data;

	data->randStr1 = *reinterpret_cast<std::string*>(raw);
	data->randInt = *reinterpret_cast<int*>((char*)raw + 24);
	data->randStr2 = *reinterpret_cast<std::string*>((char*)raw + 28);
	return data;
}

void*	serialize(void)
{
	std::string		rndmStr[3] = {"Random String 1", "Random String 2", "Random String 3"};
	char	*data = new char[52];
	int		rndmInt;

	srand(time(NULL));
	rndmInt = rand() % 1024;
	memcpy(data, &rndmStr[rand() % 3], 24);
	memcpy(data + 24, &rndmInt, 4);
	memcpy(data + 28, &rndmStr[rand() % 3], 24);

	return data;
}

int		main(void)
{
	void	*raw = serialize();
	Data	*data = deserialize(raw);

	std::cout << data->randStr1 << std::endl;
	std::cout << data->randInt << std::endl;
	std::cout << data->randStr2 << std::endl;

	delete static_cast<char*>(raw);
	delete data;
}
