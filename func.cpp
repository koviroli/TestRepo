void func(int* ptr)
{
	std::cout << "func(int*)" << std::endl;
	int a = 5;
	int c = 55;
	int k = a+c;
}

void funcNew(int* ptr, int length)
{
	ptr[0x00] = 0xA;
	if(length < 5)
	{
		std::cout << "low lenghth" << std::endl;
	}
}

void anotherFunc(void)
{
	int a = 5;
}