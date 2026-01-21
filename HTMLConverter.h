#include <string>
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

class HTMLConverter {

public:

   HTMLConverter(const string& filepath);
   void readMD(const string& filepath);
   void convert(const string& filepath);
   void outputToFile();

private:

   vector<string> lines;
   vector<string> output;
   string filepath;

};
