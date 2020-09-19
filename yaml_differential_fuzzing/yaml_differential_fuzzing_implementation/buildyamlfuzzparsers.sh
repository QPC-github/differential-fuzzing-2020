source ./paths_and_variables.sh

clang++ "$YAML_LIBRARY_PATHS"libyaml/src/.libs/libyaml.a "$YAML_LIBRARY_PATHS"yaml-cpp/build/libyaml-cpp.a \
-c "$YAML_PARSER_PATHS"yamlcpp_parser.cpp "$YAML_PARSER_PATHS"yaml_normalized_output.cpp \
"$YAML_PARSER_PATHS"libyaml_parser.cpp "$YAML_PARSER_PATHS"utils/comparison_utils.cpp \
"$YAML_PARSER_PATHS"utils/libyaml_utils.cpp differential_fuzzer.o \
-I "$YAML_LIBRARY_PATHS"yaml-cpp/include -I "$YAML_LIBRARY_PATHS"libyaml/ \
-I "$DIFFERENTIAL_FUZZER_PATHS"differential_fuzzing_lib -I "$YAML_LIBRARY_PATHS"yamlparserlibraries -I "$YAML_LIBRARY_PATHS" \
-g -fsanitize=address,fuzzer
