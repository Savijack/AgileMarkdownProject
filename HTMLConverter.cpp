#include "HTMLConverter.h"

HTMLConverter::HTMLConverter(const std::string &filepath)
{
   ifstream file(filepath);
   string line;
   vector<string>lines;

   if (!file.is_open()) {
       cerr << "Error: Could not open the file." << endl;
       exit(0);
   }

   while (getline(file, line)) {
       lines.push_back(line);
   }

   file.close();
   for (int i = 0; i < lines.size(); i++)
   {
       cout << lines[i] << endl;
   }
}
