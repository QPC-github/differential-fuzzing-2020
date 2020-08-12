rm *.o testexecutable *.h.gch
bash buildtoybase.sh 
bash buildtoyfuzzparsers.sh

clang++ differentialfuzzer.o toyfuzzstringoutputbase.o toyfuzzintparser.o toyfuzzswitchparser.o \
./code/toytests.cpp \
-o toytestexecutable -I ../ -I ../differentialfuzzinglib/