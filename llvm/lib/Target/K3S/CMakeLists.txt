add_llvm_component_group(K3S)

set(LLVM_TARGET_DEFINITIONS K3S.td)

add_llvm_target(K3SCodeGen
  K3SRegisterInfo.cpp
  K3STargetMachine.cpp

  LINK_COMPONENTS
  Analysis
  AsmPrinter
  CodeGen
  CodeGenTypes
  Core
  MC
  SelectionDAG
  Support
  Target
  TargetParser
  TransformUtils

  ADD_TO_COMPONENT
  K3S
  )

add_subdirectory(MCTargetDesc)
add_subdirectory(TargetInfo)