/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:43:58 by moboulan          #+#    #+#             */
/*   Updated: 2025/04/26 13:40:31 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>

std::string replace(std::string line, std::string s1, std::string s2)
{
    size_t position = 0;
    
    if (line.empty())
        return (line);

    position = line.find(s1);
	while (position != std::string::npos)
	{
		line.erase(position, s1.length());
		line.insert(position, s2);
		position = line.find(s1, position + s2.length());
	}
    return (line);
}

int sed(std::string filename, std::string s1, std::string s2)
{
    std::ifstream infile(filename);
    
    if (!infile.is_open()) 
        return (std::cerr << "Error: Could not open " << filename << std::endl, 1);

    if (infile.peek() == EOF)
        return (std::cerr << "Error: " << filename << " is empty" << std::endl, 1);

    std::ofstream outfile(filename + ".replace");
    if (!outfile)
        return (std::cerr << "Error: Could not create outfile" << std::endl, 1);

    std::string line;
    while (std::getline(infile, line))
        outfile << replace(line, s1, s2) << std::endl;    
    
    infile.close();
    outfile.close();
    
    std::cout << "Created " << filename + ".replace succesfully" << std::endl;
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc != 4)
        return (std::cerr << "./SedIsForLosers filename s1 s2" << std::endl, 1);
    else
        return (sed(argv[1], argv[2], argv[3]));
}
