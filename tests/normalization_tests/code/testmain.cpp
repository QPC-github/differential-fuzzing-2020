#include "libyaml_parser.h"
#include "yamlcpp_parser.h"
#include "normalization_test_utils.h"

#include "logger.h"

// ---------------------------------------------------------------------------------
// -------------------------------------- main -------------------------------------
// ---------------------------------------------------------------------------------
int main(int argc, char* args[])
{
    std::cout << "----------- yaml-cpp tests -----------" << std::endl;

    // std::string yamlcpp_error_msg;

    // std::vector<YAML::Node> parsed_nodes = parseYamlCpp(args[1], &yamlcpp_error_msg);

    // if (!parsed_nodes.empty())
    // {
    //     std::cout << "Number of nodes: "<< parsed_nodes.size() << std::endl;
    //     parsed_nodes.back().SetStyle(YAML::EmitterStyle::Flow);
    //     std::cout << parsed_nodes.back() << std::endl;
    // }
    // std::cout << "----------- libyaml tests -----------" << std::endl;

    // std::string libyaml_error_string = "";
    // std::vector<YAML::Node> libyaml_final_output = 
    //     normalizeLibyaml(parseLibyaml(args[1], &libyaml_error_string), &libyaml_error_string);
    
    // if (!libyaml_final_output.empty())
    // {
    //     std::cout << libyaml_final_output.back() << std::endl;
    // }
    // else
    // {
    //     std::cout << "Empty output" << std::endl;
    // }

    // std::cout << "- Conclusion: " << std::endl;

    // std::string buffer;

    // if( (!libyaml_error_string.empty() || !yamlcpp_error_msg.empty()))
    // {
    //     if (libyaml_error_string == yamlcpp_error_msg)
    //     {
    //         std::cout << "Cases equal!" << std::endl;
    //     }
    //     else
    //     {
    //         std::cout << "Cases different!" << std::endl;
    //     }
    // }
    // else
    // {
    //     std::cout << "----------- compare -----------" << std::endl;

    //     if (compareMultipleNodesEmitterBased(&libyaml_final_output, &parsed_nodes))
    //     {
    //         std::cout << "Cases equal!" << std::endl;
    //     }
    //     else
    //     {
    //         std::cout << "Cases different!" << std::endl;
    //     }
    // }
    
    return 0;
}