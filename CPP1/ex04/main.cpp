#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
	std::fstream my_file;
	std::string ch;
	if (ac == 4)
	{
		std::string filename = av[1];
		my_file.open(filename, std::ios::in);
		std::fstream copy_file;
		copy_file.open(filename +=  ".replace", std::ios::out);
		if (!my_file)
		{
			std::cout << "No such file";
		}
		else
		{
			
			while (getline(my_file, ch))
			{
				int index;
				int curr_pos = 0;
				std::string p = "";

				while(ch[curr_pos])
				{
					if((index = ch.find(av[2], curr_pos)) != -1)
					{
						while (curr_pos < index)
							p += ch[curr_pos++]; 
						curr_pos = index + strlen(av[2]); // new position is from next element of index
						p += av[3];
					}
					p += ch[curr_pos++];
				}
				copy_file << p << '\n';
			}
		}
		copy_file.close();
		my_file.close();
	}
	else
	{
		std::cout << "error \n";
	}
	return (0);
}