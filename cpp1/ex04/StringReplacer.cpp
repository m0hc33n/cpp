#include "StringReplacer.hpp"

StringReplacer::StringReplacer(char *filename, char *search, char *replace)
	: m_filename(filename)
	, m_search(search)
	, m_replace(replace) {}


const std::string& StringReplacer::getFilename() const {
	return m_filename;
}

const std::string& StringReplacer::getSearch() const {
	return m_search;
}

const std::string& StringReplacer::getReplace() const {
	return m_replace;
}

void StringReplacer::setFilename(char *filename) {
	m_filename = filename;
}

void StringReplacer::setSearch(char *search) {
	m_search = search;
}

void StringReplacer::setReplace(char *replace) {
	m_replace = replace;
}

void StringReplacer::replace() const {
	if (!verify()) {
		std::cout << "[--] All the args are mandatory" << std::endl;
		return ;
	}
    std::ifstream inFile(m_filename.c_str());
    if (inFile) {
        std::string outputFilename = m_filename + ".replace";
        std::ofstream outFile(outputFilename.c_str());

        if (outFile) {
            std::string line;
            while (std::getline(inFile, line)) {
                line = replaceString(line);
                outFile << line << std::endl;
            }
            outFile.close();
            inFile.close();
            std::cout << "[++] Successfully replaced and saved to " << outputFilename << std::endl;
        } else {
            std::cout << "[--] Failed to open output file " << outputFilename << std::endl;
            inFile.close();
        }
    } else {
        std::cout << "[--] Failed to open filename " << m_filename << std::endl;
    }
}

std::string StringReplacer::replaceString(const std::string& line) const {
    std::string result;
    size_t pos = 0;
    size_t lastPos = 0;
    while ((pos = line.find(m_search, pos)) != std::string::npos) {
        // Append the part of the line before the match
        result += line.substr(lastPos, pos - lastPos);
        // Append the replacement string
        result += m_replace;
        // Update lastPos to the position after the replaced part
        lastPos = pos + m_search.length();
        pos += m_replace.length(); // Important:  Avoid infinite loop!
    }
    // Append the remaining part of the line
    result += line.substr(lastPos);
    return result;
}

bool StringReplacer::verify() const {
	if (m_filename.empty() || m_search.empty() || m_replace.empty()) {
		return false;
	}
	return true;
}
