add_llvm_component_library(LLVMK3SInfo
  K3STargetInfo.cpp

  LINK_COMPONENTS
  MC
  Support

  ADD_TO_COMPONENT
  K3S
  )