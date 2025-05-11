#pragma once

#include <iostream>
#include <fstream>
#include <string>


class StringReplacer {
	public:
		StringReplacer(char*, char*, char*);

		const std::string& getFilename() const;
		const std::string& getSearch() const;
		const std::string& getReplace() const;

		void setFilename(char *);
		void setSearch(char *);
		void setReplace(char *);
		
		void replace() const;
		
		private:
		std::string m_filename;
		std::string m_search;
		std::string m_replace;

		std::string replaceString(const std::string&) const;
		bool		verify() const; 	
};