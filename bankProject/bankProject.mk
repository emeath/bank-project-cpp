##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=bankProject
ConfigurationName      :=Debug
WorkspacePath          :=/home/mm/Workspaces/ws-cpp/cpp/cpp
ProjectPath            :=/home/mm/Workspaces/ws-cpp/bank-project-cpp/bankProject
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Matheus
Date                   :=22/11/22
CodeLitePath           :=/home/mm/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="bankProject.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/Account.cpp$(ObjectSuffix) $(IntermediateDirectory)/CPF.cpp$(ObjectSuffix) $(IntermediateDirectory)/Person.cpp$(ObjectSuffix) $(IntermediateDirectory)/SavingsAccount.cpp$(ObjectSuffix) $(IntermediateDirectory)/Employee.cpp$(ObjectSuffix) $(IntermediateDirectory)/Cashier.cpp$(ObjectSuffix) $(IntermediateDirectory)/Client.cpp$(ObjectSuffix) $(IntermediateDirectory)/Examples.cpp$(ObjectSuffix) $(IntermediateDirectory)/Manager.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/Authenticable.cpp$(ObjectSuffix) $(IntermediateDirectory)/CheckingAccount.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Account.cpp$(ObjectSuffix): Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Account.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Account.cpp$(DependSuffix) -MM Account.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/mm/Workspaces/ws-cpp/bank-project-cpp/bankProject/Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Account.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Account.cpp$(PreprocessSuffix): Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Account.cpp$(PreprocessSuffix) Account.cpp

$(IntermediateDirectory)/CPF.cpp$(ObjectSuffix): CPF.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/CPF.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/CPF.cpp$(DependSuffix) -MM CPF.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/mm/Workspaces/ws-cpp/bank-project-cpp/bankProject/CPF.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/CPF.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/CPF.cpp$(PreprocessSuffix): CPF.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/CPF.cpp$(PreprocessSuffix) CPF.cpp

$(IntermediateDirectory)/Person.cpp$(ObjectSuffix): Person.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Person.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Person.cpp$(DependSuffix) -MM Person.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/mm/Workspaces/ws-cpp/bank-project-cpp/bankProject/Person.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Person.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Person.cpp$(PreprocessSuffix): Person.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Person.cpp$(PreprocessSuffix) Person.cpp

$(IntermediateDirectory)/SavingsAccount.cpp$(ObjectSuffix): SavingsAccount.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/SavingsAccount.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/SavingsAccount.cpp$(DependSuffix) -MM SavingsAccount.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/mm/Workspaces/ws-cpp/bank-project-cpp/bankProject/SavingsAccount.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/SavingsAccount.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/SavingsAccount.cpp$(PreprocessSuffix): SavingsAccount.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/SavingsAccount.cpp$(PreprocessSuffix) SavingsAccount.cpp

$(IntermediateDirectory)/Employee.cpp$(ObjectSuffix): Employee.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Employee.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Employee.cpp$(DependSuffix) -MM Employee.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/mm/Workspaces/ws-cpp/bank-project-cpp/bankProject/Employee.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Employee.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Employee.cpp$(PreprocessSuffix): Employee.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Employee.cpp$(PreprocessSuffix) Employee.cpp

$(IntermediateDirectory)/Cashier.cpp$(ObjectSuffix): Cashier.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Cashier.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Cashier.cpp$(DependSuffix) -MM Cashier.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/mm/Workspaces/ws-cpp/bank-project-cpp/bankProject/Cashier.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Cashier.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Cashier.cpp$(PreprocessSuffix): Cashier.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Cashier.cpp$(PreprocessSuffix) Cashier.cpp

$(IntermediateDirectory)/Client.cpp$(ObjectSuffix): Client.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Client.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Client.cpp$(DependSuffix) -MM Client.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/mm/Workspaces/ws-cpp/bank-project-cpp/bankProject/Client.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Client.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Client.cpp$(PreprocessSuffix): Client.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Client.cpp$(PreprocessSuffix) Client.cpp

$(IntermediateDirectory)/Examples.cpp$(ObjectSuffix): Examples.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Examples.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Examples.cpp$(DependSuffix) -MM Examples.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/mm/Workspaces/ws-cpp/bank-project-cpp/bankProject/Examples.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Examples.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Examples.cpp$(PreprocessSuffix): Examples.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Examples.cpp$(PreprocessSuffix) Examples.cpp

$(IntermediateDirectory)/Manager.cpp$(ObjectSuffix): Manager.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Manager.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Manager.cpp$(DependSuffix) -MM Manager.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/mm/Workspaces/ws-cpp/bank-project-cpp/bankProject/Manager.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Manager.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Manager.cpp$(PreprocessSuffix): Manager.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Manager.cpp$(PreprocessSuffix) Manager.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/mm/Workspaces/ws-cpp/bank-project-cpp/bankProject/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Authenticable.cpp$(ObjectSuffix): Authenticable.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Authenticable.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Authenticable.cpp$(DependSuffix) -MM Authenticable.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/mm/Workspaces/ws-cpp/bank-project-cpp/bankProject/Authenticable.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Authenticable.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Authenticable.cpp$(PreprocessSuffix): Authenticable.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Authenticable.cpp$(PreprocessSuffix) Authenticable.cpp

$(IntermediateDirectory)/CheckingAccount.cpp$(ObjectSuffix): CheckingAccount.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/CheckingAccount.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/CheckingAccount.cpp$(DependSuffix) -MM CheckingAccount.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/mm/Workspaces/ws-cpp/bank-project-cpp/bankProject/CheckingAccount.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/CheckingAccount.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/CheckingAccount.cpp$(PreprocessSuffix): CheckingAccount.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/CheckingAccount.cpp$(PreprocessSuffix) CheckingAccount.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


