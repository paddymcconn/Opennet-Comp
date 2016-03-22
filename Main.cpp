// compile with: g++ --std=c++11 Main.cpp -o Main

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class Values{

private:
 std::vector<std::string> m_values;
 const std::string m_filename;

public:
 Values(const std::string filename) : m_filename(filename){
  //
 }

 void populateValues(){
  std::ifstream in_stream(m_filename);

  for(std::string line; getline(in_stream, line); ){
   m_values.push_back(line);
  }
 }

 void printValues(){
  for(auto i = m_values.begin(); i != m_values.end(); ++i){
   std::cout << *i << std::endl;
  }
 }

};

int main(int argc, char *argv[]){

 Values values("./test.csv");

 values.populateValues();
 values.printValues();
}

