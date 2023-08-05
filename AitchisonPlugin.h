#ifndef AITCHISONPLUGIN_H
#define AITCHISONPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class AitchisonPlugin : public Plugin
{
public: 
 std::string toString() {return "Aitchison";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
