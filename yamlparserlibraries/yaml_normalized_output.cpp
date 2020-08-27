#include "yaml_normalized_output.h"
#include "./utils/comparison_utils.h"

// ---------------------------------------------------------------------------------
// ------------------------------ YamlNormalizedOutput --------------------------
// ---------------------------------------------------------------------------------

namespace yaml_normalization
{
YamlNormalizedOutput::YamlNormalizedOutput(std::vector<YAML::Node>* info, std::unique_ptr<std::string>* error_code)
{
    this->data = info;

    this->error = std::unique_ptr<std::string>(new std::string());

    this->error = std::move(*error_code);
}

YamlNormalizedOutput::~YamlNormalizedOutput()
{
    if (this->data != nullptr)
    {
        delete this->data;
    }
}

bool YamlNormalizedOutput::equivalent(NormalizedOutput* compared_object)
{
    if (!this->getError()->get()->empty() || !compared_object->getError()->get()->empty())
    {
        return (*this->getError()->get() == *compared_object->getError()->get());
    }
    else
    {
        std::vector<YAML::Node>* data_one = static_cast<std::vector<YAML::Node>*>(this->getData());

        std::vector<YAML::Node>* data_two = static_cast<std::vector<YAML::Node>*>(compared_object->getData());

        if (data_one && data_two)
        {
            return compare_utils::CompareMultipleNodes(data_one, data_two);
        }
        else
        {
            return data_one == data_two;
        }
    }
}

void* YamlNormalizedOutput::getData()
{
    return static_cast<void*>(this->data);
}

std::unique_ptr<std::string>* YamlNormalizedOutput::getError()
{
    return &this->error;
}
} // namespace yaml_normalization