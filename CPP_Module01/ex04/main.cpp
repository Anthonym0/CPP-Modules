#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc - 1 != 3)
	{
		std::cerr << "Error" << std::endl;
		std::cerr << "Use : ./sed [file] [s1] [s2]" << std::endl;
		return 1;
	}
	std::string file = argv[1];
	std::string first_occur = argv[2];
	std::string replace = argv[3];
	std::string str_sub;

	std::ifstream ifs(file.c_str());
	std::string line;

	if (ifs)
	{
		file.append(".replace");
		std::ofstream ofs(file.c_str());
		if (ofs)
		{
			while (std::getline(ifs, line))
			{
				while (line.find(first_occur) != std::string::npos)
				{
					int index_occur = line.find(first_occur);
					line.erase(index_occur, first_occur.length());
					line.insert(index_occur, replace);
				}
				ofs << line << std::endl;
			}
			ofs.close();
		}
		else
		{
			ifs.close();
			std::perror("Error");
			return (0);
		}
		ifs.close();
	}
	else
		std::perror("Error");
	return (0);
}
