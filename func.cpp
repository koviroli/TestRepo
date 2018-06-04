void func(int* ptr)
{
	std::cout << "func(int*)" << std::endl;
}

void funcNew(int* ptr, int length)
{
	ptr[0x00] = 0xA;
	if(length < 5)
	{
		std::cout << "low lenghth" << std::endl;
	}
}