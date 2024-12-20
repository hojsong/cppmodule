#include <iostream>
#include <fstream>

int	main(int ac, char *av[])
{
	std::ifstream ifs;
    std::ofstream ofs;
    std::string outfile;
    std::string contents;
    std::string s1;
    std::string s2;
    int s1_len;
    int s2_len;

	if (ac != 4)
	{
		std::cout << "argc is not 4" << std::endl;
		return (1);
	}
	s1 = av[2];
	s2 = av[3];
	s1_len = s1.length();
	s2_len = s2.length();
	if (std::strlen(av[1]) == 0 || s1_len == 0 || s2_len == 0)
	{
		std::cout << "argv length is 0" << std::endl;
		return (1);
	}

	ifs.open(av[1]);
	if (ifs.fail())
	{
		std::cout << "Not Found file" << av[1] << std::endl;
		return (1);
	}

	outfile = av[1];
	outfile.append(".replace");
	ofs.open(outfile);
	if (ofs.fail())
	{
		std::cout << "File Open error " << outfile << std::endl;
		return (1);
	}

	while (true)
	{
		std::getline(ifs, contents);

		size_t pos = 0;
		while (true)
		{
			pos = contents.find(s1, pos);
			if (pos == std::string::npos)
			{
				break ;
			}
			contents.erase(pos, s1_len);
			contents.insert(pos, s2);
			pos += s2_len;
		}
		ofs << contents;
		if (ifs.eof())
			break ;
		ofs << std::endl;
	}

	return (0);
}